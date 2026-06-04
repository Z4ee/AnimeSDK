#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::Client { class TimeRewindCustomPathData; }

#define RPG_CLIENT_TIMELINEITEMSINGLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCA744D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimelineItemSingleData_TypeDefinitionIndex = 56878;

	class TimelineItemSingleData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::EntityTimelineControlTrackInfo* TrackInfo; // 0x18
		::Il2CppArray<::RPG::Client::TimeRewindCustomPathData*>* CustomPathInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEITEMSINGLEDATA__CTOR_OFFSET))(this);
		}
	};
}
