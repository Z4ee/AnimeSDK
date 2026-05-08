#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C323500)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C323540)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C323550)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AutoResetUniTaskCompletionSource___c_TypeDefinitionIndex = 28629;

	class AutoResetUniTaskCompletionSource___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c**)Il2CppClass::FromTypeDefinitionIndex(AutoResetUniTaskCompletionSource___c_TypeDefinitionIndex)->GetStaticField(0x21B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
