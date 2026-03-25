#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_8ABD4A0388461DA7;

#define CLASS_2_42EA9C9474E11A06_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x87EC800)
#define CLASS_2_42EA9C9474E11A06__CTOR_OFFSET UNITYSDK_OFFSET(0x87EC8C0)
#define CLASS_2_42EA9C9474E11A06__ONBIND_OFFSET UNITYSDK_OFFSET(0x87EC7A0)
#define CLASS_2_42EA9C9474E11A06___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x87EC8F0)

inline static constexpr unsigned int Class_2_42EA9C9474E11A06_TypeDefinitionIndex = 58831;

class Class_2_42EA9C9474E11A06 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_2_8ABD4A0388461DA7* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42EA9C9474E11A06__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42EA9C9474E11A06__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_42EA9C9474E11A06_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42EA9C9474E11A06___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
