#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetIMECompositionMode; }
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetKeyEvent; }
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateSetIMECompositionMode; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAE570)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_TypeDefinitionIndex = 7503;

	class InputSystemDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0x15010);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode** StaticGet_IMECompositionModeSetter()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0x15018);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode** StaticGet_IMECompositionModeGetter()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0x15020);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyDownHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0x15028);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyUpHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0x15030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
