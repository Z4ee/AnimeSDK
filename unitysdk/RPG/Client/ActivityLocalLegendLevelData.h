#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityLocalLegendGroupConfigRow; }
namespace RPG::GameCore { class ActivityLocalLegendStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0x8F4F8E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x8F527D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETPINNEDAVATARS_OFFSET UNITYSDK_OFFSET(0x8F52CC0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x8F53030)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8F529F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_BATTLETARGETLIST_OFFSET UNITYSDK_OFFSET(0x8F53CD0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_DIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x8F4FC70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_FINISHEDBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x8F4F480)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8F54790)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0x8F51860)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8F503E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8F54000)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F4FF70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABCONFIG_OFFSET UNITYSDK_OFFSET(0x8F54740)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x8F54720)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x8F54210)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_RECOMMENDKEY_OFFSET UNITYSDK_OFFSET(0x8F51360)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0x8F54650)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_VHSTAGEMECHANISM_OFFSET UNITYSDK_OFFSET(0x8F54760)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__LEVELID_OFFSET UNITYSDK_OFFSET(0x8F541F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__TRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x8F52CA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8F53F80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SAVETEAM_OFFSET UNITYSDK_OFFSET(0x8F53700)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8F53D70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x8F54440)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SYNCBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x8F4F310)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F4EF70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__PROCESSTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x8F53440)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__TRYGETLOWERLEVELTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x8F53240)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendLevelData_TypeDefinitionIndex = 49935;

	class ActivityLocalLegendLevelData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x10
		::RPG::GameCore::ActivityLocalLegendStageConfigRow* _LevelRow; // 0x18
		::RPG::GameCore::ActivityLocalLegendGroupConfigRow* _GroupRow; // 0x20

		::System::Void _ctor(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__CTOR_OFFSET))(this, groupID, difficultyLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETMONSTERDATA_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetPinnedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETPINNEDAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTEAMSAVE_OFFSET))(this);
		}

		::System::Void SaveTeam(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SAVETEAM_OFFSET))(this, avatars);
		}

		::System::UInt32 GetFinishedStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETFINISHEDSTARNUM_OFFSET))(this);
		}

		::System::Void SyncBattleTargetCount(::System::UInt32 targetBitSet, ::System::Boolean synByInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SYNCBATTLETARGETCOUNT_OFFSET))(this, targetBitSet, synByInit);
		}

		::System::Boolean IsTargetComplete(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_ISTARGETCOMPLETE_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _TryGetLowerLevelTeamSave(::System::UInt32 difficultyLevel, ::System::UInt32 targetLevel)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__TRYGETLOWERLEVELTEAMSAVE_OFFSET))(this, difficultyLevel, targetLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _ProcessTeamSave(::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Boolean>*>* teamSave, ::System::UInt32 targetLevel)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Boolean>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__PROCESSTEAMSAVE_OFFSET))(this, teamSave, targetLevel);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BattleTargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_BATTLETARGETLIST_OFFSET))(this);
		}

		::System::UInt32 get_FinishedBattleTargetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_FINISHEDBATTLETARGETCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCHALLENGED_OFFSET))(this);
		}

		::System::Void set_IsChallenged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_ISCHALLENGED_OFFSET))(this, value);
		}

		::System::Boolean get_NeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_NEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_NeedPlayUnlockAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_NEEDPLAYUNLOCKANIM_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityLocalLegendDifficulty get_DifficultyLevel()
		{
			return ((::RPG::GameCore::ActivityLocalLegendDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_DIFFICULTYLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_STARNUM_OFFSET))(this);
		}

		::System::String* get_ManikinPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABPATH_OFFSET))(this);
		}

		::System::String* get_ManikinPrefabConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABCONFIG_OFFSET))(this);
		}

		::RPG::Client::TextID get_VHStageMechanism()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_VHSTAGEMECHANISM_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPTITLE_OFFSET))(this);
		}

		::System::UInt32 get_RecommendKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_RECOMMENDKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get__TrialAvatar()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__TRIALAVATAR_OFFSET))(this);
		}

		::System::UInt32 get__LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__LEVELID_OFFSET))(this);
		}
	};
}
