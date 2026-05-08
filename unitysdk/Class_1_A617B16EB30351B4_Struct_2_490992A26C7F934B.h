#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_3D12AAAF9F217CF9_OFFSET UNITYSDK_OFFSET(0x46F550)
#define CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_6574EE5BBB9EBF9E_OFFSET UNITYSDK_OFFSET(0x2F1C00)
#define CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x2E2760)

inline static constexpr unsigned int Class_1_A617B16EB30351B4_Struct_2_490992A26C7F934B_TypeDefinitionIndex = 54877;

struct alignas(4) Class_1_A617B16EB30351B4_Struct_2_490992A26C7F934B
{
	::MoleMole::HollowChessboard::HollowCell Field_2_0; // 0x10
	::MoleMole::ChessboardPathLink Field_2_1; // 0x1C

	::MoleMole::HollowChessboard::HollowCell Method_2_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_2_3D12AAAF9F217CF9(::MoleMole::ChessboardPathLink a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessboardPathLink))((::PBYTE)hIl2Cpp + CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_3D12AAAF9F217CF9_OFFSET))(this, a1);
	}

	::MoleMole::ChessboardPathLink Method_2_6574EE5BBB9EBF9E()
	{
		return ((::MoleMole::ChessboardPathLink(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_6574EE5BBB9EBF9E_OFFSET))(this);
	}

	::System::Void Method_2_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_A617B16EB30351B4_STRUCT_2_490992A26C7F934B_METHOD_2_944725D8BEE125D5_OFFSET))(this, a1);
	}
};
