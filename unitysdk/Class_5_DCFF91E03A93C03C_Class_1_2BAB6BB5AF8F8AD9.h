#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_DCFF91E03A93C03C_Struct_2_0AFF4972FB25A51D_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_5_DCFF91E03A93C03C;

#define CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_73F314EFDD72CB3F_OFFSET UNITYSDK_OFFSET(0x1256E440)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_7E85B802BB53AA1D_OFFSET UNITYSDK_OFFSET(0x1256D970)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_C980FBA18910E227_OFFSET UNITYSDK_OFFSET(0x1256DC40)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_EB821730ECABAA4F_OFFSET UNITYSDK_OFFSET(0x1256E770)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1256D960)

inline static constexpr unsigned int Class_5_DCFF91E03A93C03C_Class_1_2BAB6BB5AF8F8AD9_TypeDefinitionIndex = 83212;

class Class_5_DCFF91E03A93C03C_Class_1_2BAB6BB5AF8F8AD9 : public ::System::Object
{
public:
	::Class_5_DCFF91E03A93C03C* Field_1_2; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_1_1; // 0x18
	::MoleMole::Vector2Int Field_1_7; // 0x24
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7E85B802BB53AA1D(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_7E85B802BB53AA1D_OFFSET))(this, a1, a2);
	}

	::System::Double Method_1_C980FBA18910E227(::System::Boolean a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Double(*)(::PVOID, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_C980FBA18910E227_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_1_EB821730ECABAA4F(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_EB821730ECABAA4F_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Double> Method_1_73F314EFDD72CB3F(::Class_5_DCFF91E03A93C03C_Struct_2_0AFF4972FB25A51D_1& a1)
	{
		return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::Class_5_DCFF91E03A93C03C_Struct_2_0AFF4972FB25A51D_1&))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_73F314EFDD72CB3F_OFFSET))(this, a1);
	}
};
