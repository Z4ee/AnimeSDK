#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1469AA20)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1469AA60)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET UNITYSDK_OFFSET(0x1469AA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowJoystickModePopWindowController___c_TypeDefinitionIndex = 56778;

	class UIHollowJoystickModePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowJoystickModePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A340);
		}
		static ::MoleMole::UIHollowJoystickModePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowJoystickModePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowJoystickModePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBtnClicked_b__8_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET))(this, vp);
		}
	};
}
