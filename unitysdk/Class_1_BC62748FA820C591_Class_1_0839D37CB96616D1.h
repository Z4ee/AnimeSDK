#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_1_98236523318AE319_Class_1_4E271783D45CB8C7;

#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0xF724990)
#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1__CTOR_OFFSET UNITYSDK_OFFSET(0xF724980)

inline static constexpr unsigned int Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1_TypeDefinitionIndex = 69701;

class Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1 : public ::System::Object
{
public:
	::Class_1_3002D7CF5FEE9D3A* Field_1_0; // 0x10
	::Class_1_98236523318AE319_Class_1_4E271783D45CB8C7* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
