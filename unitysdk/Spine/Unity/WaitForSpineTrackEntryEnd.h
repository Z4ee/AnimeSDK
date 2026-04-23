#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class TrackEntry; }

#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_HANDLEEND_OFFSET UNITYSDK_OFFSET(0x19E6B530)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x19E6B540)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SAFESUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x19E6B400)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E6B620)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19E6B560)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19E6B610)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6B3F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineTrackEntryEnd_TypeDefinitionIndex = 40665;

	class WaitForSpineTrackEntryEnd : public ::System::Object
	{
	public:
		::System::Boolean m_WasFired; // 0x10

		::System::Void _ctor(::Spine::TrackEntry* trackEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND__CTOR_OFFSET))(this, trackEntry);
		}

		::System::Void HandleEnd(::Spine::TrackEntry* trackEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_HANDLEEND_OFFSET))(this, trackEntry);
		}

		::System::Void SafeSubscribe(::Spine::TrackEntry* trackEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SAFESUBSCRIBE_OFFSET))(this, trackEntry);
		}

		::Spine::Unity::WaitForSpineTrackEntryEnd* NowWaitFor(::Spine::TrackEntry* trackEntry)
		{
			return ((::Spine::Unity::WaitForSpineTrackEntryEnd*(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_NOWWAITFOR_OFFSET))(this, trackEntry);
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
