#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xD4789B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xD478C50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD478880)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanReviewPhaseItemViewModel___c__DisplayClass0_0_TypeDefinitionIndex = 79120;

	class LimaoNewsPlanReviewPhaseItemViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWindowService* windowService; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* phaseData; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsPlanService* planService; // 0x20
		::System::UInt32 planID; // 0x28
		::System::Boolean isFinished; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET))(this);
		}

		::System::Void _Create_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET))(this);
		}
	};
}
