#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BAA2D0)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BAA300)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BAA020)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAA000)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineMixer_MasterDirectorDelegate_TypeDefinitionIndex = 36642;

	class CinemachineMixer_MasterDirectorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Playables::PlayableDirector* Invoke()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::UnityEngine::Playables::PlayableDirector* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
