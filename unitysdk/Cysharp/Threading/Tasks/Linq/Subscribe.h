#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class IObserver_1; }

#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5E870)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Subscribe_TypeDefinitionIndex = 44462;

	class Subscribe : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_NopCompleted()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Subscribe_TypeDefinitionIndex)->GetStaticField(0x14D0);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet_NopError()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Subscribe_TypeDefinitionIndex)->GetStaticField(0x14D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE__CCTOR_OFFSET))();
		}
	};
}
