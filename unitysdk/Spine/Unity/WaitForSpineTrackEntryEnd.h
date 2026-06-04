#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class TrackEntry; }

#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_HANDLEEND_OFFSET UNITYSDK_OFFSET(0x1ACE1C30)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x1ACE1C40)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SAFESUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1ACE1AE0)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ACE1D20)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ACE1C60)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ACE1D10)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE1AD0)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineTrackEntryEnd_TypeDefinitionIndex = 41492;

	class WaitForSpineTrackEntryEnd : public ::System::Object
	{
	public:
		::System::Boolean m_WasFired; // 0x10

		::System::Void _ctor(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND__CTOR_OFFSET))(this, a1);
		}

		::System::Void HandleEnd(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_HANDLEEND_OFFSET))(this, a1);
		}

		::System::Void SafeSubscribe(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SAFESUBSCRIBE_OFFSET))(this, a1);
		}

		::Spine::Unity::WaitForSpineTrackEntryEnd* NowWaitFor(::Spine::TrackEntry* a1)
		{
			return ((::Spine::Unity::WaitForSpineTrackEntryEnd*(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_NOWWAITFOR_OFFSET))(this, a1);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
