#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { template <typename T> class Func_1; }
namespace System::Threading { class CancellationTokenSource; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int TaskBasedEventCollection_1_TypeDefinitionIndex = 70125;

	template <typename T>
	class TaskBasedEventCollection_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventCollection_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet__eventCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventCollection_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>** StaticGet__eventConstructor()
		{
			return (::Il2CppArray<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventCollection_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0x0
		::Il2CppArray<::MoleMole::Utils::ITypeErasedCompletionSource*>* _events; // 0x0
	};
}
