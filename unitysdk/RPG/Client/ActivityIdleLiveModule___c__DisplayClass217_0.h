#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CF570E1464558AD;

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BF20B0)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__ISCHAPTERFINALACTPLAYED_B__0_OFFSET UNITYSDK_OFFSET(0x9BF5E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass217_0_TypeDefinitionIndex = 56758;

	class ActivityIdleLiveModule___c__DisplayClass217_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsChapterFinalActPlayed_b__0(::Class_1_6CF570E1464558AD* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6CF570E1464558AD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS217_0__ISCHAPTERFINALACTPLAYED_B__0_OFFSET))(this, x);
		}
	};
}
