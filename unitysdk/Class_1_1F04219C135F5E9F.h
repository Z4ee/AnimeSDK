#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimStatisticPlayerActionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_433F704C0E180372;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_1F04219C135F5E9F_CLEAR_OFFSET UNITYSDK_OFFSET(0x16795200)
#define CLASS_1_1F04219C135F5E9F_METHOD_1_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0x16794C30)
#define CLASS_1_1F04219C135F5E9F_ONALLOC_OFFSET UNITYSDK_OFFSET(0x167955C0)
#define CLASS_1_1F04219C135F5E9F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x167957A0)
#define CLASS_1_1F04219C135F5E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x167957E0)

inline static constexpr unsigned int Class_1_1F04219C135F5E9F_TypeDefinitionIndex = 33580;

class Class_1_1F04219C135F5E9F : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* Field_1_9; // 0x20
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* Field_1_11; // 0x28
	::RPG::PoolList_1<::System::UInt32>* Field_1_22; // 0x30
	::RPG::PoolDictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_19; // 0x38
	::System::String* Field_1_1; // 0x40
	::RPG::PoolList_1<::System::UInt32>* Field_1_21; // 0x48
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>* Field_1_15; // 0x50
	::RPG::PoolList_1<::System::UInt32>* Field_1_20; // 0x58
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_433F704C0E180372*>* Field_1_14; // 0x60
	::System::UInt32 Field_1_13; // 0x68
	::System::UInt32 Field_1_10; // 0x6C
	::RPG::Client::LittleGame::FiveDim::FiveDimEnterType Field_1_4; // 0x70
	::System::UInt32 Field_1_17; // 0x74
	::System::UInt32 Field_1_12; // 0x78
	::System::Single Field_1_5; // 0x7C
	::System::UInt32 Field_1_3; // 0x80
	::System::UInt32 Field_1_6; // 0x84
	::System::UInt32 Field_1_8; // 0x88
	::System::UInt32 Field_1_23; // 0x8C
	::RPG::Client::LittleGame::FiveDim::FiveDimExitType Field_1_7; // 0x90
	::System::Single Field_1_18; // 0x94
	::System::UInt32 Field_1_16; // 0x98
	::System::UInt32 Field_1_24; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F04219C135F5E9F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C76FBF5BDDCD86A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F04219C135F5E9F_METHOD_1_C76FBF5BDDCD86A3_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F04219C135F5E9F_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F04219C135F5E9F_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F04219C135F5E9F_ONRECYCLE_OFFSET))(this);
	}
};
