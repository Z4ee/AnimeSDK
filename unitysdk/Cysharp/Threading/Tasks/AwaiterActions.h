#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C43FD50)
#define CYSHARP_THREADING_TASKS_AWAITERACTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C43FDB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AwaiterActions_TypeDefinitionIndex = 28621;

	class AwaiterActions : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_InvokeContinuationDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AwaiterActions_TypeDefinitionIndex)->GetStaticField(0x21B20);
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
