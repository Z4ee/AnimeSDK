#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_COMPLETEDTASKS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D747980)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CompletedTasks_TypeDefinitionIndex = 42777;

	class CompletedTasks : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_MinusOne()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x1460);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_Zero()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x1470);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>* StaticGet_False()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x1480);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>* StaticGet_AsyncUnit()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x1490);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>* StaticGet_True()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x14A0);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_One()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x14B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPLETEDTASKS__CCTOR_OFFSET))();
		}
	};
}
