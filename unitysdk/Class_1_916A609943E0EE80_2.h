#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_19;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_916A609943E0EE80_2_COMPARETO_OFFSET UNITYSDK_OFFSET(0x16351590)
#define CLASS_1_916A609943E0EE80_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16351EF0)
#define CLASS_1_916A609943E0EE80_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x16351DF0)
#define CLASS_1_916A609943E0EE80_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16351A70)
#define CLASS_1_916A609943E0EE80_2_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16351500)
#define CLASS_1_916A609943E0EE80_2_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16351530)
#define CLASS_1_916A609943E0EE80_2_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0x16351540)
#define CLASS_1_916A609943E0EE80_2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x163519D0)
#define CLASS_1_916A609943E0EE80_2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16351930)
#define CLASS_1_916A609943E0EE80_2_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x16351860)
#define CLASS_1_916A609943E0EE80_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16351620)
#define CLASS_1_916A609943E0EE80_2__CLONE___OFFSET UNITYSDK_OFFSET(0x16352260)
#define CLASS_1_916A609943E0EE80_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16351560)
#define CLASS_1_916A609943E0EE80_2__CTOR_2_OFFSET UNITYSDK_OFFSET(0x163522C0)
#define CLASS_1_916A609943E0EE80_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16351550)

inline static constexpr unsigned int Class_1_916A609943E0EE80_2_TypeDefinitionIndex = 80133;

class Class_1_916A609943E0EE80_2 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::Boolean _IsTrial_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_19*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2__CTOR_2_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Boolean get_IsTrial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_GET_ISTRIAL_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_916A609943E0EE80_2* a1, ::Class_1_916A609943E0EE80_2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_916A609943E0EE80_2*, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_916A609943E0EE80_2* a1, ::Class_1_916A609943E0EE80_2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_916A609943E0EE80_2*, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_916A609943E0EE80_2* _Clone__()
	{
		return ((::Class_1_916A609943E0EE80_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2__CLONE___OFFSET))(this);
	}
};
