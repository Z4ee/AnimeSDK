#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F5DAB3B1DA3CD34.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleModule; }

#define CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_22D5AA9123E85BA4_METHOD_2_588F331121C63167_OFFSET UNITYSDK_OFFSET(0x1194EA70)
#define CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_22D5AA9123E85BA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1194E9B0)

inline static constexpr unsigned int Class_1_1F5DAB3B1DA3CD34_Class_2_22D5AA9123E85BA4_TypeDefinitionIndex = 55402;

class Class_1_1F5DAB3B1DA3CD34_Class_2_22D5AA9123E85BA4 : public ::Class_1_1F5DAB3B1DA3CD34
{
public:
	::RPG::Client::ScheduleModule* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_22D5AA9123E85BA4__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ScheduleData* Method_2_588F331121C63167()
	{
		return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_22D5AA9123E85BA4_METHOD_2_588F331121C63167_OFFSET))(this);
	}
};
