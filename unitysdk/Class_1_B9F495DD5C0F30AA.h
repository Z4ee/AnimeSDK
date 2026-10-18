#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_490;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_B9F495DD5C0F30AA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B51800)
#define CLASS_1_B9F495DD5C0F30AA_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B51700)
#define CLASS_1_B9F495DD5C0F30AA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B513D0)
#define CLASS_1_B9F495DD5C0F30AA_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x15B50ED0)
#define CLASS_1_B9F495DD5C0F30AA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15B51330)
#define CLASS_1_B9F495DD5C0F30AA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15B51290)
#define CLASS_1_B9F495DD5C0F30AA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x15B51140)
#define CLASS_1_B9F495DD5C0F30AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B50F00)
#define CLASS_1_B9F495DD5C0F30AA__CLONE___OFFSET UNITYSDK_OFFSET(0x15B51B40)
#define CLASS_1_B9F495DD5C0F30AA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B51BD0)
#define CLASS_1_B9F495DD5C0F30AA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B51BA0)

inline static constexpr unsigned int Class_1_B9F495DD5C0F30AA_TypeDefinitionIndex = 49711;

class Class_1_B9F495DD5C0F30AA : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_490* NONBAAINLPB; // 0x10
	::System::UInt32 KGHDNKONLNH; // 0x18

	::System::Void _ctor(::Class_1_B9F495DD5C0F30AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9F495DD5C0F30AA*))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA__CTOR_1_OFFSET))(this);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_B9F495DD5C0F30AA* a1, ::Class_1_B9F495DD5C0F30AA* a2)
	{
		return ((::System::Boolean(*)(::Class_1_B9F495DD5C0F30AA*, ::Class_1_B9F495DD5C0F30AA*))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_B9F495DD5C0F30AA* a1, ::Class_1_B9F495DD5C0F30AA* a2)
	{
		return ((::System::Boolean(*)(::Class_1_B9F495DD5C0F30AA*, ::Class_1_B9F495DD5C0F30AA*))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B9F495DD5C0F30AA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B9F495DD5C0F30AA*))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_B9F495DD5C0F30AA* _Clone__()
	{
		return ((::Class_1_B9F495DD5C0F30AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F495DD5C0F30AA__CLONE___OFFSET))(this);
	}
};
