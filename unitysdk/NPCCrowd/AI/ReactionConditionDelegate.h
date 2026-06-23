#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/RegisterItem.h"
#include "unitysdk/NPCCrowd/AI/StimulusItem.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_REACTIONCONDITIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA6666F0)
#define NPCCROWD_AI_REACTIONCONDITIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA666780)
#define NPCCROWD_AI_REACTIONCONDITIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA665F20)
#define NPCCROWD_AI_REACTIONCONDITIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA665F00)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionConditionDelegate_TypeDefinitionIndex = 48656;

	class ReactionConditionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONDITIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::NPCCrowd::AI::StimulusItem stimulus, ::NPCCrowd::AI::RegisterItem registerItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::StimulusItem, ::NPCCrowd::AI::RegisterItem))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONDITIONDELEGATE_INVOKE_OFFSET))(this, stimulus, registerItem);
		}

		::System::IAsyncResult* BeginInvoke(::NPCCrowd::AI::StimulusItem stimulus, ::NPCCrowd::AI::RegisterItem registerItem, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::NPCCrowd::AI::StimulusItem, ::NPCCrowd::AI::RegisterItem, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONDITIONDELEGATE_BEGININVOKE_OFFSET))(this, stimulus, registerItem, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONDITIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
