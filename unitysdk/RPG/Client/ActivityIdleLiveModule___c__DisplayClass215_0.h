#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E46AFE244F4A466;
class Class_1_BB4B99DE4C2501EC_4;

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB18DAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB1921A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass215_0_TypeDefinitionIndex = 57541;

	class ActivityIdleLiveModule___c__DisplayClass215_0 : public ::System::Object
	{
	public:
		::Class_1_BB4B99DE4C2501EC_4* serverChapterRecord; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateChapterRecordData_b__0(::Class_1_0E46AFE244F4A466* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0E46AFE244F4A466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET))(this, a1);
		}
	};
}
