#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_4BE54C5E423619FD;
namespace MoleMole { class UINounDetailPanelWidgetController; }
namespace MoleMole { class UINounDetailPanelWidgetController_Data; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_4BE54C5E423619FD_STRUCT_2_96B20A23C5E2DB6C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x765F90)
#define CLASS_2_4BE54C5E423619FD_STRUCT_2_96B20A23C5E2DB6C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_4BE54C5E423619FD_Struct_2_96B20A23C5E2DB6C_TypeDefinitionIndex = 84064;

struct alignas(8) Class_2_4BE54C5E423619FD_Struct_2_96B20A23C5E2DB6C
{
	::MoleMole::UINounDetailPanelWidgetController_Data* Field_2_6; // 0x10
	::Class_2_4BE54C5E423619FD* Field_2_2; // 0x18
	::MoleMole::UINounDetailPanelWidgetController* Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x28
	::System::Threading::CancellationToken Field_2_4; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x4C
	::System::Int32 Field_2_5; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_STRUCT_2_96B20A23C5E2DB6C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_STRUCT_2_96B20A23C5E2DB6C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
