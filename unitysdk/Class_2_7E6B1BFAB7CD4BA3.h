#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD211ABC1DF6278D.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_7E6B1BFAB7CD4BA3_METHOD_2_28B95F30DDB6A3D3_OFFSET UNITYSDK_OFFSET(0xCC08CB0)
#define CLASS_2_7E6B1BFAB7CD4BA3_METHOD_2_5B9072CB260E5578_OFFSET UNITYSDK_OFFSET(0xCC08D30)
#define CLASS_2_7E6B1BFAB7CD4BA3__CTOR_OFFSET UNITYSDK_OFFSET(0xCC08D20)

inline static constexpr unsigned int Class_2_7E6B1BFAB7CD4BA3_TypeDefinitionIndex = 72619;

class Class_2_7E6B1BFAB7CD4BA3 : public ::Class_1_FD211ABC1DF6278D
{
public:
	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_7E6B1BFAB7CD4BA3__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_7E6B1BFAB7CD4BA3* Method_2_28B95F30DDB6A3D3(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_7E6B1BFAB7CD4BA3*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_7E6B1BFAB7CD4BA3_METHOD_2_28B95F30DDB6A3D3_OFFSET))(a1);
	}

	::System::Void Method_2_5B9072CB260E5578(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_7E6B1BFAB7CD4BA3_METHOD_2_5B9072CB260E5578_OFFSET))(this, a1, a2);
	}
};
