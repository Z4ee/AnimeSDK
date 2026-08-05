#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE9578A0)
#define NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE9578D0)
#define NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE957610)
#define NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE9575F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCMonoDelegate_EventDelegate_TypeDefinitionIndex = 68549;

	class NPCMonoDelegate_EventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE_EVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
