#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_TIMELINEENDMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1819A4B0)
#define MOLEMOLE_TIMELINE_TIMELINEENDMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1819A4F0)
#define MOLEMOLE_TIMELINE_TIMELINEENDMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1819A460)
#define MOLEMOLE_TIMELINE_TIMELINEENDMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1819A500)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TimelineEndMarker_TypeDefinitionIndex = 47936;

	class TimelineEndMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEENDMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEENDMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEENDMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEENDMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
