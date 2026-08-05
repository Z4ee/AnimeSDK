#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x114D9BA0)
#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x114D9C30)
#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x114D9890)
#define NPCCROWD_AI_REACTIONCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x114D9870)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionCallbackDelegate_TypeDefinitionIndex = 63553;

	class ReactionCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 handlerID, ::System::UInt32 reactionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE_INVOKE_OFFSET))(this, handlerID, reactionID);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 handlerID, ::System::UInt32 reactionID, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, handlerID, reactionID, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
