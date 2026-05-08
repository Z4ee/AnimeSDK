#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1431CF90)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1431CFD0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___C__PLAYLEVELUPANIMATION_B__15_1_OFFSET UNITYSDK_OFFSET(0x1431CFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestLevelWidgetController___c_TypeDefinitionIndex = 66315;

	class UIFishingContestLevelWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIFishingContestLevelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIFishingContestLevelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFishingContestLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2ECE0);
		}
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFishingContestLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2ECE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayLevelUpAnimation_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___C__PLAYLEVELUPANIMATION_B__15_1_OFFSET))(this);
		}
	};
}
