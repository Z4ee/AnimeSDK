#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A196E90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS33_0__ISCHAPTERFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x1A198170)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int StoryLine___c__DisplayClass33_0_TypeDefinitionIndex = 71554;

	class StoryLine___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsChapterFinished_b__0(::RPG::Client::ActivityIdleLive::IdleLiveChapter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS33_0__ISCHAPTERFINISHED_B__0_OFFSET))(this, a1);
		}
	};
}
