#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DDAC2F6C97EB8AD;
class Class_1_6316F62414DBB680;

#define CLASS_1_8709217D255ACE0E_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x12793130)
#define CLASS_1_8709217D255ACE0E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x127930A0)
#define CLASS_1_8709217D255ACE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x12793020)

inline static constexpr unsigned int Class_1_8709217D255ACE0E_TypeDefinitionIndex = 69861;

class Class_1_8709217D255ACE0E : public ::System::Object
{
public:
	::Class_1_6316F62414DBB680* Field_1_1; // 0x10
	::Class_1_2DDAC2F6C97EB8AD* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2DDAC2F6C97EB8AD* a1, ::Class_1_6316F62414DBB680* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2DDAC2F6C97EB8AD*, ::Class_1_6316F62414DBB680*))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
