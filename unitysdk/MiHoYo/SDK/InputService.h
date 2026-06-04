#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define MIHOYO_SDK_INPUTSERVICE_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x183459C0)
#define MIHOYO_SDK_INPUTSERVICE_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x18345A30)
#define MIHOYO_SDK_INPUTSERVICE_GETKEY_OFFSET UNITYSDK_OFFSET(0x18345A00)
#define MIHOYO_SDK_INPUTSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x183458C0)
#define MIHOYO_SDK_INPUTSERVICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18345980)
#define MIHOYO_SDK_INPUTSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18345A60)
#define MIHOYO_SDK_INPUTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18345970)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputService_TypeDefinitionIndex = 7895;

	class InputService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputService**)Il2CppClass::FromTypeDefinitionIndex(InputService_TypeDefinitionIndex)->GetStaticField(0x149A0);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::InputService* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GETKEYDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GETKEY_OFFSET))(this, a1);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GETKEYUP_OFFSET))(this, a1);
		}
	};
}
