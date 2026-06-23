#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_90E529DB4DCB014F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8205F0)
#define STRUCT_2_90E529DB4DCB014F_EQUALS_OFFSET UNITYSDK_OFFSET(0x820590)
#define STRUCT_2_90E529DB4DCB014F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x820600)
#define STRUCT_2_90E529DB4DCB014F_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x820660)
#define STRUCT_2_90E529DB4DCB014F_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x820750)
#define STRUCT_2_90E529DB4DCB014F_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x16890B10)
#define STRUCT_2_90E529DB4DCB014F_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x8206F0)
#define STRUCT_2_90E529DB4DCB014F_METHOD_2_704CAEDCD95E9E98_OFFSET UNITYSDK_OFFSET(0x16890A50)
#define STRUCT_2_90E529DB4DCB014F_METHOD_2_7499FDA35EC6FE21_OFFSET UNITYSDK_OFFSET(0x820650)
#define STRUCT_2_90E529DB4DCB014F_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8207D0)
#define STRUCT_2_90E529DB4DCB014F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x820580)
#define STRUCT_2_90E529DB4DCB014F__CCTOR_OFFSET UNITYSDK_OFFSET(0x168907E0)
#define STRUCT_2_90E529DB4DCB014F__CTOR_OFFSET UNITYSDK_OFFSET(0x820510)

inline static constexpr unsigned int Struct_2_90E529DB4DCB014F_TypeDefinitionIndex = 61839;

struct alignas(4) Struct_2_90E529DB4DCB014F
{
	static ::Struct_2_90E529DB4DCB014F* StaticGet_Field_2_0()
	{
		return (::Struct_2_90E529DB4DCB014F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_90E529DB4DCB014F_TypeDefinitionIndex)->GetStaticField(0xDFF0);
	}
	static ::System::UInt32* StaticGet_Field_2_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_90E529DB4DCB014F_TypeDefinitionIndex)->GetStaticField(0xDFF8);
	}
	::System::UInt32 Field_2_2; // 0x10
	::System::UInt32 Field_2_3; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_90E529DB4DCB014F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_GETHASHCODE_OFFSET))(this);
	}

	/*
	::MoleMole::Vector2Int Method_2_7499FDA35EC6FE21()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_METHOD_2_7499FDA35EC6FE21_OFFSET))(this);
	}
	*/

	static ::System::Boolean Method_2_704CAEDCD95E9E98(::Struct_2_90E529DB4DCB014F a1, ::Struct_2_90E529DB4DCB014F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_90E529DB4DCB014F, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_METHOD_2_704CAEDCD95E9E98_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_90E529DB4DCB014F a1, ::Struct_2_90E529DB4DCB014F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_90E529DB4DCB014F, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
