#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBDCCA0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDCCE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1FBDCCF0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise___c_TypeDefinitionIndex = 31880;

	class UniTask_WhenAllPromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WhenAllPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAllPromise___c_TypeDefinitionIndex)->GetStaticField(0x27000);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAllPromise___c_TypeDefinitionIndex)->GetStaticField(0x27008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__3_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C___CTOR_B__3_0_OFFSET))(this, state);
		}
	};
}
