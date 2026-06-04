#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB179A10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE___C__DISPLAYCLASS12_0___TRIGGERGIFT_B__0_OFFSET UNITYSDK_OFFSET(0xB179F80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int QuestionResponseService___c__DisplayClass12_0_TypeDefinitionIndex = 70227;

	class QuestionResponseService___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* giftIds; // 0x10
		::RPG::Client::BaseGameFlow* gameFlow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __TriggerGift_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE___C__DISPLAYCLASS12_0___TRIGGERGIFT_B__0_OFFSET))(this);
		}
	};
}
