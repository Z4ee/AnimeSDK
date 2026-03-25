#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_494;
class Class_0_16E4307DCC419505_499;
namespace System { class String; }

#define CLASS_1_C584489F76966D79_2_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0xB8C8E60)
#define CLASS_1_C584489F76966D79_2_METHOD_1_9BD82D5B883ABACD_OFFSET UNITYSDK_OFFSET(0xB8C8D50)
#define CLASS_1_C584489F76966D79_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB8C8FE0)
#define CLASS_1_C584489F76966D79_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C8D40)
#define CLASS_1_C584489F76966D79_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB8C9050)

inline static constexpr unsigned int Class_1_C584489F76966D79_2_TypeDefinitionIndex = 64456;

class Class_1_C584489F76966D79_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_499* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_499* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_499*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_9BD82D5B883ABACD()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_METHOD_1_9BD82D5B883ABACD_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_494* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_494*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
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
