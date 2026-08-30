#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE0B810)
#define CYSHARP_THREADING_TASKS_UNITASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0B850)
#define CYSHARP_THREADING_TASKS_UNITASK___C___CCTOR_B__201_0_OFFSET UNITYSDK_OFFSET(0x1CE0B860)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c_TypeDefinitionIndex = 42751;

	class UniTask___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask___c_TypeDefinitionIndex)->GetStaticField(0x62510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask __cctor_b__201_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C___CCTOR_B__201_0_OFFSET))(this);
		}
	};
}
