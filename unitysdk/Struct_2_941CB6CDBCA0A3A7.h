#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_941CB6CDBCA0A3A7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x82A680)
#define STRUCT_2_941CB6CDBCA0A3A7_EQUALS_OFFSET UNITYSDK_OFFSET(0x82A660)
#define STRUCT_2_941CB6CDBCA0A3A7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x82A770)
#define STRUCT_2_941CB6CDBCA0A3A7_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x82A820)
#define STRUCT_2_941CB6CDBCA0A3A7_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x82A7C0)
#define STRUCT_2_941CB6CDBCA0A3A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x159441C0)
#define STRUCT_2_941CB6CDBCA0A3A7__CTOR_OFFSET UNITYSDK_OFFSET(0x42A0A0)

inline static constexpr unsigned int Struct_2_941CB6CDBCA0A3A7_TypeDefinitionIndex = 69770;

struct alignas(2) Struct_2_941CB6CDBCA0A3A7
{
	static ::Struct_2_941CB6CDBCA0A3A7* StaticGet_Field_2_7()
	{
		return (::Struct_2_941CB6CDBCA0A3A7*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_941CB6CDBCA0A3A7_TypeDefinitionIndex)->GetStaticField(0xFD60);
	}
	::System::Int16 Field_2_1; // 0x10
	::System::UInt16 Field_2_0; // 0x12

	::System::Void _ctor(::System::Int16 a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::UInt16))((::PBYTE)hIl2Cpp + STRUCT_2_941CB6CDBCA0A3A7__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_941CB6CDBCA0A3A7__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_941CB6CDBCA0A3A7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_941CB6CDBCA0A3A7))((::PBYTE)hIl2Cpp + STRUCT_2_941CB6CDBCA0A3A7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_941CB6CDBCA0A3A7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_941CB6CDBCA0A3A7_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_941CB6CDBCA0A3A7_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_941CB6CDBCA0A3A7_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
