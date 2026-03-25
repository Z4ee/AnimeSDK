#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_044382BF73D8EA3B;

#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS77_0__CTOR_OFFSET UNITYSDK_OFFSET(0x104EFDA0)
#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS77_0___HANDLESYNCDYNAMICBORNCATMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x104F0CD0)

inline static constexpr unsigned int Class_1_044382BF73D8EA3B___c__DisplayClass77_0_TypeDefinitionIndex = 63476;

class Class_1_044382BF73D8EA3B___c__DisplayClass77_0 : public ::System::Object
{
public:
	::Class_1_044382BF73D8EA3B* __4__this; // 0x10
	::UnityEngine::Vector3 originalLookAtPosition; // 0x18
	::System::Single moveTimeSec; // 0x24
	::System::Boolean originStop; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS77_0__CTOR_OFFSET))(this);
	}

	::System::Void __HandleSyncDynamicBornCatMessage_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS77_0___HANDLESYNCDYNAMICBORNCATMESSAGE_B__0_OFFSET))(this);
	}
};
