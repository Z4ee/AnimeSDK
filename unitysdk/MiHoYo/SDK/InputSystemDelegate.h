#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetKeyEvent; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18202940)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_TypeDefinitionIndex = 7517;

	class InputSystemDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyDownHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xF050);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xF058);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyUpHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xF060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
