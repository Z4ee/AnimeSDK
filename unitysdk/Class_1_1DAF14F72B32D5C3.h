#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_4;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_1DAF14F72B32D5C3_COMPARETO_OFFSET UNITYSDK_OFFSET(0x143D2950)
#define CLASS_1_1DAF14F72B32D5C3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x143D2EE0)
#define CLASS_1_1DAF14F72B32D5C3_EQUALS_OFFSET UNITYSDK_OFFSET(0x143D2E60)
#define CLASS_1_1DAF14F72B32D5C3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x143D2CD0)
#define CLASS_1_1DAF14F72B32D5C3_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x143D28C0)
#define CLASS_1_1DAF14F72B32D5C3_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x143D28F0)
#define CLASS_1_1DAF14F72B32D5C3_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0x143D2900)
#define CLASS_1_1DAF14F72B32D5C3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x143D2CB0)
#define CLASS_1_1DAF14F72B32D5C3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x143D2C80)
#define CLASS_1_1DAF14F72B32D5C3_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x143D2BB0)
#define CLASS_1_1DAF14F72B32D5C3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143D29E0)
#define CLASS_1_1DAF14F72B32D5C3__CLONE___OFFSET UNITYSDK_OFFSET(0x143D3050)
#define CLASS_1_1DAF14F72B32D5C3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x143D2920)
#define CLASS_1_1DAF14F72B32D5C3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x143D30B0)
#define CLASS_1_1DAF14F72B32D5C3__CTOR_OFFSET UNITYSDK_OFFSET(0x143D2910)

inline static constexpr unsigned int Class_1_1DAF14F72B32D5C3_TypeDefinitionIndex = 74116;

class Class_1_1DAF14F72B32D5C3 : public ::System::Object
{
public:
	::System::Boolean _IsTrial_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_4*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_1DAF14F72B32D5C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DAF14F72B32D5C3*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3__CTOR_2_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Boolean get_IsTrial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_GET_ISTRIAL_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_1DAF14F72B32D5C3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1DAF14F72B32D5C3*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_1DAF14F72B32D5C3* a1, ::Class_1_1DAF14F72B32D5C3* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1DAF14F72B32D5C3*, ::Class_1_1DAF14F72B32D5C3*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_1DAF14F72B32D5C3* a1, ::Class_1_1DAF14F72B32D5C3* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1DAF14F72B32D5C3*, ::Class_1_1DAF14F72B32D5C3*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1DAF14F72B32D5C3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1DAF14F72B32D5C3*))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_1DAF14F72B32D5C3* _Clone__()
	{
		return ((::Class_1_1DAF14F72B32D5C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAF14F72B32D5C3__CLONE___OFFSET))(this);
	}
};
