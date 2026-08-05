#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_52C0807ED28D1F26;
class Class_2_52C0807ED28D1F26_Class_1_664EE56074FC9607;
namespace MoleMole { class AvatarShowSetting; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_52C0807ED28D1F26_STRUCT_2_82D2B015156CF84D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x666140)
#define CLASS_2_52C0807ED28D1F26_STRUCT_2_82D2B015156CF84D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_52C0807ED28D1F26_Struct_2_82D2B015156CF84D_TypeDefinitionIndex = 90123;

struct alignas(8) Class_2_52C0807ED28D1F26_Struct_2_82D2B015156CF84D
{
	::Class_2_52C0807ED28D1F26_Class_1_664EE56074FC9607* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Foundation::AssetPath Field_2_10; // 0x20
	::Class_2_52C0807ED28D1F26* Field_2_0; // 0x30
	::MoleMole::AvatarShowSetting* Field_2_4; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x40
	::System::Threading::CancellationToken Field_2_11; // 0x50
	::System::Int32 Field_2_2; // 0x58
	::System::Int32 Field_2_7; // 0x5C
	::System::UInt32 Field_2_6; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52C0807ED28D1F26_STRUCT_2_82D2B015156CF84D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_52C0807ED28D1F26_STRUCT_2_82D2B015156CF84D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
