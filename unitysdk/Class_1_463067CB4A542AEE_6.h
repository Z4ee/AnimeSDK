#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB0D8C97EC270D19;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_6_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB3783E0)
#define CLASS_1_463067CB4A542AEE_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB377FF0)
#define CLASS_1_463067CB4A542AEE_6_EQUALS_OFFSET UNITYSDK_OFFSET(0xB378300)
#define CLASS_1_463067CB4A542AEE_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB378150)
#define CLASS_1_463067CB4A542AEE_6_GET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0xB377BD0)
#define CLASS_1_463067CB4A542AEE_6_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB377BA0)
#define CLASS_1_463067CB4A542AEE_6_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB377FD0)
#define CLASS_1_463067CB4A542AEE_6_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB377FA0)
#define CLASS_1_463067CB4A542AEE_6_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB377E90)
#define CLASS_1_463067CB4A542AEE_6_SET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0xB377BE0)
#define CLASS_1_463067CB4A542AEE_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB377BF0)
#define CLASS_1_463067CB4A542AEE_6__CLONE___OFFSET UNITYSDK_OFFSET(0xB378360)
#define CLASS_1_463067CB4A542AEE_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3783C0)
#define CLASS_1_463067CB4A542AEE_6__CTOR_OFFSET UNITYSDK_OFFSET(0xB377B90)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_6_TypeDefinitionIndex = 82067;

class Class_1_463067CB4A542AEE_6 : public ::System::Object
{
public:
	::Class_1_DB0D8C97EC270D19* _EditResult_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_DB0D8C97EC270D19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB0D8C97EC270D19*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_6*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_DB0D8C97EC270D19* get_EditResult()
	{
		return ((::Class_1_DB0D8C97EC270D19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_GET_EDITRESULT_OFFSET))(this);
	}

	::System::Void set_EditResult(::Class_1_DB0D8C97EC270D19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB0D8C97EC270D19*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_SET_EDITRESULT_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE_6* a1, ::Class_1_463067CB4A542AEE_6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_6*, ::Class_1_463067CB4A542AEE_6*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE_6* a1, ::Class_1_463067CB4A542AEE_6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_6*, ::Class_1_463067CB4A542AEE_6*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE_6*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE_6* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_DB0D8C97EC270D19*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB0D8C97EC270D19*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_6_DECONSTRUCT_OFFSET))(this, a1);
	}
};
