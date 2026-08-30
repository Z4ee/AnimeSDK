#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_1_FD211ABC1DF6278D_METHOD_1_16C1AD826E20D4F8_OFFSET UNITYSDK_OFFSET(0x16909510)
#define CLASS_1_FD211ABC1DF6278D__CTOR_OFFSET UNITYSDK_OFFSET(0x16909500)

inline static constexpr unsigned int Class_1_FD211ABC1DF6278D_TypeDefinitionIndex = 77626;

class Class_1_FD211ABC1DF6278D : public ::System::Object
{
public:
	::RPG::Client::CakeRace::CakeRacePerformanceDataItem* KMDKEILKKMB; // 0x10

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_FD211ABC1DF6278D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_16C1AD826E20D4F8(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_FD211ABC1DF6278D_METHOD_1_16C1AD826E20D4F8_OFFSET))(this, a1, a2);
	}
};
