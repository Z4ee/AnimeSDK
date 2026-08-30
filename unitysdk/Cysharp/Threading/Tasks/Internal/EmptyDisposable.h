#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D74DB60)
#define CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D74DB70)
#define CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74DB50)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int EmptyDisposable_TypeDefinitionIndex = 43108;

	class EmptyDisposable : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::EmptyDisposable** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::Internal::EmptyDisposable**)Il2CppClass::FromTypeDefinitionIndex(EmptyDisposable_TypeDefinitionIndex)->GetStaticField(0x61A70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
