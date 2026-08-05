#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"

namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetIMECompositionMode; }
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateSetIMECompositionMode; }

#define MIHOYO_SDK_MIHOYOBASESDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBE3940)
#define MIHOYO_SDK_MIHOYOBASESDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE3980)
#define MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_0_OFFSET UNITYSDK_OFFSET(0x1DBE3990)
#define MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_1_OFFSET UNITYSDK_OFFSET(0x1DBE3A30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK___c_TypeDefinitionIndex = 37304;

	class MiHoYoBaseSDK___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode** StaticGet___9__59_0()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK___c_TypeDefinitionIndex)->GetStaticField(0x29D60);
		}
		static ::MiHoYo::SDK::MiHoYoBaseSDK___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoBaseSDK___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK___c_TypeDefinitionIndex)->GetStaticField(0x29D68);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode** StaticGet___9__59_1()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK___c_TypeDefinitionIndex)->GetStaticField(0x29D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::IMECompositionMode _RegisterInputSystem_b__59_0()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_0_OFFSET))(this);
		}

		::System::Void _RegisterInputSystem_b__59_1(::UnityEngine::IMECompositionMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_1_OFFSET))(this, mode);
		}
	};
}
