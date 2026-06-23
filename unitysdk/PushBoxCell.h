#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define PUSHBOXCELL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7D2B40)
#define PUSHBOXCELL_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D2AE0)
#define PUSHBOXCELL_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x143B3C80)
#define PUSHBOXCELL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6DB220)
#define PUSHBOXCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)
#define PUSHBOXCELL___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D2B50)

inline static constexpr unsigned int PushBoxCell_TypeDefinitionIndex = 41076;

struct alignas(4) PushBoxCell
{
	::System::Int32 x; // 0x10
	::System::Int32 y; // 0x14

	::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PUSHBOXCELL__CTOR_OFFSET))(this, x, y);
	}

	/*
	::System::Void _ctor_1(::MoleMole::HollowChessboard::HollowCell cell)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PUSHBOXCELL__CTOR_1_OFFSET))(this, cell);
	}
	*/

	/*
	static ::MoleMole::HollowChessboard::HollowCell op_Explicit(::PushBoxCell pushBoxCell)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PushBoxCell))((::PBYTE)hIl2Cpp + PUSHBOXCELL_OP_EXPLICIT_OFFSET))(pushBoxCell);
	}
	*/

	::System::Boolean Equals(::PushBoxCell other)
	{
		return ((::System::Boolean(*)(::PVOID, ::PushBoxCell))((::PBYTE)hIl2Cpp + PUSHBOXCELL_EQUALS_OFFSET))(this, other);
	}

	::System::Boolean Equals_1(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PUSHBOXCELL_EQUALS_1_OFFSET))(this, obj);
	}

	::System::Boolean __base_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PUSHBOXCELL___BASE_EQUALS_OFFSET))(this, P0);
	}
};
