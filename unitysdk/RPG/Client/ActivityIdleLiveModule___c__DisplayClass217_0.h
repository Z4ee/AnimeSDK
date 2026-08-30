#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82DE034E4ED86DE3;

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC614C00)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__ISCHAPTERFINALACTPLAYED_B__0_OFFSET UNITYSDK_OFFSET(0xC614C10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass217_0_TypeDefinitionIndex = 61635;

	class ActivityIdleLiveModule___c__DisplayClass217_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsChapterFinalActPlayed_b__0(::Class_1_82DE034E4ED86DE3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_82DE034E4ED86DE3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__ISCHAPTERFINALACTPLAYED_B__0_OFFSET))(this, a1);
		}
	};
}
