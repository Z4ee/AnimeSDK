#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F70EC0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS21_0__OPENMARBLEMAINPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x8F71350)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c__DisplayClass21_0_TypeDefinitionIndex = 53433;

	class ActivityMarbleUtils___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 tabID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenMarbleMainPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS21_0__OPENMARBLEMAINPAGE_B__0_OFFSET))(this);
		}
	};
}
