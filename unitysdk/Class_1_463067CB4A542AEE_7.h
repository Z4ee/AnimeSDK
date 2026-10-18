#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB0D8C97EC270D19;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_7_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x126621E0)
#define CLASS_1_463067CB4A542AEE_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x12661DF0)
#define CLASS_1_463067CB4A542AEE_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x12662100)
#define CLASS_1_463067CB4A542AEE_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12661F50)
#define CLASS_1_463067CB4A542AEE_7_GET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0x126619D0)
#define CLASS_1_463067CB4A542AEE_7_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x126619A0)
#define CLASS_1_463067CB4A542AEE_7_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12661DD0)
#define CLASS_1_463067CB4A542AEE_7_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12661DA0)
#define CLASS_1_463067CB4A542AEE_7_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x12661C90)
#define CLASS_1_463067CB4A542AEE_7_SET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0x126619E0)
#define CLASS_1_463067CB4A542AEE_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x126619F0)
#define CLASS_1_463067CB4A542AEE_7__CLONE___OFFSET UNITYSDK_OFFSET(0x12662160)
#define CLASS_1_463067CB4A542AEE_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x126621C0)
#define CLASS_1_463067CB4A542AEE_7__CTOR_OFFSET UNITYSDK_OFFSET(0x12661990)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_7_TypeDefinitionIndex = 82069;

class Class_1_463067CB4A542AEE_7 : public ::System::Object
{
public:
	::Class_1_DB0D8C97EC270D19* _EditResult_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_DB0D8C97EC270D19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB0D8C97EC270D19*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_7*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_DB0D8C97EC270D19* get_EditResult()
	{
		return ((::Class_1_DB0D8C97EC270D19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_GET_EDITRESULT_OFFSET))(this);
	}

	::System::Void set_EditResult(::Class_1_DB0D8C97EC270D19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB0D8C97EC270D19*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_SET_EDITRESULT_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE_7* a1, ::Class_1_463067CB4A542AEE_7* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_7*, ::Class_1_463067CB4A542AEE_7*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE_7* a1, ::Class_1_463067CB4A542AEE_7* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_7*, ::Class_1_463067CB4A542AEE_7*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE_7*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE_7* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_DB0D8C97EC270D19*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB0D8C97EC270D19*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_7_DECONSTRUCT_OFFSET))(this, a1);
	}
};
