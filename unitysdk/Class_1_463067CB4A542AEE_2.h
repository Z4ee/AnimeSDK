#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C71A717EF6221939_3;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_2_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x162546C0)
#define CLASS_1_463067CB4A542AEE_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x162542D0)
#define CLASS_1_463067CB4A542AEE_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x162545E0)
#define CLASS_1_463067CB4A542AEE_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16254430)
#define CLASS_1_463067CB4A542AEE_2_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16253E80)
#define CLASS_1_463067CB4A542AEE_2_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x16253EB0)
#define CLASS_1_463067CB4A542AEE_2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x162542B0)
#define CLASS_1_463067CB4A542AEE_2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16254280)
#define CLASS_1_463067CB4A542AEE_2_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x16254170)
#define CLASS_1_463067CB4A542AEE_2_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x16253EC0)
#define CLASS_1_463067CB4A542AEE_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16253ED0)
#define CLASS_1_463067CB4A542AEE_2__CLONE___OFFSET UNITYSDK_OFFSET(0x16254640)
#define CLASS_1_463067CB4A542AEE_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162546A0)
#define CLASS_1_463067CB4A542AEE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16253E70)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_2_TypeDefinitionIndex = 79284;

class Class_1_463067CB4A542AEE_2 : public ::System::Object
{
public:
	::Class_1_C71A717EF6221939_3* _Proto_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_C71A717EF6221939_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C71A717EF6221939_3*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_2*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_C71A717EF6221939_3* get_Proto()
	{
		return ((::Class_1_C71A717EF6221939_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_GET_PROTO_OFFSET))(this);
	}

	::System::Void set_Proto(::Class_1_C71A717EF6221939_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C71A717EF6221939_3*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_SET_PROTO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE_2* a1, ::Class_1_463067CB4A542AEE_2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_2*, ::Class_1_463067CB4A542AEE_2*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE_2* a1, ::Class_1_463067CB4A542AEE_2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_2*, ::Class_1_463067CB4A542AEE_2*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE_2*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE_2* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_C71A717EF6221939_3*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C71A717EF6221939_3*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_2_DECONSTRUCT_OFFSET))(this, a1);
	}
};
