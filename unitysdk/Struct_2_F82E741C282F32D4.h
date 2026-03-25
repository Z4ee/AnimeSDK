#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CrystalState.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9DD8A46984F1AFFD;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define STRUCT_2_F82E741C282F32D4_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x20E59F0)
#define STRUCT_2_F82E741C282F32D4_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x20E5970)

inline static constexpr unsigned int Struct_2_F82E741C282F32D4_TypeDefinitionIndex = 33532;

struct alignas(8) Struct_2_F82E741C282F32D4
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::Client::LittleGame::FiveDim::CrystalState Field_2_1; // 0x14
	::RPG::PoolList_1<::System::Int32>* Field_2_2; // 0x18
	::RPG::PoolList_1<::System::Int32>* Field_2_3; // 0x20
	::System::Int32 Field_2_4; // 0x28
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_2_5; // 0x30
	::System::Single Field_2_6; // 0x38
	::RPG::Client::LittleGame::FiveDim::CrystalState Field_2_7; // 0x3C
	::RPG::GCFreeClosure::ClosureEvent_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::Client::LittleGame::FiveDim::CrystalState> Field_2_8; // 0x40

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F82E741C282F32D4_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F82E741C282F32D4_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}
};
