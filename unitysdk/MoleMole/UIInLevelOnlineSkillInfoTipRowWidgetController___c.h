#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINLEVELONLINESKILLINFOTIPROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D0A7C0)
#define MOLEMOLE_UIINLEVELONLINESKILLINFOTIPROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0A800)
#define MOLEMOLE_UIINLEVELONLINESKILLINFOTIPROWWIDGETCONTROLLER___C__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x15D0A810)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelOnlineSkillInfoTipRowWidgetController___c_TypeDefinitionIndex = 52636;

	class UIInLevelOnlineSkillInfoTipRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelOnlineSkillInfoTipRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelOnlineSkillInfoTipRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelOnlineSkillInfoTipRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32900);
		}
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelOnlineSkillInfoTipRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINESKILLINFOTIPROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINESKILLINFOTIPROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINESKILLINFOTIPROWWIDGETCONTROLLER___C__ONUIINIT_B__1_0_OFFSET))(this);
		}
	};
}
