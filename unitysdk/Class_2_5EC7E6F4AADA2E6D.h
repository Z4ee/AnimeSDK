#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_A56B51611DD80BAA;
class Class_2_D2E2B5C1B8CC1B01;

#define CLASS_2_5EC7E6F4AADA2E6D__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3ABB0)
#define CLASS_2_5EC7E6F4AADA2E6D__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF3AB30)
#define CLASS_2_5EC7E6F4AADA2E6D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF3ABE0)

inline static constexpr unsigned int Class_2_5EC7E6F4AADA2E6D_TypeDefinitionIndex = 67147;

class Class_2_5EC7E6F4AADA2E6D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_2_D2E2B5C1B8CC1B01* Field_2_0; // 0x60
	::Class_2_A56B51611DD80BAA* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC7E6F4AADA2E6D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC7E6F4AADA2E6D__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC7E6F4AADA2E6D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
