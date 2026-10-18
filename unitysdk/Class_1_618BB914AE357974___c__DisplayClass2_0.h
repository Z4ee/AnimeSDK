#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_618BB914AE357974___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D700D0)
#define CLASS_1_618BB914AE357974___C__DISPLAYCLASS2_0___DOSENDFULLSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15D705D0)

inline static constexpr unsigned int Class_1_618BB914AE357974___c__DisplayClass2_0_TypeDefinitionIndex = 82070;

class Class_1_618BB914AE357974___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __DoSendFullSync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974___C__DISPLAYCLASS2_0___DOSENDFULLSYNC_B__0_OFFSET))(this);
	}
};
