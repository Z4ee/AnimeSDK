#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4385C14088733CE3;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class AtmosphereData; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_6B5F9B31196E66ED_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7007A0)
#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_6B5F9B31196E66ED_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7007B0)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Struct_2_6B5F9B31196E66ED_TypeDefinitionIndex = 43082;

struct alignas(8) Class_1_E0F34B566AF43EC9_Struct_2_6B5F9B31196E66ED
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x10
	::Class_1_4385C14088733CE3* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::UniTask Field_2_7; // 0x28
	::MoleMole::Config::AtmosphereData* Field_2_2; // 0x38
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x40
	::Class_5_AF65C3A968E836D2* Field_2_5; // 0x60
	::System::Action* Field_2_6; // 0x68
	::System::Boolean Field_2_4; // 0x70
	::System::Int32 Field_2_0; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_6B5F9B31196E66ED_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_6B5F9B31196E66ED_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
