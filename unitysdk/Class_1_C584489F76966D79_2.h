#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_595;
class Class_0_16E4307DCC419505_600;
namespace System { class String; }

#define CLASS_1_C584489F76966D79_2_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0xAD326B0)
#define CLASS_1_C584489F76966D79_2_METHOD_1_9BD82D5B883ABACD_OFFSET UNITYSDK_OFFSET(0xAD32590)
#define CLASS_1_C584489F76966D79_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAD32830)
#define CLASS_1_C584489F76966D79_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAD32580)
#define CLASS_1_C584489F76966D79_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAD328A0)

inline static constexpr unsigned int Class_1_C584489F76966D79_2_TypeDefinitionIndex = 74326;

class Class_1_C584489F76966D79_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_600* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_600* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_9BD82D5B883ABACD()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_METHOD_1_9BD82D5B883ABACD_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_595* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_595*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
