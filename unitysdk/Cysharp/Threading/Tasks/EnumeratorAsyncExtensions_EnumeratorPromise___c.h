#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA4BF0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA4C30)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FAA4C40)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int EnumeratorAsyncExtensions_EnumeratorPromise___c_TypeDefinitionIndex = 31802;

	class EnumeratorAsyncExtensions_EnumeratorPromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise___c**)Il2CppClass::FromTypeDefinitionIndex(EnumeratorAsyncExtensions_EnumeratorPromise___c_TypeDefinitionIndex)->GetStaticField(0x272B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
