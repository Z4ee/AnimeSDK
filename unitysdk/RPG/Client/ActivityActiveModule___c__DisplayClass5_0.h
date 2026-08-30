#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC31C0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS5_0__GETACTIVEACTIVITYDATABYACTIVITYID_B__0_OFFSET UNITYSDK_OFFSET(0x1ABC3DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule___c__DisplayClass5_0_TypeDefinitionIndex = 61476;

	class ActivityActiveModule___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 activityID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActiveActivityDataByActivityID_b__0(::RPG::Client::ActiveActivityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS5_0__GETACTIVEACTIVITYDATABYACTIVITYID_B__0_OFFSET))(this, a1);
		}
	};
}
