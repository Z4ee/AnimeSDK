#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/Struct_2_90CF7B92576C9A88.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6360C4960CAEFC9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1297AB10)

inline static constexpr unsigned int Class_1_6360C4960CAEFC9B_TypeDefinitionIndex = 38672;

class Class_1_6360C4960CAEFC9B : public ::System::Object
{
public:
	::Struct_2_90CF7B92576C9A88 Field_1_1; // 0x10
	::MoleMole::HollowChessboard::ChessboardView::LineInfo Field_1_2; // 0x3C
	::System::Int32 Field_1_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6360C4960CAEFC9B__CTOR_OFFSET))(this);
	}
};
