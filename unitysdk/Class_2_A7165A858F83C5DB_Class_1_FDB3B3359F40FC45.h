#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_E342D954CB576697;
namespace System { class Action; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_FDB3B3359F40FC45_METHOD_1_C0AF709020F3457A_OFFSET UNITYSDK_OFFSET(0x1198EA60)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_FDB3B3359F40FC45__CTOR_OFFSET UNITYSDK_OFFSET(0x1198EA50)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_FDB3B3359F40FC45_TypeDefinitionIndex = 56880;

class Class_2_A7165A858F83C5DB_Class_1_FDB3B3359F40FC45 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Class_3_E342D954CB576697* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_FDB3B3359F40FC45__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C0AF709020F3457A(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_FDB3B3359F40FC45_METHOD_1_C0AF709020F3457A_OFFSET))(this, a1);
	}
};
