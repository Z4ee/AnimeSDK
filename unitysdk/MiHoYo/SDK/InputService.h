#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define MIHOYO_SDK_INPUTSERVICE_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1944C840)
#define MIHOYO_SDK_INPUTSERVICE_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x194529F0)
#define MIHOYO_SDK_INPUTSERVICE_GETKEY_OFFSET UNITYSDK_OFFSET(0x194529C0)
#define MIHOYO_SDK_INPUTSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1944C760)
#define MIHOYO_SDK_INPUTSERVICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19452960)
#define MIHOYO_SDK_INPUTSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19452A20)
#define MIHOYO_SDK_INPUTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19452950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputService_TypeDefinitionIndex = 18814;

	class InputService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputService**)Il2CppClass::FromTypeDefinitionIndex(InputService_TypeDefinitionIndex)->GetStaticField(0x9EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::InputService* get_Instance()
		{
			return ((::MiHoYo::SDK::InputService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputService* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_SET_INSTANCE_OFFSET))(value);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GETKEYDOWN_OFFSET))(this, key);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GETKEY_OFFSET))(this, key);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GETKEYUP_OFFSET))(this, key);
		}
	};
}
