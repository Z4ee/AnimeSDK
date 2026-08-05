#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetIMECompositionMode; }
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetKeyEvent; }
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateSetIMECompositionMode; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFF6D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_TypeDefinitionIndex = 19658;

	class InputSystemDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyUpHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA1B0);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode** StaticGet_IMECompositionModeSetter()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA1B8);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyDownHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA1C0);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode** StaticGet_IMECompositionModeGetter()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA1C8);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA1D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
