#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_AF65C3A968E836D2_Enum_3_9EF644ED89A28AC6.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0AEBFEBDADDA07AC;
namespace MoleMole::Config { class ConfigHollowChessboard; }

inline static constexpr unsigned int Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9_TypeDefinitionIndex = 58930;

struct alignas(8) Class_2_88B80D299B89D687_Struct_2_13C6FDA4CA0B0BD9
{
	::Class_1_0AEBFEBDADDA07AC* Field_2_2; // 0x10
	::MoleMole::Config::ConfigHollowChessboard* Field_2_1; // 0x18
	::System::ValueTuple_2<::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowChessboard::HollowCell> Field_2_3; // 0x20
	::Class_5_AF65C3A968E836D2_Enum_3_9EF644ED89A28AC6 Field_2_0; // 0x30
	::System::Boolean Field_2_5; // 0x34
	::MoleMole::HollowChessboard::HollowCell Field_2_4; // 0x38
};
