#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define MIHOYO_SDK_INPUTSERVICE_DISABLEIME_OFFSET UNITYSDK_OFFSET(0x1C92CC40)
#define MIHOYO_SDK_INPUTSERVICE_ENABLEIME_OFFSET UNITYSDK_OFFSET(0x1C92CC70)
#define MIHOYO_SDK_INPUTSERVICE_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1C924CB0)
#define MIHOYO_SDK_INPUTSERVICE_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1C92CBE0)
#define MIHOYO_SDK_INPUTSERVICE_GETKEY_OFFSET UNITYSDK_OFFSET(0x1C92CBC0)
#define MIHOYO_SDK_INPUTSERVICE_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1C92CC00)
#define MIHOYO_SDK_INPUTSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C924BD0)
#define MIHOYO_SDK_INPUTSERVICE_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1C92CC20)
#define MIHOYO_SDK_INPUTSERVICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C92CB60)
#define MIHOYO_SDK_INPUTSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C92CCA0)
#define MIHOYO_SDK_INPUTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92CB50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputService_TypeDefinitionIndex = 20058;

	class InputService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputService**)Il2CppClass::FromTypeDefinitionIndex(InputService_TypeDefinitionIndex)->GetStaticField(0xA1A0);
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

		::UnityEngine::IMECompositionMode get_IMECompositionMode()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_GET_IMECOMPOSITIONMODE_OFFSET))(this);
		}

		::System::Void set_IMECompositionMode(::UnityEngine::IMECompositionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_SET_IMECOMPOSITIONMODE_OFFSET))(this, value);
		}

		::System::Void DisableIME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_DISABLEIME_OFFSET))(this);
		}

		::System::Void EnableIME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSERVICE_ENABLEIME_OFFSET))(this);
		}
	};
}
