#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F8FDA7DB08D27C5C_METHOD_2_7B58B56E62248330_OFFSET UNITYSDK_OFFSET(0xE7E8DF0)
#define CLASS_2_F8FDA7DB08D27C5C_METHOD_2_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0xE7E8E20)
#define CLASS_2_F8FDA7DB08D27C5C_METHOD_2_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0xE7E8DD0)
#define CLASS_2_F8FDA7DB08D27C5C_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xE7E8E10)
#define CLASS_2_F8FDA7DB08D27C5C_METHOD_2_DA401FEFA3B30845_OFFSET UNITYSDK_OFFSET(0xE7E8DC0)
#define CLASS_2_F8FDA7DB08D27C5C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE7E8E00)
#define CLASS_2_F8FDA7DB08D27C5C__CTOR_OFFSET UNITYSDK_OFFSET(0xE7E8D30)

inline static constexpr unsigned int Class_2_F8FDA7DB08D27C5C_TypeDefinitionIndex = 72043;

class Class_2_F8FDA7DB08D27C5C : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_2_0; // 0x18
	::MoleMole::HollowChessboard::HollowCell Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FDA7DB08D27C5C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Method_2_DA401FEFA3B30845()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FDA7DB08D27C5C_METHOD_2_DA401FEFA3B30845_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_2_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FDA7DB08D27C5C_METHOD_2_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_2_7B58B56E62248330(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FDA7DB08D27C5C_METHOD_2_7B58B56E62248330_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FDA7DB08D27C5C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FDA7DB08D27C5C_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_F8FDA7DB08D27C5C_METHOD_2_944725D8BEE125D5_OFFSET))(this, a1);
	}
};
