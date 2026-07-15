#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animation; }

#define CLASS_2_42FA9CFF35EE5F45_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x1649D180)
#define CLASS_2_42FA9CFF35EE5F45__CTOR_OFFSET UNITYSDK_OFFSET(0x1649D2F0)
#define CLASS_2_42FA9CFF35EE5F45__ONBIND_OFFSET UNITYSDK_OFFSET(0x1649D290)

inline static constexpr unsigned int Class_2_42FA9CFF35EE5F45_TypeDefinitionIndex = 69080;

class Class_2_42FA9CFF35EE5F45 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x60
	::System::Nullable_1<::System::Boolean> Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42FA9CFF35EE5F45__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_42FA9CFF35EE5F45_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42FA9CFF35EE5F45__ONBIND_OFFSET))(this);
	}
};
