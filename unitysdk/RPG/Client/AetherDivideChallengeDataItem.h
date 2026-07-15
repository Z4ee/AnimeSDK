#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherDivideChallengeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherDivideLineUpData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class AetherDivideChallengeListRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182D9A00)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GETDISPLAYMONSTERDATAS_OFFSET UNITYSDK_OFFSET(0x182DA050)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x182D9F50)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x182DA350)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_CHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x182DAA50)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_HARDLEVEL_OFFSET UNITYSDK_OFFSET(0x182DA420)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x182DA550)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x182DA370)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x182DA390)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ISSHOWINNPCCHALLENGEPAGE_OFFSET UNITYSDK_OFFSET(0x182D95E0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x182DA7F0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x182D8970)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_RANKID_OFFSET UNITYSDK_OFFSET(0x182D9690)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x182DA920)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0x182DA3B0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x182DA680)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x182D9AE0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SETFINISHED_OFFSET UNITYSDK_OFFSET(0x182D85C0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SETREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x182D8610)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x182DA360)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x182DA380)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x182DA3A0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_TRYGETTRIALLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x182D9A50)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182D8AA0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x182D85B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideChallengeDataItem_TypeDefinitionIndex = 59461;

	class AetherDivideChallengeDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::AetherDivideChallengeListRow* _Row; // 0x10
		::System::UInt32 _ChallengeID_k__BackingField; // 0x18
		::System::Boolean _IsFinished_k__BackingField; // 0x1C
		::System::Boolean _IsRewardTaken_k__BackingField; // 0x1D

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::AetherDivideChallengeListRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AetherDivideChallengeListRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SETFINISHED_OFFSET))(this, a1);
		}

		::System::Void SetRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SETREWARDTAKEN_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideLineUpData* TryGetTrialLineUpData()
		{
			return ((::RPG::Client::AetherDivideLineUpData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_TRYGETTRIALLINEUPDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* GetScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GETSCHEDULEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetDisplayMonsterDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GETDISPLAYMONSTERDATAS_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SET_CHALLENGEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_SET_ISREWARDTAKEN_OFFSET))(this, a1);
		}

		::RPG::GameCore::AetherDivideChallengeListRow* get_Row()
		{
			return ((::RPG::GameCore::AetherDivideChallengeListRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_RankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_RANKID_OFFSET))(this);
		}

		::System::UInt32 get_HardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_HARDLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsShowInNPCChallengePage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ISSHOWINNPCCHALLENGEPAGE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Signature()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_SIGNATURE_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_MissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_MISSIONID_OFFSET))(this);
		}

		::RPG::GameCore::AetherDivideChallengeType get_ChallengeType()
		{
			return ((::RPG::GameCore::AetherDivideChallengeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATAITEM_GET_CHALLENGETYPE_OFFSET))(this);
		}
	};
}
