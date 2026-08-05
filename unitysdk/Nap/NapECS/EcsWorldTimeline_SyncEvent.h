#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C85AA90)
#define NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C85AB40)
#define NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C85A610)
#define NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85AA70)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeline_SyncEvent_TypeDefinitionIndex = 38016;

	class EcsWorldTimeline_SyncEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Double& lastTimeStamp, ::System::Double& timeStamp, ::System::Single& deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT_INVOKE_OFFSET))(this, lastTimeStamp, timeStamp, deltaTime);
		}

		::System::IAsyncResult* BeginInvoke(::System::Double& lastTimeStamp, ::System::Double& timeStamp, ::System::Single& deltaTime, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Double&, ::System::Double&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT_BEGININVOKE_OFFSET))(this, lastTimeStamp, timeStamp, deltaTime, callback, object);
		}

		::System::Void EndInvoke(::System::Double& lastTimeStamp, ::System::Double& timeStamp, ::System::Single& deltaTime, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SYNCEVENT_ENDINVOKE_OFFSET))(this, lastTimeStamp, timeStamp, deltaTime, result);
		}
	};
}
