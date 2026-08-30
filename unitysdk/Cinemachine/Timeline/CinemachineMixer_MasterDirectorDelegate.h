#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16488730)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16488760)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16488720)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x164886B0)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineMixer_MasterDirectorDelegate_TypeDefinitionIndex = 38583;

	class CinemachineMixer_MasterDirectorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::PlayableDirector* Invoke()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::PlayableDirector* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_MASTERDIRECTORDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
