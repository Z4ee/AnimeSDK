#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2D539C29BA420F0.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_91A07A3083D905F7_METHOD_2_5DA766D0B745D852_OFFSET UNITYSDK_OFFSET(0xC0D5460)
#define CLASS_2_91A07A3083D905F7_METHOD_2_C1164006D0F70FE3_OFFSET UNITYSDK_OFFSET(0xC0D54F0)
#define CLASS_2_91A07A3083D905F7__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D54E0)

inline static constexpr unsigned int Class_2_91A07A3083D905F7_TypeDefinitionIndex = 71600;

class Class_2_91A07A3083D905F7 : public ::Class_1_E2D539C29BA420F0
{
public:
	::System::UInt32 Field_2_0; // 0x18

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_91A07A3083D905F7__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_91A07A3083D905F7* Method_2_5DA766D0B745D852(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1, ::System::UInt32 a2)
	{
		return ((::Class_2_91A07A3083D905F7*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_91A07A3083D905F7_METHOD_2_5DA766D0B745D852_OFFSET))(a1, a2);
	}

	::System::Void Method_2_C1164006D0F70FE3(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_91A07A3083D905F7_METHOD_2_C1164006D0F70FE3_OFFSET))(this, a1, a2);
	}
};
