#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_0DC61513D73BCE61_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1682EB90)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_248F2887B0C2212A_OFFSET UNITYSDK_OFFSET(0x1682EDF0)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_7810D6DCCECD04DA_OFFSET UNITYSDK_OFFSET(0x1682EEB0)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_7B58B56E62248330_OFFSET UNITYSDK_OFFSET(0x1682F060)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x1682F070)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1682EFD0)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_AF081070273CE162_1_OFFSET UNITYSDK_OFFSET(0x1682EE90)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x1682EE60)
#define CLASS_4_0DC61513D73BCE61_METHOD_4_DA401FEFA3B30845_OFFSET UNITYSDK_OFFSET(0x1682EE80)
#define CLASS_4_0DC61513D73BCE61_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1682EC60)
#define CLASS_4_0DC61513D73BCE61__CCTOR_OFFSET UNITYSDK_OFFSET(0x1682EBE0)
#define CLASS_4_0DC61513D73BCE61__CTOR_OFFSET UNITYSDK_OFFSET(0x1682ED40)

inline static constexpr unsigned int Class_4_0DC61513D73BCE61_TypeDefinitionIndex = 68948;

class Class_4_0DC61513D73BCE61 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x238; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_4_5; // 0x50
	::MoleMole::HollowChessboard::HollowCell Field_4_7; // 0x58
	::MoleMole::HollowChessboard::HollowCell Field_4_6; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_ONCLEAN_OFFSET))(this);
	}

	::System::Void Method_4_248F2887B0C2212A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_248F2887B0C2212A_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_4_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_AF081070273CE162_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Method_4_DA401FEFA3B30845()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_DA401FEFA3B30845_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_4_AF081070273CE162_1()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_AF081070273CE162_1_OFFSET))(this);
	}

	static ::Class_4_0DC61513D73BCE61* Method_4_7810D6DCCECD04DA()
	{
		return ((::Class_4_0DC61513D73BCE61*(*)())((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_7810D6DCCECD04DA_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_4_7B58B56E62248330(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_7B58B56E62248330_OFFSET))(this, a1);
	}

	::System::Void Method_4_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_0DC61513D73BCE61_METHOD_4_944725D8BEE125D5_OFFSET))(this, a1);
	}
};
