#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_7D6CD5F3176F04DA;
class Class_2_E20BA7F7892B8F77;

#define CLASS_2_5EC7E6F4AADA2E6D__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB5E10)
#define CLASS_2_5EC7E6F4AADA2E6D__ONBIND_OFFSET UNITYSDK_OFFSET(0x10CB5D90)
#define CLASS_2_5EC7E6F4AADA2E6D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10CB5E40)

inline static constexpr unsigned int Class_2_5EC7E6F4AADA2E6D_TypeDefinitionIndex = 58841;

class Class_2_5EC7E6F4AADA2E6D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_2_7D6CD5F3176F04DA* Field_2_1; // 0x60
	::Class_2_E20BA7F7892B8F77* Field_2_0; // 0x68

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
