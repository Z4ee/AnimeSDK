#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_356;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_463067CB4A542AEE_4_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xBB17F30)
#define CLASS_1_463067CB4A542AEE_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBB17B40)
#define CLASS_1_463067CB4A542AEE_4_EQUALS_OFFSET UNITYSDK_OFFSET(0xBB17E50)
#define CLASS_1_463067CB4A542AEE_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBB17CA0)
#define CLASS_1_463067CB4A542AEE_4_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xBB176F0)
#define CLASS_1_463067CB4A542AEE_4_GET_PROTO_OFFSET UNITYSDK_OFFSET(0xBB17720)
#define CLASS_1_463067CB4A542AEE_4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBB17B20)
#define CLASS_1_463067CB4A542AEE_4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBB17AF0)
#define CLASS_1_463067CB4A542AEE_4_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xBB179E0)
#define CLASS_1_463067CB4A542AEE_4_SET_PROTO_OFFSET UNITYSDK_OFFSET(0xBB17730)
#define CLASS_1_463067CB4A542AEE_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBB17740)
#define CLASS_1_463067CB4A542AEE_4__CLONE___OFFSET UNITYSDK_OFFSET(0xBB17EB0)
#define CLASS_1_463067CB4A542AEE_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBB17F10)
#define CLASS_1_463067CB4A542AEE_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBB176E0)

inline static constexpr unsigned int Class_1_463067CB4A542AEE_4_TypeDefinitionIndex = 79286;

class Class_1_463067CB4A542AEE_4 : public ::System::Object
{
public:
	::Class_1_D17272E82AE804C2_356* _Proto_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_D17272E82AE804C2_356* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_356*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_463067CB4A542AEE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_4*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_356* get_Proto()
	{
		return ((::Class_1_D17272E82AE804C2_356*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_GET_PROTO_OFFSET))(this);
	}

	::System::Void set_Proto(::Class_1_D17272E82AE804C2_356* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_356*))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_SET_PROTO_OFFSET))(this, a1);
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

	::System::Void Deconstruct(::Class_1_D17272E82AE804C2_356*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_356*&))((::PBYTE)hIl2Cpp + CLASS_1_463067CB4A542AEE_4_DECONSTRUCT_OFFSET))(this, a1);
	}
};
