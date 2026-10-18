#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F131EF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1F131FA0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F131F30)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F131F40)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AsyncOperationConfiguredSource___c_TypeDefinitionIndex = 38458;

	class UnityAsyncExtensions_AsyncOperationConfiguredSource___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource___c**)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_AsyncOperationConfiguredSource___c_TypeDefinitionIndex)->GetStaticField(0x3BED0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_AsyncOperationConfiguredSource___c_TypeDefinitionIndex)->GetStaticField(0x3BED8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__14_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET))(this, a1);
		}
	};
}
