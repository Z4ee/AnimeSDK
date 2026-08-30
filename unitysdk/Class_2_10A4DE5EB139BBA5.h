#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD211ABC1DF6278D.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_10A4DE5EB139BBA5_METHOD_2_28B95F30DDB6A3D3_OFFSET UNITYSDK_OFFSET(0x14C5B7D0)
#define CLASS_2_10A4DE5EB139BBA5_METHOD_2_CDC534DAA5BDE54A_OFFSET UNITYSDK_OFFSET(0x14C5B850)
#define CLASS_2_10A4DE5EB139BBA5__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5B840)

inline static constexpr unsigned int Class_2_10A4DE5EB139BBA5_TypeDefinitionIndex = 77632;

class Class_2_10A4DE5EB139BBA5 : public ::Class_1_FD211ABC1DF6278D
{
public:
	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_10A4DE5EB139BBA5__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_10A4DE5EB139BBA5* Method_2_28B95F30DDB6A3D3(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_10A4DE5EB139BBA5*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_10A4DE5EB139BBA5_METHOD_2_28B95F30DDB6A3D3_OFFSET))(a1);
	}

	::System::Void Method_2_CDC534DAA5BDE54A(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_10A4DE5EB139BBA5_METHOD_2_CDC534DAA5BDE54A_OFFSET))(this, a1, a2);
	}
};
