#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET UNITYSDK_OFFSET(0x1F14DC00)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14DC50)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSourceCoreShared_TypeDefinitionIndex = 38394;

	class UniTaskCompletionSourceCoreShared : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_s_sentinel()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskCompletionSourceCoreShared_TypeDefinitionIndex)->GetStaticField(0x41E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED__CCTOR_OFFSET))();
		}

		static ::System::Void CompletionSentinel(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET))(a1);
		}
	};
}
