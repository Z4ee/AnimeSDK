#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x878960)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_EQUALS_OFFSET UNITYSDK_OFFSET(0x8788F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x878970)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_ISVALIDCELL_OFFSET UNITYSDK_OFFSET(0x8789E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x1A035100)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_ADDITION_2_OFFSET UNITYSDK_OFFSET(0x1A0352E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1A035060)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A035400)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A035480)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1A035240)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_SUBTRACTION_2_OFFSET UNITYSDK_OFFSET(0x1A035370)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1A0351A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8789D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0357A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4E6C30)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x878800)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x878A70)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x878AE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8789F0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowCell_TypeDefinitionIndex = 47913;

	struct alignas(4) HollowCell
	{
		static ::MoleMole::HollowChessboard::HollowCell* StaticGet_InvalidCell()
		{
			return (::MoleMole::HollowChessboard::HollowCell*)Il2CppClass::FromTypeDefinitionIndex(HollowCell_TypeDefinitionIndex)->GetStaticField(0xA7B0);
		}
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18

		/*
		::System::Void _ctor(::System::Int32 x, ::System::Int32 y, ::MoleMole::HollowChessboard::HollowChessboardUID chessboardUid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__CTOR_OFFSET))(this, x, y, chessboardUid);
		}
		*/

		::System::Void _ctor_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__CTOR_1_OFFSET))(this, x, y, z);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::MoleMole::HollowChessboard::HollowCell other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::MoleMole::HollowChessboard::HollowCell op_Addition(::MoleMole::HollowChessboard::HollowCell cell, ::UnityEngine::Vector3Int offset)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowCell, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_ADDITION_OFFSET))(cell, offset);
		}
		*/

		/*
		static ::MoleMole::HollowChessboard::HollowCell op_Addition_1(::UnityEngine::Vector3Int offset, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::UnityEngine::Vector3Int, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_ADDITION_1_OFFSET))(offset, cell);
		}
		*/

		/*
		static ::MoleMole::HollowChessboard::HollowCell op_Subtraction(::MoleMole::HollowChessboard::HollowCell cell, ::UnityEngine::Vector3Int offset)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowCell, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_SUBTRACTION_OFFSET))(cell, offset);
		}
		*/

		/*
		static ::MoleMole::HollowChessboard::HollowCell op_Subtraction_1(::UnityEngine::Vector3Int offset, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::UnityEngine::Vector3Int, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_SUBTRACTION_1_OFFSET))(offset, cell);
		}
		*/

		/*
		static ::MoleMole::HollowChessboard::HollowCell op_Addition_2(::MoleMole::HollowChessboard::HollowCell cell, ::MoleMole::Vector2Int offset)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_ADDITION_2_OFFSET))(cell, offset);
		}
		*/

		/*
		static ::MoleMole::HollowChessboard::HollowCell op_Subtraction_2(::MoleMole::HollowChessboard::HollowCell cell, ::MoleMole::Vector2Int offset)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_SUBTRACTION_2_OFFSET))(cell, offset);
		}
		*/

		static ::System::Boolean op_Equality(::MoleMole::HollowChessboard::HollowCell lhs, ::MoleMole::HollowChessboard::HollowCell rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MoleMole::HollowChessboard::HollowCell lhs, ::MoleMole::HollowChessboard::HollowCell rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsValidCell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL_ISVALIDCELL_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL___BASE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
