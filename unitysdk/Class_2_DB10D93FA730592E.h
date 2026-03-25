#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2D539C29BA420F0.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRaceCatUI3DPerformancePrepareData; }
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }
namespace System { class String; }

#define CLASS_2_DB10D93FA730592E_METHOD_2_9111D726AD54154A_OFFSET UNITYSDK_OFFSET(0xCB1C980)
#define CLASS_2_DB10D93FA730592E_METHOD_2_BA778872265CF557_OFFSET UNITYSDK_OFFSET(0xCB1CB10)
#define CLASS_2_DB10D93FA730592E_METHOD_2_DF3E6C4E87C9A21C_OFFSET UNITYSDK_OFFSET(0xCB1C920)
#define CLASS_2_DB10D93FA730592E_METHOD_2_EDC76958733D8369_OFFSET UNITYSDK_OFFSET(0xCB1CA80)
#define CLASS_2_DB10D93FA730592E__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1C970)

inline static constexpr unsigned int Class_2_DB10D93FA730592E_TypeDefinitionIndex = 63559;

class Class_2_DB10D93FA730592E : public ::Class_1_E2D539C29BA420F0
{
public:
	// static const ::System::String* Field_2_0; // 0x0

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_DB10D93FA730592E__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_DB10D93FA730592E* Method_2_DF3E6C4E87C9A21C(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_DB10D93FA730592E*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_DB10D93FA730592E_METHOD_2_DF3E6C4E87C9A21C_OFFSET))(a1);
	}

	::System::Void Method_2_9111D726AD54154A(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_DB10D93FA730592E_METHOD_2_9111D726AD54154A_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_EDC76958733D8369(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_DB10D93FA730592E_METHOD_2_EDC76958733D8369_OFFSET))(a1);
	}

	::System::Void Method_2_BA778872265CF557(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB10D93FA730592E_METHOD_2_BA778872265CF557_OFFSET))(this, a1, a2);
	}
};
