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

#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0xB194DE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xB197DF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETPINNEDAVATARS_OFFSET UNITYSDK_OFFSET(0xB1981D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0xB198720)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xB198040)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_BATTLETARGETLIST_OFFSET UNITYSDK_OFFSET(0xB199480)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_DIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0xB1951E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_FINISHEDBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xB194920)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB199F30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0xB196E60)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0xB195910)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xB1997A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB195430)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABCONFIG_OFFSET UNITYSDK_OFFSET(0xB199EE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB199EC0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xB1999B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_RECOMMENDKEY_OFFSET UNITYSDK_OFFSET(0xB196970)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0xB199DF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_VHSTAGEMECHANISM_OFFSET UNITYSDK_OFFSET(0xB199F00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__LEVELID_OFFSET UNITYSDK_OFFSET(0xB199990)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__TRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xB1981B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB199730)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SAVETEAM_OFFSET UNITYSDK_OFFSET(0xB198DE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0xB199520)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xB199BE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SYNCBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xB1947C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB194490)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__PROCESSTEAMSAVE_OFFSET UNITYSDK_OFFSET(0xB198B30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__TRYGETLOWERLEVELTEAMSAVE_OFFSET UNITYSDK_OFFSET(0xB198930)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendLevelData_TypeDefinitionIndex = 57558;

	class ActivityLocalLegendLevelData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x10
		::RPG::GameCore::ActivityLocalLegendGroupConfigRow* _GroupRow; // 0x18
		::RPG::GameCore::ActivityLocalLegendStageConfigRow* _LevelRow; // 0x20

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
