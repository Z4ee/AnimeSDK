#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ChallengeStoryMazeExtraConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESTORYDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x191FA590)
#define RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x191FA540)
#define RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x191FA490)
#define RPG_CLIENT_CHALLENGESTORYDATA_GET_STORYEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x191FA470)
#define RPG_CLIENT_CHALLENGESTORYDATA_SET_STORYEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x191FA480)
#define RPG_CLIENT_CHALLENGESTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191D7EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryData_TypeDefinitionIndex = 60363;

	class ChallengeStoryData : public ::RPG::Client::ChallengeData
	{
	public:
		::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* _StoryExtraInfoRow_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* get_StoryExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GET_STORYEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_StoryExtraInfoRow(::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_SET_STORYEXTRAINFOROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}
	};
}
