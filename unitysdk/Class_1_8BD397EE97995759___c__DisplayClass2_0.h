#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_8BD397EE97995759___C__DISPLAYCLASS2_0__BINDVIEWCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x182351E0)
#define CLASS_1_8BD397EE97995759___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18234480)

inline static constexpr unsigned int Class_1_8BD397EE97995759___c__DisplayClass2_0_TypeDefinitionIndex = 71318;

class Class_1_8BD397EE97995759___c__DisplayClass2_0 : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BD397EE97995759___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _BindViewCallback_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BD397EE97995759___C__DISPLAYCLASS2_0__BINDVIEWCALLBACK_B__0_OFFSET))(this);
	}
};
