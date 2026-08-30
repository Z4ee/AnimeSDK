#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CYSHARP_THREADING_TASKS_TASKPOOL_GETCACHESIZEINFO_OFFSET UNITYSDK_OFFSET(0x1EA5D4F0)
#define CYSHARP_THREADING_TASKS_TASKPOOL_REGISTERSIZEGETTER_OFFSET UNITYSDK_OFFSET(0x1EA4CBB0)
#define CYSHARP_THREADING_TASKS_TASKPOOL_SETMAXPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1EA5D490)
#define CYSHARP_THREADING_TASKS_TASKPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5D2C0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskPool_TypeDefinitionIndex = 42634;

	class TaskPool : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::System::Int32>*>** StaticGet_sizes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskPool_TypeDefinitionIndex)->GetStaticField(0x56840);
		}
		static ::System::Int32* StaticGet_MaxPoolSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TaskPool_TypeDefinitionIndex)->GetStaticField(0x121D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__CCTOR_OFFSET))();
		}

		static ::System::Void SetMaxPoolSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL_SETMAXPOOLSIZE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Type*, ::System::Int32>>* GetCacheSizeInfo()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Type*, ::System::Int32>>*(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL_GETCACHESIZEINFO_OFFSET))();
		}

		static ::System::Void RegisterSizeGetter(::System::Type* a1, ::System::Func_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL_REGISTERSIZEGETTER_OFFSET))(a1, a2);
		}
	};
}
