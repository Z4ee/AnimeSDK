#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_98236523318AE319_Class_1_4E271783D45CB8C7;

#define CLASS_1_26F3F0BB91581A51_CLASS_1_AFE01D2510396323_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x167C3B20)
#define CLASS_1_26F3F0BB91581A51_CLASS_1_AFE01D2510396323__CTOR_OFFSET UNITYSDK_OFFSET(0x167C3B10)

inline static constexpr unsigned int Class_1_26F3F0BB91581A51_Class_1_AFE01D2510396323_TypeDefinitionIndex = 74152;

class Class_1_26F3F0BB91581A51_Class_1_AFE01D2510396323 : public ::System::Object
{
public:
	::Class_1_98236523318AE319_Class_1_4E271783D45CB8C7* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_AFE01D2510396323__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_AFE01D2510396323_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
