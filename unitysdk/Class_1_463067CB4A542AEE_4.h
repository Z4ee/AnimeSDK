#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_378;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_4_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB99DA00)
#define CLASS_1_463067CB4A542AEE_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB99D610)
#define CLASS_1_463067CB4A542AEE_4_EQUALS_OFFSET UNITYSDK_OFFSET(0xB99D920)
#define CLASS_1_463067CB4A542AEE_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB99D770)
#define CLASS_1_463067CB4A542AEE_4_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB99D1C0)
#define CLASS_1_463067CB4A542AEE_4_GET_PROTO_OFFSET UNITYSDK_OFFSET(0xB99D1F0)
#define CLASS_1_463067CB4A542AEE_4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB99D5F0)
#define CLASS_1_463067CB4A542AEE_4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB99D5C0)
#define CLASS_1_463067CB4A542AEE_4_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB99D4B0)
#define CLASS_1_463067CB4A542AEE_4_SET_PROTO_OFFSET UNITYSDK_OFFSET(0xB99D200)
#define CLASS_1_463067CB4A542AEE_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB99D210)
#define CLASS_1_463067CB4A542AEE_4__CLONE___OFFSET UNITYSDK_OFFSET(0xB99D980)
#define CLASS_1_463067CB4A542AEE_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB99D9E0)
#define CLASS_1_463067CB4A542AEE_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB99D1B0)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_4_TypeDefinitionIndex = 80610;

class Class_1_463067CB4A542AEE_4 : public ::System::Object
{
public:
	::Class_1_D17272E82AE804C2_378* _Proto_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_D17272E82AE804C2_378* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_378*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_4*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_378* get_Proto()
	{
		return ((::Class_1_D17272E82AE804C2_378*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_GET_PROTO_OFFSET))(this);
	}

	::System::Void set_Proto(::Class_1_D17272E82AE804C2_378* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_378*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_SET_PROTO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_463067CB4A542AEE_4* a1, ::Class_1_463067CB4A542AEE_4* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_4*, ::Class_1_463067CB4A542AEE_4*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_463067CB4A542AEE_4* a1, ::Class_1_463067CB4A542AEE_4* a2)
	{
		return ((::System::Boolean(*)(::Class_1_463067CB4A542AEE_4*, ::Class_1_463067CB4A542AEE_4*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_463067CB4A542AEE_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_463067CB4A542AEE_4*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_463067CB4A542AEE_4* _Clone__()
	{
		return ((::Class_1_463067CB4A542AEE_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::Class_1_D17272E82AE804C2_378*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_378*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_DECONSTRUCT_OFFSET))(this, a1);
	}
};
