#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define CLASS_2_34260C6E999C2AE0_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10785590)

inline static constexpr unsigned int Class_2_34260C6E999C2AE0_Context_TypeDefinitionIndex = 48321;

class Class_2_34260C6E999C2AE0_Context : public ::MoleMole::UIControllerContextBase
{
public:
	::System::String* Title; // 0x28
	::System::Boolean ShowTabProg; // 0x30
	::System::Int32 SelectGroupId; // 0x34
	::System::Int32 FunctionId; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34260C6E999C2AE0_CONTEXT__CTOR_OFFSET))(this);
	}
};
