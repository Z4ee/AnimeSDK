#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CF570E1464558AD;
class Class_1_EFF6ABE3B36522D9_2;

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BF1EF0)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9BF5E00)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass215_0_TypeDefinitionIndex = 56757;

	class ActivityIdleLiveModule___c__DisplayClass215_0 : public ::System::Object
	{
	public:
		::Class_1_EFF6ABE3B36522D9_2* serverChapterRecord; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateChapterRecordData_b__0(::Class_1_6CF570E1464558AD* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6CF570E1464558AD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET))(this, x);
		}
	};
}
