#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityLoginData; }

#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193126B0)
#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS23_0__GETACTIVITYLOGINDATABYACTIVITYID_B__0_OFFSET UNITYSDK_OFFSET(0x193126C0)
#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS23_0__GETACTIVITYLOGINDATABYACTIVITYID_B__1_OFFSET UNITYSDK_OFFSET(0x193126E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c__DisplayClass23_0_TypeDefinitionIndex = 58946;

	class ActivityModule___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityData* activityData; // 0x10
		::System::UInt32 activityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActivityLoginDataByActivityID_b__0(::RPG::Client::ActivityLoginData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLoginData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS23_0__GETACTIVITYLOGINDATABYACTIVITYID_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetActivityLoginDataByActivityID_b__1(::RPG::Client::ActivityLoginData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLoginData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS23_0__GETACTIVITYLOGINDATABYACTIVITYID_B__1_OFFSET))(this, a1);
		}
	};
}
