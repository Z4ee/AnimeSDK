#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D755920)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_TYPE_SYSTEM_INT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D755BE0)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_TYPE_SYSTEM_INT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D755B30)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D755C50)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D755B90)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D755B40)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D755860)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D755840)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1D7558E0)
#define CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1D7558D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskPool__GetCacheSizeInfo_d__4_TypeDefinitionIndex = 42635;

	class TaskPool__GetCacheSizeInfo_d__4 : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::Type*, ::System::Int32> __2__current; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::System::Int32>*>* __7__wrap1; // 0x20
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Type*, ::System::Func_1<::System::Int32>*> __7__wrap3; // 0x28
		::System::Boolean __7__wrap2; // 0x50
		::System::Int32 __l__initialThreadId; // 0x54
		::System::Int32 __1__state; // 0x58

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4___M__FINALLY2_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Type*, ::System::Int32> System_Collections_Generic_IEnumerator_System_ValueTuple_System_Type_System_Int32___get_Current()
		{
			return ((::System::ValueTuple_2<::System::Type*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_TYPE_SYSTEM_INT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Type*, ::System::Int32>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_Type_System_Int32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Type*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_TYPE_SYSTEM_INT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__GETCACHESIZEINFO_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
