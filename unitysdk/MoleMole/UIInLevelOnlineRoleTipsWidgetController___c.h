#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DC3E50)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC3E90)
#define MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__ONUIINIT_B__27_0_OFFSET UNITYSDK_OFFSET(0x17DC3EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelOnlineRoleTipsWidgetController___c_TypeDefinitionIndex = 58424;

	class UIInLevelOnlineRoleTipsWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelOnlineRoleTipsWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelOnlineRoleTipsWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelOnlineRoleTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42B20);
		}
		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelOnlineRoleTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42B28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELONLINEROLETIPSWIDGETCONTROLLER___C__ONUIINIT_B__27_0_OFFSET))(this);
		}
	};
}
