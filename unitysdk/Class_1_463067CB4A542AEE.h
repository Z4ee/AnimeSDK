#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_33;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xBDB8C00)
#define CLASS_1_463067CB4A542AEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBDB8810)
#define CLASS_1_463067CB4A542AEE_EQUALS_OFFSET UNITYSDK_OFFSET(0xBDB8B20)
#define CLASS_1_463067CB4A542AEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBDB8970)
#define CLASS_1_463067CB4A542AEE_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xBDB83C0)
#define CLASS_1_463067CB4A542AEE_GET_PROTO_OFFSET UNITYSDK_OFFSET(0xBDB83F0)
#define CLASS_1_463067CB4A542AEE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBDB87F0)
#define CLASS_1_463067CB4A542AEE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBDB87C0)
#define CLASS_1_463067CB4A542AEE_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xBDB86B0)
#define CLASS_1_463067CB4A542AEE_SET_PROTO_OFFSET UNITYSDK_OFFSET(0xBDB8400)
#define CLASS_1_463067CB4A542AEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBDB8410)
#define CLASS_1_463067CB4A542AEE__CLONE___OFFSET UNITYSDK_OFFSET(0xBDB8B80)
#define CLASS_1_463067CB4A542AEE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBDB8BE0)
#define CLASS_1_463067CB4A542AEE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB83B0)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_TypeDefinitionIndex = 79282;

class Class_1_463067CB4A542AEE : public ::System::Object
{
public:
	::Class_1_075C34D03AFA1215_33* _Proto_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_075C34D03AFA1215_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_33*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_33* get_Proto()
	{
		return ((::Class_1_075C34D03AFA1215_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_GET_PROTO_OFFSET))(this);
	}

	::System::Void set_Proto(::Class_1_075C34D03AFA1215_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_33*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_SET_PROTO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE* a1, ::Class_1_463067CB4A542AEE* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE*, ::Class_1_463067CB4A542AEE*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE* a1, ::Class_1_463067CB4A542AEE* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE*, ::Class_1_463067CB4A542AEE*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_075C34D03AFA1215_33*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_33*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_DECONSTRUCT_OFFSET))(this, a1);
	}
};
