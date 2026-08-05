#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3EC97B498E0B85D2;
namespace Foundation::ViewObject { class ViewObjectManager_ReloadGroupParam; }
namespace Foundation::ViewObject { class ViewObjectManager_ReloadParamBase; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUP_D__134_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B3710)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUP_D__134_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager__DoReloadGroup_d__134_TypeDefinitionIndex = 55559;

	struct alignas(8) ViewObjectManager__DoReloadGroup_d__134
	{
		::Class_3_3EC97B498E0B85D2* reason; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::System::Threading::CancellationToken token; // 0x28
		::Foundation::ViewObject::ViewObjectManager_ReloadGroupParam* _groupParam_5__3; // 0x30
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
		::Foundation::ViewObject::ViewObjectManager_ReloadParamBase* param; // 0x48
		::System::UInt32 _levelEntityID_5__2; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUP_D__134_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUP_D__134_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
