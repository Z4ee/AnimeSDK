#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlayMissionTalk; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE_CACHE_OFFSET UNITYSDK_OFFSET(0xB27B140)
#define RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB27AF10)
#define RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE_CREATEPLAYMISSIONTALKCONFIG_OFFSET UNITYSDK_OFFSET(0xB2853E0)
#define RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xB27B0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule_MissionTalkCache_TypeDefinitionIndex = 62720;

	class TalkModule_MissionTalkCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* TalkSentenceIDs; // 0x10
		::System::UInt32 CurFloorID; // 0x18
		::System::UInt32 SubMissionID; // 0x1C
		::System::UInt32 CurIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE_CLEAR_OFFSET))(this);
		}

		::System::Void Cache(::System::UInt32 curIndex, ::System::Collections::Generic::List_1<::System::UInt32>* talkSentenceIDs, ::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE_CACHE_OFFSET))(this, curIndex, talkSentenceIDs, subMissionID);
		}

		::RPG::GameCore::PlayMissionTalk* CreatePlayMissionTalkConfig()
		{
			return ((::RPG::GameCore::PlayMissionTalk*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_MISSIONTALKCACHE_CREATEPLAYMISSIONTALKCONFIG_OFFSET))(this);
		}
	};
}
