#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CYSHARP_THREADING_TASKS_TASKPOOL_REGISTERSIZEGETTER_OFFSET UNITYSDK_OFFSET(0x1E7CED20)
#define CYSHARP_THREADING_TASKS_TASKPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CF450)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskPool_TypeDefinitionIndex = 31228;

	class TaskPool : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::System::Int32>*>** StaticGet_sizes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskPool_TypeDefinitionIndex)->GetStaticField(0x25900);
		}
		static ::System::Int32* StaticGet_MaxPoolSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TaskPool_TypeDefinitionIndex)->GetStaticField(0x7BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterSizeGetter(::System::Type* type, ::System::Func_1<::System::Int32>* getSize)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL_REGISTERSIZEGETTER_OFFSET))(type, getSize);
		}
	};
}
