#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class String; }

#define RPG_CLIENT_MISSIONTIMELINEMODULE_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xC041730)
#define RPG_CLIENT_MISSIONTIMELINEMODULE_SELECTTIMELINESEG_OFFSET UNITYSDK_OFFSET(0xC0418E0)
#define RPG_CLIENT_MISSIONTIMELINEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC041A80)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionTimelineModule_TypeDefinitionIndex = 61860;

	class MissionTimelineModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTIMELINEMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetGroupState(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTIMELINEMODULE_GETGROUPSTATE_OFFSET))(this, a1);
		}

		::System::Void SelectTimelineSeg(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTIMELINEMODULE_SELECTTIMELINESEG_OFFSET))(this, a1, a2);
		}
	};
}
