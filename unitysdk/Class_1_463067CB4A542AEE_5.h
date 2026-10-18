#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87EFB4AE600EE94A;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_5_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x155B1920)
#define CLASS_1_463067CB4A542AEE_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x155B1530)
#define CLASS_1_463067CB4A542AEE_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x155B1840)
#define CLASS_1_463067CB4A542AEE_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x155B1690)
#define CLASS_1_463067CB4A542AEE_5_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x155B10E0)
#define CLASS_1_463067CB4A542AEE_5_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x155B1110)
#define CLASS_1_463067CB4A542AEE_5_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x155B1510)
#define CLASS_1_463067CB4A542AEE_5_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x155B14E0)
#define CLASS_1_463067CB4A542AEE_5_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x155B13D0)
#define CLASS_1_463067CB4A542AEE_5_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x155B1120)
#define CLASS_1_463067CB4A542AEE_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x155B1130)
#define CLASS_1_463067CB4A542AEE_5__CLONE___OFFSET UNITYSDK_OFFSET(0x155B18A0)
#define CLASS_1_463067CB4A542AEE_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x155B1900)
#define CLASS_1_463067CB4A542AEE_5__CTOR_OFFSET UNITYSDK_OFFSET(0x155B10D0)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_5_TypeDefinitionIndex = 82066;

class Class_1_463067CB4A542AEE_5 : public ::System::Object
{
public:
	::Class_1_87EFB4AE600EE94A* _Proto_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_87EFB4AE600EE94A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87EFB4AE600EE94A*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_5*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_87EFB4AE600EE94A* get_Proto()
	{
		return ((::Class_1_87EFB4AE600EE94A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_GET_PROTO_OFFSET))(this);
	}

	::System::Void set_Proto(::Class_1_87EFB4AE600EE94A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87EFB4AE600EE94A*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_SET_PROTO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE_5* a1, ::Class_1_463067CB4A542AEE_5* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_5*, ::Class_1_463067CB4A542AEE_5*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE_5* a1, ::Class_1_463067CB4A542AEE_5* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_5*, ::Class_1_463067CB4A542AEE_5*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE_5*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE_5* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_87EFB4AE600EE94A*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87EFB4AE600EE94A*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_5_DECONSTRUCT_OFFSET))(this, a1);
	}
};
