#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALZONE_REWARDROWV2_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BE97C0)
#define MOLEMOLE_UIHADALZONE_REWARDROWV2_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE9800)
#define MOLEMOLE_UIHADALZONE_REWARDROWV2_WIDGETCONTROLLER___C___CLEARPREVS_B__16_0_OFFSET UNITYSDK_OFFSET(0x17BE9810)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardRowV2_WidgetController___c_TypeDefinitionIndex = 57214;

	class UIHadalZone_RewardRowV2_WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::UIItemIconBtnWidgetController*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::MoleMole::UIItemIconBtnWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardRowV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x490C0);
		}
		static ::MoleMole::UIHadalZone_RewardRowV2_WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_RewardRowV2_WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardRowV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x490C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV2_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV2_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ClearPrevs_b__16_0(::MoleMole::UIItemIconBtnWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDROWV2_WIDGETCONTROLLER___C___CLEARPREVS_B__16_0_OFFSET))(this, t);
		}
	};
}
