#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ActionContext.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1826AE70)
#define NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1826AEE0)
#define NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1826AB30)
#define NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1826AB20)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRuntime_ActionDelegate_TypeDefinitionIndex = 78874;

	class AIActionRuntime_ActionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE_INVOKE_OFFSET))(this, context);
		}

		::System::IAsyncResult* BeginInvoke(::NPCCrowd::AI::ActionContext& context, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::NPCCrowd::AI::ActionContext&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE_BEGININVOKE_OFFSET))(this, context, callback, object);
		}

		::System::Void EndInvoke(::NPCCrowd::AI::ActionContext& context, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::ActionContext&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_ACTIONDELEGATE_ENDINVOKE_OFFSET))(this, context, result);
		}
	};
}
