#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLeverSwitchState.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_2.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_AE183AB1ABCC95C3_TypeDefinitionIndex = 40862;

struct alignas(8) Struct_2_AE183AB1ABCC95C3
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::GameCore::FiveDimLeverSwitchState Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::String* Field_2_4; // 0x20
	::RPG::PoolList_1<::Struct_2_A725E4562D03EA4E_2>* Field_2_5; // 0x28
	::RPG::PoolList_1<::Struct_2_A725E4562D03EA4E_3>* Field_2_6; // 0x30
};
