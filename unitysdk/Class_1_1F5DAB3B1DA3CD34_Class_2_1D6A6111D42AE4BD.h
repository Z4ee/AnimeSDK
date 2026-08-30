#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F5DAB3B1DA3CD34.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleModule; }

#define CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_1D6A6111D42AE4BD_METHOD_2_CFFE5894579AC7B6_OFFSET UNITYSDK_OFFSET(0xD81CD10)
#define CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_1D6A6111D42AE4BD__CTOR_OFFSET UNITYSDK_OFFSET(0xD81CB10)

inline static constexpr unsigned int Class_1_1F5DAB3B1DA3CD34_Class_2_1D6A6111D42AE4BD_TypeDefinitionIndex = 67899;

class Class_1_1F5DAB3B1DA3CD34_Class_2_1D6A6111D42AE4BD : public ::Class_1_1F5DAB3B1DA3CD34
{
public:
	::RPG::Client::ScheduleModule* DHPKGNANJED; // 0x10
	::System::UInt32 AGCILHPNGJI; // 0x18

	::System::Void _ctor(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_1D6A6111D42AE4BD__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ScheduleData* Method_2_CFFE5894579AC7B6()
	{
		return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5DAB3B1DA3CD34_CLASS_2_1D6A6111D42AE4BD_METHOD_2_CFFE5894579AC7B6_OFFSET))(this);
	}
};
