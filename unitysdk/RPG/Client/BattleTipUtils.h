#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class StatisticsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLETIPUTILS_GETONEFAILURETIP_OFFSET UNITYSDK_OFFSET(0x91D6C30)
#define RPG_CLIENT_BATTLETIPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x91D9100)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x91D8730)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKITEMCONSUME_OFFSET UNITYSDK_OFFSET(0x91D8CD0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKLIGHTCONE_OFFSET UNITYSDK_OFFSET(0x91D88C0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKRELIC_OFFSET UNITYSDK_OFFSET(0x91D8980)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKROGUESKILLTREE_OFFSET UNITYSDK_OFFSET(0x91D8A50)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKSKILLTREE_OFFSET UNITYSDK_OFFSET(0x91D87F0)
#define RPG_CLIENT_BATTLETIPUTILS__CLEARREF_OFFSET UNITYSDK_OFFSET(0x91D8470)
#define RPG_CLIENT_BATTLETIPUTILS__FILTERTIPSBYPRIORITY_OFFSET UNITYSDK_OFFSET(0x91D85F0)
#define RPG_CLIENT_BATTLETIPUTILS__GETTEAMCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x91D8E90)
#define RPG_CLIENT_BATTLETIPUTILS__ISBATTLESCENEVALID_OFFSET UNITYSDK_OFFSET(0x91D7740)
#define RPG_CLIENT_BATTLETIPUTILS__ISCUSTOMSTRINGVALID_OFFSET UNITYSDK_OFFSET(0x91D82E0)
#define RPG_CLIENT_BATTLETIPUTILS__ISFAILURETYPEVALID_OFFSET UNITYSDK_OFFSET(0x91D7D70)
#define RPG_CLIENT_BATTLETIPUTILS__ISGAMEMODEVALID_OFFSET UNITYSDK_OFFSET(0x91D74A0)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONFINISHFORCE_OFFSET UNITYSDK_OFFSET(0x91D7A30)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONTAKENFORCE_OFFSET UNITYSDK_OFFSET(0x91D7890)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONUNFINISHFORCE_OFFSET UNITYSDK_OFFSET(0x91D7BD0)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAZEBUFFVALID_OFFSET UNITYSDK_OFFSET(0x91D7F50)
#define RPG_CLIENT_BATTLETIPUTILS__ISMONSTERVALID_OFFSET UNITYSDK_OFFSET(0x91D8140)
#define RPG_CLIENT_BATTLETIPUTILS__ISPLAYERLEVELVALID_OFFSET UNITYSDK_OFFSET(0x91D7570)
#define RPG_CLIENT_BATTLETIPUTILS__ISWORLDPLACEVALID_OFFSET UNITYSDK_OFFSET(0x91D76A0)
#define RPG_CLIENT_BATTLETIPUTILS__UPDATEREF_OFFSET UNITYSDK_OFFSET(0x91D7130)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleTipUtils_TypeDefinitionIndex = 51049;

	class BattleTipUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StatisticsComponent** StaticGet__StatisticsCmpt()
		{
			return (::RPG::GameCore::StatisticsComponent**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x410A0);
		}
		static ::RPG::GameCore::BattleInstance** StaticGet__BattleInst()
		{
			return (::RPG::GameCore::BattleInstance**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x410A8);
		}
		static ::Il2CppArray<::RPG::GameCore::FixPoint>** StaticGet__CombatPowerListRef()
		{
			return (::Il2CppArray<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x410B0);
		}
		static ::RPG::GameCore::StageType* StaticGet__CurStageType()
		{
			return (::RPG::GameCore::StageType*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x11520);
		}
		static ::System::Single* StaticGet__MonsterCombatPowerRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x11524);
		}
		static ::System::UInt32* StaticGet__CurStageID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x11528);
		}
		// static const ::System::Single _COMBAT_POWER_RATIO; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleFailureTipsConfigRow* GetOneFailureTip()
		{
			return ((::RPG::GameCore::BattleFailureTipsConfigRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS_GETONEFAILURETIP_OFFSET))();
		}

		static ::System::Boolean _IsPlayerLevelValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISPLAYERLEVELVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsWorldPlaceValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISWORLDPLACEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsBattleSceneValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISBATTLESCENEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMainMissionTakenForce(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONTAKENFORCE_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMainMissionFinishForce(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONFINISHFORCE_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMainMissionUnfinishForce(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONUNFINISHFORCE_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsGameModeValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISGAMEMODEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Void _FilterTipsByPriority(::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>* failureTips, ::System::UInt32 priority)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__FILTERTIPSBYPRIORITY_OFFSET))(failureTips, priority);
		}

		static ::System::Boolean _IsFailureTypeValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISFAILURETYPEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMazeBuffValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAZEBUFFVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMonsterValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMONSTERVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsCustomStringValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISCUSTOMSTRINGVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _CheckAvatarLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKAVATARLEVEL_OFFSET))();
		}

		static ::System::Boolean _CheckSkillTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKSKILLTREE_OFFSET))();
		}

		static ::System::Boolean _CheckLightCone()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKLIGHTCONE_OFFSET))();
		}

		static ::System::Boolean _CheckRelic()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKRELIC_OFFSET))();
		}

		static ::System::Boolean _CheckRogueSkillTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKROGUESKILLTREE_OFFSET))();
		}

		static ::System::Boolean _CheckItemConsume()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKITEMCONSUME_OFFSET))();
		}

		static ::System::Single _GetTeamCombatPower(::RPG::GameCore::CombatPowerSource source)
		{
			return ((::System::Single(*)(::RPG::GameCore::CombatPowerSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__GETTEAMCOMBATPOWER_OFFSET))(source);
		}

		static ::System::Void _UpdateRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__UPDATEREF_OFFSET))();
		}

		static ::System::Void _ClearRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CLEARREF_OFFSET))();
		}
	};
}
