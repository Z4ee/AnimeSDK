#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/Share/GridDir.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_A45BBD0DAD065011_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15439300)
#define CLASS_4_A45BBD0DAD065011_METHOD_4_7810D6DCCECD04DA_OFFSET UNITYSDK_OFFSET(0x154395B0)
#define CLASS_4_A45BBD0DAD065011_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15439520)
#define CLASS_4_A45BBD0DAD065011_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x154393D0)
#define CLASS_4_A45BBD0DAD065011__CCTOR_OFFSET UNITYSDK_OFFSET(0x15439350)
#define CLASS_4_A45BBD0DAD065011__CTOR_OFFSET UNITYSDK_OFFSET(0x15439480)

inline static constexpr unsigned int Class_4_A45BBD0DAD065011_TypeDefinitionIndex = 83894;

class Class_4_A45BBD0DAD065011 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x224; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_4_7; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_4_6; // 0x58
	::Share::GridDir Field_4_11; // 0x60
	::System::Int32 Field_4_4; // 0x64
	::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd Field_4_5; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_A45BBD0DAD065011__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A45BBD0DAD065011__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A45BBD0DAD065011_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A45BBD0DAD065011_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A45BBD0DAD065011_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_A45BBD0DAD065011* Method_4_7810D6DCCECD04DA()
	{
		return ((::Class_4_A45BBD0DAD065011*(*)())((::PBYTE)hIl2Cpp + CLASS_4_A45BBD0DAD065011_METHOD_4_7810D6DCCECD04DA_OFFSET))();
	}
};
