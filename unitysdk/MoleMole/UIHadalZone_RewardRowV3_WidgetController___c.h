#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F5210)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149F5250)
#define MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___C___CLEARPREVS_B__14_0_OFFSET UNITYSDK_OFFSET(0x149F5260)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardRowV3_WidgetController___c_TypeDefinitionIndex = 71470;

	class UIHadalZone_RewardRowV3_WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::UIItemIconBtnWidgetController*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::MoleMole::UIItemIconBtnWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardRowV3_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CB40);
		}
		static ::MoleMole::UIHadalZone_RewardRowV3_WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_RewardRowV3_WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardRowV3_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CB48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ClearPrevs_b__14_0(::MoleMole::UIItemIconBtnWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV3_WIDGETCONTROLLER___C___CLEARPREVS_B__14_0_OFFSET))(this, t);
		}
	};
}
