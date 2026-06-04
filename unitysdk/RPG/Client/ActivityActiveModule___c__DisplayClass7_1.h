#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFF6ABE3B36522D9;
namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB082DD0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1___SYNCACTIVEACTIVITYDATALIST_B__1_OFFSET UNITYSDK_OFFSET(0xB0833E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule___c__DisplayClass7_1_TypeDefinitionIndex = 57385;

	class ActivityActiveModule___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::Class_1_EFF6ABE3B36522D9* protoData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncActiveActivityDataList_b__1(::RPG::Client::ActiveActivityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1___SYNCACTIVEACTIVITYDATALIST_B__1_OFFSET))(this, a1);
		}
	};
}
