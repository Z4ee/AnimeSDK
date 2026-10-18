#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC553980)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS23_0__OPENMARBLEMAINPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xC553DB0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS23_0__OPENMARBLEMAINPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xC553F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c__DisplayClass23_0_TypeDefinitionIndex = 65796;

	class ActivityMarbleUtils___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::System::Action* __9__1; // 0x18
		::System::UInt32 tabID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenMarbleMainPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS23_0__OPENMARBLEMAINPAGE_B__0_OFFSET))(this);
		}

		::System::Void _OpenMarbleMainPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS23_0__OPENMARBLEMAINPAGE_B__1_OFFSET))(this);
		}
	};
}
