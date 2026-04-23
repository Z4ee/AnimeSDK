#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class EntityTimelineControlNode; }

#define RPG_CLIENT_TIMEREWINDITEMSINGLECLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F4740)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindItemSingleClipData_TypeDefinitionIndex = 56099;

	class TimeRewindItemSingleClipData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::EntityTimelineControlNode* ClipInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDITEMSINGLECLIPDATA__CTOR_OFFSET))(this);
		}
	};
}
