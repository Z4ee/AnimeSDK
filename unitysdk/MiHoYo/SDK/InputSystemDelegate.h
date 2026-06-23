#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetKeyEvent; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7EC60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_TypeDefinitionIndex = 19313;

	class InputSystemDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyUpHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA170);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyDownHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA178);
		}
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)Il2CppClass::FromTypeDefinitionIndex(InputSystemDelegate_TypeDefinitionIndex)->GetStaticField(0xA180);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
