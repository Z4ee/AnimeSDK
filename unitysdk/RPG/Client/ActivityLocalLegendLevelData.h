#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityLocalLegendGroupConfigRow; }
namespace RPG::GameCore { class ActivityLocalLegendStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0x1AF8F210)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1AF927F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETPINNEDAVATARS_OFFSET UNITYSDK_OFFSET(0x1AF92C40)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x1AF93370)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x1AF92A40)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_BATTLETARGETLIST_OFFSET UNITYSDK_OFFSET(0x1AF942B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_DIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x1AF8F650)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_FINISHEDBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF8ED50)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1AF94FC0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0x1AF91710)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0x1AF8FE30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AF94680)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AF8F8D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABCONFIG_OFFSET UNITYSDK_OFFSET(0x1AF94F00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1AF94EB0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1AF948C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_RECOMMENDKEY_OFFSET UNITYSDK_OFFSET(0x1AF91180)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0x1AF94DE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_VHSTAGEMECHANISM_OFFSET UNITYSDK_OFFSET(0x1AF94F50)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__LEVELID_OFFSET UNITYSDK_OFFSET(0x1AF94870)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__TRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x1AF92BF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AF94610)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SAVETEAM_OFFSET UNITYSDK_OFFSET(0x1AF93A30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0x1AF94350)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1AF94B20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SYNCBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF8EBF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF8E8C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__PROCESSTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x1AF93780)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__TRYGETLOWERLEVELTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x1AF93580)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendLevelData_TypeDefinitionIndex = 61651;

	class ActivityLocalLegendLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityLocalLegendGroupConfigRow* _GroupRow; // 0x10
		::RPG::GameCore::ActivityLocalLegendStageConfigRow* _LevelRow; // 0x18
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETMONSTERDATA_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetPinnedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETPINNEDAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTEAMSAVE_OFFSET))(this);
		}

		::System::Void SaveTeam(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SAVETEAM_OFFSET))(this, a1);
		}

		::System::UInt32 GetFinishedStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETFINISHEDSTARNUM_OFFSET))(this);
		}

		::System::Void SyncBattleTargetCount(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SYNCBATTLETARGETCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTargetComplete(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_ISTARGETCOMPLETE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _TryGetLowerLevelTeamSave(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__TRYGETLOWERLEVELTEAMSAVE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _ProcessTeamSave(::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Boolean>*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Boolean>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__PROCESSTEAMSAVE_OFFSET))(this, a1, a2);
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

		::System::Void set_IsChallenged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_ISCHALLENGED_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_NEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_NeedPlayUnlockAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_NEEDPLAYUNLOCKANIM_OFFSET))(this, a1);
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
