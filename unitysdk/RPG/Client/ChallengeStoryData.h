#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"

namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ChallengeStoryMazeExtraConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESTORYDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x92F6330)
#define RPG_CLIENT_CHALLENGESTORYDATA_GET_STORYEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92F6550)
#define RPG_CLIENT_CHALLENGESTORYDATA_SET_STORYEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92F6560)
#define RPG_CLIENT_CHALLENGESTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92F62D0)
#define RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x92F6570)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryData_TypeDefinitionIndex = 51238;

	class ChallengeStoryData : public ::RPG::Client::ChallengeData
	{
	public:
		::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* _StoryExtraInfoRow_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 id, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA__CTOR_OFFSET))(this, id, groupType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 stageIndex, ::System::Int32 eventIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, stageIndex, eventIndex);
		}

		::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* get_StoryExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GET_STORYEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_StoryExtraInfoRow(::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_SET_STORYEXTRAINFOROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* __iFixBaseProxy_GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 P0, ::System::Int32 P1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, P0, P1);
		}
	};
}
