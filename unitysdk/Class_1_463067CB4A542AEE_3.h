#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A405CBF0C3FB5EE5_1;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_3_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x151FB080)
#define CLASS_1_463067CB4A542AEE_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x151FACB0)
#define CLASS_1_463067CB4A542AEE_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x151FAFA0)
#define CLASS_1_463067CB4A542AEE_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x151FAE00)
#define CLASS_1_463067CB4A542AEE_3_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x151FA860)
#define CLASS_1_463067CB4A542AEE_3_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x151FA890)
#define CLASS_1_463067CB4A542AEE_3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x151FAC90)
#define CLASS_1_463067CB4A542AEE_3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x151FAC60)
#define CLASS_1_463067CB4A542AEE_3_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x151FAB50)
#define CLASS_1_463067CB4A542AEE_3_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x151FA8A0)
#define CLASS_1_463067CB4A542AEE_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x151FA8B0)
#define CLASS_1_463067CB4A542AEE_3__CLONE___OFFSET UNITYSDK_OFFSET(0x151FB000)
#define CLASS_1_463067CB4A542AEE_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x151FB060)
#define CLASS_1_463067CB4A542AEE_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15E707A0)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_3_TypeDefinitionIndex = 75651;

class Class_1_463067CB4A542AEE_3 : public ::System::Object
{
public:
	::Class_1_A405CBF0C3FB5EE5_1* _Proto_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_A405CBF0C3FB5EE5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5_1*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_3*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_A405CBF0C3FB5EE5_1* get_Proto()
	{
		return ((::Class_1_A405CBF0C3FB5EE5_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_GET_PROTO_OFFSET))(this);
	}

	::System::Void set_Proto(::Class_1_A405CBF0C3FB5EE5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5_1*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_SET_PROTO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE_3* a1, ::Class_1_463067CB4A542AEE_3* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_3*, ::Class_1_463067CB4A542AEE_3*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE_3* a1, ::Class_1_463067CB4A542AEE_3* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_3*, ::Class_1_463067CB4A542AEE_3*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE_3*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE_3* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_A405CBF0C3FB5EE5_1*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5_1*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_3_DECONSTRUCT_OFFSET))(this, a1);
	}
};
