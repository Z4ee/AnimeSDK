#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_20;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_916A609943E0EE80_2_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB232FF0)
#define CLASS_1_916A609943E0EE80_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB233950)
#define CLASS_1_916A609943E0EE80_2_EQUALS_OFFSET UNITYSDK_OFFSET(0xB233850)
#define CLASS_1_916A609943E0EE80_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2334D0)
#define CLASS_1_916A609943E0EE80_2_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB232F60)
#define CLASS_1_916A609943E0EE80_2_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB232F90)
#define CLASS_1_916A609943E0EE80_2_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0xB232FA0)
#define CLASS_1_916A609943E0EE80_2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB233430)
#define CLASS_1_916A609943E0EE80_2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB233390)
#define CLASS_1_916A609943E0EE80_2_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB2332C0)
#define CLASS_1_916A609943E0EE80_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB233080)
#define CLASS_1_916A609943E0EE80_2__CLONE___OFFSET UNITYSDK_OFFSET(0xB233CC0)
#define CLASS_1_916A609943E0EE80_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB232FC0)
#define CLASS_1_916A609943E0EE80_2__CTOR_2_OFFSET UNITYSDK_OFFSET(0xB233D20)
#define CLASS_1_916A609943E0EE80_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB232FB0)

inline static constexpr unsigned int Class_1_916A609943E0EE80_2_TypeDefinitionIndex = 81460;

class Class_1_916A609943E0EE80_2 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::Boolean _IsTrial_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_20*))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80_2__CTOR_1_OFFSET))(this, a1);
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
