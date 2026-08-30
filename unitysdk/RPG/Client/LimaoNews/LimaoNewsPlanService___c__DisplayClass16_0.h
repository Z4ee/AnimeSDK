#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_D17272E82AE804C2_627;
namespace RPG::Client::LimaoNews { class LimaoNewsModule; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressResultViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55C170)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS16_0___FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1C55CE50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS16_0___FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x1C55CF70)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanService___c__DisplayClass16_0_TypeDefinitionIndex = 79010;

	class LimaoNewsPlanService___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsModule* limaoModule; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsPlanService* __4__this; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* resultViewModel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* __FinishCurrentPlanPhaseAndShowResultPage_b__0(::Class_1_5F4D64A4B97E38F9* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS16_0___FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_B__0_OFFSET))(this, a1);
		}

		::System::Void __FinishCurrentPlanPhaseAndShowResultPage_b__1(::Class_1_D17272E82AE804C2_627* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_627*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS16_0___FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_B__1_OFFSET))(this, a1);
		}
	};
}
