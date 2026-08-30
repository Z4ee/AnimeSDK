#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4D2CC0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC4D2D00)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C___ONINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0xC4D2D10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2ActivityPanelData___c_TypeDefinitionIndex = 61672;

	class ActivityBenefitV2ActivityPanelData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityBenefitV2ActivityPanelData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityBenefitV2ActivityPanelData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitV2ActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x625D0);
		}
		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitV2ActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x625D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C___ONINIT_B__3_1_OFFSET))(this);
		}
	};
}
