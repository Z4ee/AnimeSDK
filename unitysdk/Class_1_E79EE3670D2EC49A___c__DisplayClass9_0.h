#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E79EE3670D2EC49A;
namespace System { class Action; }

#define CLASS_1_E79EE3670D2EC49A___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15274A30)
#define CLASS_1_E79EE3670D2EC49A___C__DISPLAYCLASS9_0___CREATEUIMENUBGMEXITCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x15274B50)

inline static constexpr unsigned int Class_1_E79EE3670D2EC49A___c__DisplayClass9_0_TypeDefinitionIndex = 79300;

class Class_1_E79EE3670D2EC49A___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::Action* onExit; // 0x10
	::Class_1_E79EE3670D2EC49A* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateUIMenuBGMExitCallback_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A___C__DISPLAYCLASS9_0___CREATEUIMENUBGMEXITCALLBACK_B__0_OFFSET))(this);
	}
};
