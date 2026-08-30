#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_666;
class Class_0_16E4307DCC419505_671;
namespace System { class String; }

#define CLASS_1_C584489F76966D79_2_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0xC115520)
#define CLASS_1_C584489F76966D79_2_METHOD_1_9BD82D5B883ABACD_OFFSET UNITYSDK_OFFSET(0xC1153C0)
#define CLASS_1_C584489F76966D79_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC115750)
#define CLASS_1_C584489F76966D79_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC1153B0)

inline static constexpr unsigned int Class_1_C584489F76966D79_2_TypeDefinitionIndex = 80757;

class Class_1_C584489F76966D79_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_671* ENMLHGPNLNC; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_671* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_671*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_9BD82D5B883ABACD()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_METHOD_1_9BD82D5B883ABACD_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_666* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_2_TOSTRING_OFFSET))(this);
	}
};
