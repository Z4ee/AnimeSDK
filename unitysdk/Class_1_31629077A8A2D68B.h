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

#define CLASS_1_31629077A8A2D68B_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EE75E0)
#define CLASS_1_31629077A8A2D68B_METHOD_1_5BAA4479E0F421EC_OFFSET UNITYSDK_OFFSET(0x17EE6FE0)
#define CLASS_1_31629077A8A2D68B_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17EE79C0)
#define CLASS_1_31629077A8A2D68B_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17EE7BA0)
#define CLASS_1_31629077A8A2D68B__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE7BE0)

inline static constexpr unsigned int Class_1_31629077A8A2D68B_TypeDefinitionIndex = 39380;

class Class_1_31629077A8A2D68B : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::UInt32>* Field_1_22; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_1; // 0x20
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>* Field_1_15; // 0x28
	::System::String* Field_1_0; // 0x30
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* Field_1_11; // 0x38
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_433F704C0E180372*>* Field_1_14; // 0x40
	::RPG::PoolDictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_19; // 0x48
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* Field_1_9; // 0x50
	::RPG::PoolList_1<::System::UInt32>* Field_1_21; // 0x58
	::RPG::PoolList_1<::System::UInt32>* Field_1_20; // 0x60
	::System::UInt32 Field_1_12; // 0x68
	::RPG::Client::LittleGame::FiveDim::FiveDimExitType Field_1_7; // 0x6C
	::System::UInt32 Field_1_17; // 0x70
	::System::UInt32 Field_1_26; // 0x74
	::System::UInt32 Field_1_10; // 0x78
	::System::UInt32 Field_1_23; // 0x7C
	::System::UInt32 Field_1_16; // 0x80
	::System::Single Field_1_5; // 0x84
	::RPG::Client::LittleGame::FiveDim::FiveDimEnterType Field_1_4; // 0x88
	::System::UInt32 Field_1_8; // 0x8C
	::System::UInt32 Field_1_25; // 0x90
	::System::Single Field_1_18; // 0x94
	::System::UInt32 Field_1_6; // 0x98
	::System::UInt32 Field_1_3; // 0x9C
	::System::UInt32 Field_1_24; // 0xA0
	::System::UInt32 Field_1_13; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5BAA4479E0F421EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_METHOD_1_5BAA4479E0F421EC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_ONRECYCLE_OFFSET))(this);
	}
};
