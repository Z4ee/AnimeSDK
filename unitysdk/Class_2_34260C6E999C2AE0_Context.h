#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define CLASS_2_34260C6E999C2AE0_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x105C1860)

inline static constexpr unsigned int Class_2_34260C6E999C2AE0_Context_TypeDefinitionIndex = 68561;

class Class_2_34260C6E999C2AE0_Context : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Int32 FunctionId; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34260C6E999C2AE0_CONTEXT__CTOR_OFFSET))(this);
	}
};
