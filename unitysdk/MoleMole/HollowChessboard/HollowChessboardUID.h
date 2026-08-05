#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6B8400)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x6B83A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6B8410)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_ISVALID_OFFSET UNITYSDK_OFFSET(0x6B8390)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x107F5600)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x107F53D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x6B82E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_TOLAYERNAME_OFFSET UNITYSDK_OFFSET(0x6B8380)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6B8370)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID_UNSERIALIZE_OFFSET UNITYSDK_OFFSET(0x107F50F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x107F5650)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x351090)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8270)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6B8460)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6B84C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDUID___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6B8520)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardUID_TypeDefinitionIndex = 57218;

	struct alignas(4) HollowChessboardUID
	{
		static ::System::Int32* StaticGet_CreateIndexSerializeRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardUID_TypeDefinitionIndex)->GetStaticField(0xA150);
		}
		static ::MoleMole::HollowChessboard::HollowChessboardUID* StaticGet_InvalidUid()
		{
			return (::MoleMole::HollowChessboard::HollowChessboardUID*)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardUID_TypeDefinitionIndex)->GetStaticField(0xA154);
		}
		static ::System::Int32* StaticGet_CreateIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardUID_TypeDefinitionIndex)->GetStaticField(0xA15C);
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
