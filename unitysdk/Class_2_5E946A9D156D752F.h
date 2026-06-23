#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

namespace System { class Action; }

#define CLASS_2_5E946A9D156D752F_METHOD_2_13A24B87A78C90C7_OFFSET UNITYSDK_OFFSET(0x142BC720)
#define CLASS_2_5E946A9D156D752F__CTOR_OFFSET UNITYSDK_OFFSET(0x142BC710)

inline static constexpr unsigned int Class_2_5E946A9D156D752F_TypeDefinitionIndex = 58963;

class Class_2_5E946A9D156D752F : public ::Class_1_3002EE73D986F5EA
{
public:
	::System::Int32 Field_2_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5E946A9D156D752F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_13A24B87A78C90C7(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5E946A9D156D752F_METHOD_2_13A24B87A78C90C7_OFFSET))(this, a1);
	}
};
