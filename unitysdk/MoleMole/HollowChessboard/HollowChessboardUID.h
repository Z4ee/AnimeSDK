#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7CEF20)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x7CEEC0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CEF30)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_ISVALID_OFFSET UNITYSDK_OFFSET(0x7CEEB0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x14181B80)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x14181950)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x7CEE00)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_TOLAYERNAME_OFFSET UNITYSDK_OFFSET(0x7CEEA0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CEE90)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_UNSERIALIZE_OFFSET UNITYSDK_OFFSET(0x14181670)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x14181BD0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x360640)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CTOR_OFFSET UNITYSDK_OFFSET(0x7CED90)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7CEF80)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CEFE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CF040)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardUID_TypeDefinitionIndex = 85241;

	struct alignas(4) HollowChessboardUID
	{
		static ::MoleMole::HollowChessboard::HollowChessboardUID* StaticGet_InvalidUid()
		{
			return (::MoleMole::HollowChessboard::HollowChessboardUID*)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardUID_TypeDefinitionIndex)->GetStaticField(0xAE40);
		}
		static ::System::Int32* StaticGet_CreateIndexSerializeRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardUID_TypeDefinitionIndex)->GetStaticField(0xAE48);
		}
		static ::System::Int32* StaticGet_CreateIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardUID_TypeDefinitionIndex)->GetStaticField(0xAE4C);
		}
		::System::Int32 _chessboardLocalID; // 0x10
		::System::Int32 ChessboardIndex; // 0x14

		::System::Void _ctor(::System::Int32 chessboardIndex, ::System::Boolean fix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CTOR_OFFSET))(this, chessboardIndex, fix);
		}

		::System::Void _ctor_1(::System::Int32 chessboardIndex, ::System::Int32 createIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CTOR_1_OFFSET))(this, chessboardIndex, createIndex);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CCTOR_OFFSET))();
		}

		::System::Int32 Serialize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_SERIALIZE_OFFSET))(this);
		}

		static ::MoleMole::HollowChessboard::HollowChessboardUID UnSerialize(::System::Int32 input)
		{
			return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_UNSERIALIZE_OFFSET))(input);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_TOSTRING_OFFSET))(this);
		}

		::System::String* ToLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_TOLAYERNAME_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::HollowChessboard::HollowChessboardUID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::MoleMole::HollowChessboard::HollowChessboardUID lhs, ::MoleMole::HollowChessboard::HollowChessboardUID rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MoleMole::HollowChessboard::HollowChessboardUID lhs, ::MoleMole::HollowChessboard::HollowChessboardUID rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
