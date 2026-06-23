#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

namespace System { class Action; }

#define CLASS_2_D7C40262E70B49E1_METHOD_2_CA1F6A8D4711F0E8_OFFSET UNITYSDK_OFFSET(0x1672E360)
#define CLASS_2_D7C40262E70B49E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1672E580)

inline static constexpr unsigned int Class_2_D7C40262E70B49E1_TypeDefinitionIndex = 80691;

class Class_2_D7C40262E70B49E1 : public ::Class_1_3002EE73D986F5EA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C40262E70B49E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA1F6A8D4711F0E8(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D7C40262E70B49E1_METHOD_2_CA1F6A8D4711F0E8_OFFSET))(this, a1);
	}
};
