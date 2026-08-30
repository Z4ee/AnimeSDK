#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T1, typename T2> class UniTask_WhenAllPromise_2___c; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise_2___c_TypeDefinitionIndex = 42682;

	template <typename T1, typename T2>
	class UniTask_WhenAllPromise_2___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2___c<T1, T2>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2___c<T1, T2>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAllPromise_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAllPromise_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAllPromise_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
