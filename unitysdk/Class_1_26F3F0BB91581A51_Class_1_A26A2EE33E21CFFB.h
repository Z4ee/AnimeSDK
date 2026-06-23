#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x130BCC00)
#define CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB__CTOR_OFFSET UNITYSDK_OFFSET(0x130BCBF0)

inline static constexpr unsigned int Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_TypeDefinitionIndex = 61072;

class Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
