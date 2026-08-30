#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD211ABC1DF6278D.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_08C0AABC100ED644_METHOD_2_16B6D9E8CAC01626_OFFSET UNITYSDK_OFFSET(0xBB1EA00)
#define CLASS_2_08C0AABC100ED644_METHOD_2_28B95F30DDB6A3D3_OFFSET UNITYSDK_OFFSET(0xBB1E980)
#define CLASS_2_08C0AABC100ED644__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1E9F0)

inline static constexpr unsigned int Class_2_08C0AABC100ED644_TypeDefinitionIndex = 77634;

class Class_2_08C0AABC100ED644 : public ::Class_1_FD211ABC1DF6278D
{
public:
	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_08C0AABC100ED644__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_08C0AABC100ED644* Method_2_28B95F30DDB6A3D3(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_08C0AABC100ED644*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_08C0AABC100ED644_METHOD_2_28B95F30DDB6A3D3_OFFSET))(a1);
	}

	::System::Void Method_2_16B6D9E8CAC01626(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_08C0AABC100ED644_METHOD_2_16B6D9E8CAC01626_OFFSET))(this, a1, a2);
	}
};
