#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_3.h"
#include "unitysdk/System/Object.h"

class Class_2_E4F99B6EE220D866;
namespace System { class String; }

#define CLASS_1_0F2E8E73A76CC2B1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1296F230)
#define CLASS_1_0F2E8E73A76CC2B1_METHOD_1_EEBBBDA578AF1337_1_OFFSET UNITYSDK_OFFSET(0x1296F1A0)
#define CLASS_1_0F2E8E73A76CC2B1_METHOD_1_EEBBBDA578AF1337_OFFSET UNITYSDK_OFFSET(0x1296F0F0)
#define CLASS_1_0F2E8E73A76CC2B1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1296F160)
#define CLASS_1_0F2E8E73A76CC2B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1296F0C0)

inline static constexpr unsigned int Class_1_0F2E8E73A76CC2B1_TypeDefinitionIndex = 42286;

class Class_1_0F2E8E73A76CC2B1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F2E8E73A76CC2B1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EEBBBDA578AF1337(::Class_2_E4F99B6EE220D866* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_E4F99B6EE220D866*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_0F2E8E73A76CC2B1_METHOD_1_EEBBBDA578AF1337_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F2E8E73A76CC2B1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_EEBBBDA578AF1337_1(::Class_2_E4F99B6EE220D866* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_E4F99B6EE220D866*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_0F2E8E73A76CC2B1_METHOD_1_EEBBBDA578AF1337_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F2E8E73A76CC2B1_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
