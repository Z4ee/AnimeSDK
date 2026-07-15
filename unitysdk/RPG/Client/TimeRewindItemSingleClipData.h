#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class EntityTimelineControlNode; }

#define RPG_CLIENT_TIMEREWINDITEMSINGLECLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1787D210)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindItemSingleClipData_TypeDefinitionIndex = 58108;

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
