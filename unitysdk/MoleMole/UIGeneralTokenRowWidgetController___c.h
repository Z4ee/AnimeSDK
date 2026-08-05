#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FCC670)
#define MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCC6B0)
#define MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__INITBTNBIND_B__8_5_OFFSET UNITYSDK_OFFSET(0x19FCC6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTokenRowWidgetController___c_TypeDefinitionIndex = 91086;

	class UIGeneralTokenRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralTokenRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralTokenRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTokenRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EB20);
		}
		static ::System::Action** StaticGet___9__8_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTokenRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EB28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitBtnBind_b__8_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__INITBTNBIND_B__8_5_OFFSET))(this);
		}
	};
}
