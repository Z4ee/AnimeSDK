#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CrystalState.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_3.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define STRUCT_2_32BC7AB644206538_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x38459D0)
#define STRUCT_2_32BC7AB644206538_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x38459C0)

inline static constexpr unsigned int Struct_2_32BC7AB644206538_TypeDefinitionIndex = 40100;

struct alignas(8) Struct_2_32BC7AB644206538
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::Client::LittleGame::FiveDim::CrystalState Field_2_1; // 0x14
	::RPG::PoolList_1<::System::Int32>* Field_2_2; // 0x18
	::RPG::PoolList_1<::System::Int32>* Field_2_3; // 0x20
	::System::Int32 Field_2_4; // 0x28
	::System::Action_2<::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean>* Field_2_5; // 0x30
	::System::Single Field_2_6; // 0x38
	::RPG::Client::LittleGame::FiveDim::CrystalState Field_2_7; // 0x3C
	::System::Boolean Field_2_8; // 0x40
	::RPG::GCFreeClosure::ClosureEvent_3<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::Client::LittleGame::FiveDim::CrystalState, ::System::Boolean> Field_2_9; // 0x48

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_32BC7AB644206538_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_32BC7AB644206538_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}
};
