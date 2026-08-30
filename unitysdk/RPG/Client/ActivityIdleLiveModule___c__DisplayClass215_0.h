#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82DE034E4ED86DE3;
class Class_1_BB4B99DE4C2501EC_9;

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC614BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC614BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass215_0_TypeDefinitionIndex = 61634;

	class ActivityIdleLiveModule___c__DisplayClass215_0 : public ::System::Object
	{
	public:
		::Class_1_BB4B99DE4C2501EC_9* serverChapterRecord; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateChapterRecordData_b__0(::Class_1_82DE034E4ED86DE3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_82DE034E4ED86DE3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET))(this, a1);
		}
	};
}
