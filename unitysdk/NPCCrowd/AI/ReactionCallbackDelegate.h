#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCD24680)
#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCD24710)
#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xCD24340)
#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD24330)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionCallbackDelegate_TypeDefinitionIndex = 59975;

	class ReactionCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt32 handlerID, ::System::UInt32 reactionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE_INVOKE_OFFSET))(this, handlerID, reactionID);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 handlerID, ::System::UInt32 reactionID, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, handlerID, reactionID, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
