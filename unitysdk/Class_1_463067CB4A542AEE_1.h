#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2752BA61657CA7F7_4;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_1_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x157805F0)
#define CLASS_1_463067CB4A542AEE_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15780200)
#define CLASS_1_463067CB4A542AEE_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x15780510)
#define CLASS_1_463067CB4A542AEE_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15780360)
#define CLASS_1_463067CB4A542AEE_1_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1577FDB0)
#define CLASS_1_463067CB4A542AEE_1_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1577FDE0)
#define CLASS_1_463067CB4A542AEE_1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x157801E0)
#define CLASS_1_463067CB4A542AEE_1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x157801B0)
#define CLASS_1_463067CB4A542AEE_1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x157800A0)
#define CLASS_1_463067CB4A542AEE_1_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x1577FDF0)
#define CLASS_1_463067CB4A542AEE_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1577FE00)
#define CLASS_1_463067CB4A542AEE_1__CLONE___OFFSET UNITYSDK_OFFSET(0x15780570)
#define CLASS_1_463067CB4A542AEE_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x157805D0)
#define CLASS_1_463067CB4A542AEE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1577FDA0)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_1_TypeDefinitionIndex = 79283;

class Class_1_463067CB4A542AEE_1 : public ::System::Object
{
public:
	::Class_1_2752BA61657CA7F7_4* _Proto_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_2752BA61657CA7F7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_2752BA61657CA7F7_4* get_Proto()
	{
		return ((::Class_1_2752BA61657CA7F7_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_GET_PROTO_OFFSET))(this);
	}

	::System::Void set_Proto(::Class_1_2752BA61657CA7F7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_SET_PROTO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE_1* a1, ::Class_1_463067CB4A542AEE_1* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_1*, ::Class_1_463067CB4A542AEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE_1* a1, ::Class_1_463067CB4A542AEE_1* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_1*, ::Class_1_463067CB4A542AEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE_1* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_2752BA61657CA7F7_4*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_4*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_1_DECONSTRUCT_OFFSET))(this, a1);
	}
};
