#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskExtensions___c__32_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions___c__32_1_TypeDefinitionIndex = 42826;

	template <typename T>
	class UniTaskExtensions___c__32_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTaskExtensions___c__32_1<T>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTaskExtensions___c__32_1<T>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c__32_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>** StaticGet___9__32_0()
		{
			return (::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c__32_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
