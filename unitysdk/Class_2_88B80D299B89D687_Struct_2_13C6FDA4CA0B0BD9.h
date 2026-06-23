#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_FCAF801AC482D3B5_Enum_3_9EF644ED89A28AC6.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0AEBFEBDADDA07AC;
namespace MoleMole::Config { class ConfigHollowChessboard; }

inline static constexpr unsigned int Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9_TypeDefinitionIndex = 79660;

struct alignas(8) Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9
{
	::MoleMole::Config::ConfigHollowChessboard* Field_2_1; // 0x10
	::Class_1_0AEBFEBDADDA07AC* Field_2_2; // 0x18
	::MoleMole::HollowChessboard::HollowCell Field_2_4; // 0x20
	::System::ValueTuple_2<::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowChessboard::HollowCell> Field_2_3; // 0x2C
	::System::Boolean Field_2_5; // 0x3C
	::Class_5_FCAF801AC482D3B5_Enum_3_9EF644ED89A28AC6 Field_2_0; // 0x40
};
