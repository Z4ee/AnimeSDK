#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1FB11A50)
#define CYSHARP_THREADING_TASKS_AWAITERACTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB11AB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AwaiterActions_TypeDefinitionIndex = 31897;

	class AwaiterActions : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_InvokeContinuationDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AwaiterActions_TypeDefinitionIndex)->GetStaticField(0x27030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AWAITERACTIONS__CCTOR_OFFSET))();
		}

		static ::System::Void Continuation(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET))(state);
		}
	};
}
