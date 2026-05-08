#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D7B8E0)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7B920)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___C__TAKEREWARD_B__6_0_OFFSET UNITYSDK_OFFSET(0x10D7B930)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustLevelRewardRowWidgetController___c_TypeDefinitionIndex = 49969;

	class UIWorkBenchTrustLevelRewardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustLevelRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42230);
		}
		static ::MoleMole::UIWorkBenchTrustLevelRewardRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchTrustLevelRewardRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustLevelRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TakeReward_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___C__TAKEREWARD_B__6_0_OFFSET))(this);
		}
	};
}
