#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA85390)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA853D0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EA853E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAnyPromise___c_TypeDefinitionIndex = 42746;

	class UniTask_WhenAnyPromise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAnyPromise___c_TypeDefinitionIndex)->GetStaticField(0x596D0);
		}
		static ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAnyPromise___c_TypeDefinitionIndex)->GetStaticField(0x596D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__2_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C___CTOR_B__2_0_OFFSET))(this, a1);
		}
	};
}
