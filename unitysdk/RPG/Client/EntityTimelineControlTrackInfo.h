#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class TimeRewindPathRuntime; }

#define RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18D94D70)
#define RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18D94EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityTimelineControlTrackInfo_TypeDefinitionIndex = 60980;

	class EntityTimelineControlTrackInfo : public ::System::Object
	{
	public:
		::System::UInt32 PropID; // 0x10
		::Il2CppArray<::RPG::Client::EntityTimelineControlNode*>* EntityTimelineControlNodes; // 0x18
		::Il2CppArray<::RPG::Client::TimeRewindPathRuntime*>* TimeRewindPathRuntimes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
		}
	};
}
