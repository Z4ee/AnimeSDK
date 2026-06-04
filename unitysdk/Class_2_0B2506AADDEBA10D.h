#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD211ABC1DF6278D.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRaceCatUI3DPerformancePrepareData; }
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }
namespace System { class String; }

#define CLASS_2_0B2506AADDEBA10D_METHOD_2_2644C37735E3DE3E_OFFSET UNITYSDK_OFFSET(0x13AC3350)
#define CLASS_2_0B2506AADDEBA10D_METHOD_2_9111D726AD54154A_OFFSET UNITYSDK_OFFSET(0x13AC31D0)
#define CLASS_2_0B2506AADDEBA10D_METHOD_2_C1C102A69D607332_OFFSET UNITYSDK_OFFSET(0x13AC32D0)
#define CLASS_2_0B2506AADDEBA10D_METHOD_2_DF3E6C4E87C9A21C_OFFSET UNITYSDK_OFFSET(0x13AC3170)
#define CLASS_2_0B2506AADDEBA10D__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC31C0)

inline static constexpr unsigned int Class_2_0B2506AADDEBA10D_TypeDefinitionIndex = 72621;

class Class_2_0B2506AADDEBA10D : public ::Class_1_FD211ABC1DF6278D
{
public:
	// static const ::System::String* Field_2_0; // 0x0

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_0B2506AADDEBA10D__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_0B2506AADDEBA10D* Method_2_DF3E6C4E87C9A21C(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_0B2506AADDEBA10D*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_0B2506AADDEBA10D_METHOD_2_DF3E6C4E87C9A21C_OFFSET))(a1);
	}

	::System::Void Method_2_9111D726AD54154A(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_0B2506AADDEBA10D_METHOD_2_9111D726AD54154A_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_C1C102A69D607332(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_0B2506AADDEBA10D_METHOD_2_C1C102A69D607332_OFFSET))(a1);
	}

	::System::Void Method_2_2644C37735E3DE3E(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0B2506AADDEBA10D_METHOD_2_2644C37735E3DE3E_OFFSET))(this, a1, a2);
	}
};
