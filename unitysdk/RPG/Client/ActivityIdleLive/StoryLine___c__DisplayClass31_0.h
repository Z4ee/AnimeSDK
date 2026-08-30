#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC6069D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS31_0__TRYGETCHAPTERBYINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xC607F90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int StoryLine___c__DisplayClass31_0_TypeDefinitionIndex = 74860;

	class StoryLine___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetChapterByIndex_b__0(::RPG::Client::ActivityIdleLive::IdleLiveChapter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE___C__DISPLAYCLASS31_0__TRYGETCHAPTERBYINDEX_B__0_OFFSET))(this, a1);
		}
	};
}
