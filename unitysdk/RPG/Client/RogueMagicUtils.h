#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1081;
class Class_1_4F96E8997F9D5BB1_4;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class RogueMagicPowerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICUTILS_ASSERT_OFFSET UNITYSDK_OFFSET(0xDF352B0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETACTIVITYGOTOID_OFFSET UNITYSDK_OFFSET(0xDF377B0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITBASICPOWER_OFFSET UNITYSDK_OFFSET(0xDF35E10)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITSTOTALBASICPOWER_OFFSET UNITYSDK_OFFSET(0xDF356A0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETCONTENTDISPLAYTEXTID_OFFSET UNITYSDK_OFFSET(0xDF2FFE0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETCURGAMEDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xDF35090)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETGUIDEGOTOID_OFFSET UNITYSDK_OFFSET(0xDF376C0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETMISCDISPLAYTEXTID_OFFSET UNITYSDK_OFFSET(0xDF31600)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITFACTOR_OFFSET UNITYSDK_OFFSET(0xDF360D0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITPERCENT_OFFSET UNITYSDK_OFFSET(0xDF36150)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITSTOTALFACTOR_OFFSET UNITYSDK_OFFSET(0xDF35A60)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETROGUEMAGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xDF369F0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETSCEPTERFUNCTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xDF34D90)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERBASICPOWER_OFFSET UNITYSDK_OFFSET(0xDF353C0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERTOTALPOWER_OFFSET UNITYSDK_OFFSET(0xDF35300)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISGUIDEAREAPASSED_OFFSET UNITYSDK_OFFSET(0xDF34C50)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISGUIDEMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xDF374F0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISROGUEMAGICBATTLE_OFFSET UNITYSDK_OFFSET(0xDF34B20)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISSCEPTERFUNCTYPEACTIVE_OFFSET UNITYSDK_OFFSET(0xDF34ED0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISSPECIFICSCEPTERFUNCTYPEACTIVE_OFFSET UNITYSDK_OFFSET(0xDF34F40)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISSTYLETYPEACTIVE_OFFSET UNITYSDK_OFFSET(0xDF34FA0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDF373E0)
#define RPG_CLIENT_ROGUEMAGICUTILS_LOGERROR_OFFSET UNITYSDK_OFFSET(0xDF2E110)
#define RPG_CLIENT_ROGUEMAGICUTILS_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xDF35260)
#define RPG_CLIENT_ROGUEMAGICUTILS_LOG_OFFSET UNITYSDK_OFFSET(0xDF35210)
#define RPG_CLIENT_ROGUEMAGICUTILS_PREPAREACTIVITYPANELMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xDF37130)
#define RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINSIDEROGUESCENE_OFFSET UNITYSDK_OFFSET(0xDF34950)
#define RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINTOROGUESCENE_OFFSET UNITYSDK_OFFSET(0xDF34700)
#define RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTOUTOFROGUESCENE_OFFSET UNITYSDK_OFFSET(0xDF34870)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETFUNCTYPEMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xDF36C00)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEULTRAUNITSPECIALFACTOR_OFFSET UNITYSDK_OFFSET(0xDF367C0)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPECONFIGFACTOR_OFFSET UNITYSDK_OFFSET(0xDF36AF0)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPEFACTOR_OFFSET UNITYSDK_OFFSET(0xDF365B0)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETRANGETYPEMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xDF36EA0)
#define RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICFUNCTYPEMATCH_OFFSET UNITYSDK_OFFSET(0xDF36550)
#define RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICRANGTYPEMATCH_OFFSET UNITYSDK_OFFSET(0xDF36070)
#define RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICSTYLETYPEMATCH_OFFSET UNITYSDK_OFFSET(0xDF35DB0)
#define RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0xDF34A40)
#define RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0xDF347E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUtils_TypeDefinitionIndex = 67412;

	class RogueMagicUtils : public ::System::Object
	{
	public:
		static ::System::Void TeleportIntoRogueScene(::Class_1_4F96E8997F9D5BB1_4* a1)
		{
			return ((::System::Void(*)(::Class_1_4F96E8997F9D5BB1_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINTOROGUESCENE_OFFSET))(a1);
		}

		static ::System::Void TeleportOutOfRogueScene(::Class_1_4F96E8997F9D5BB1_4* a1)
		{
			return ((::System::Void(*)(::Class_1_4F96E8997F9D5BB1_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTOUTOFROGUESCENE_OFFSET))(a1);
		}

		static ::System::Void TeleportInsideRogueScene(::Class_1_4F96E8997F9D5BB1_4* a1)
		{
			return ((::System::Void(*)(::Class_1_4F96E8997F9D5BB1_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINSIDEROGUESCENE_OFFSET))(a1);
		}

		static ::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(a1);
		}

		static ::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(a1);
		}

		static ::System::Boolean IsRogueMagicBattle(::RPG::Client::BattleGamePhase* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISROGUEMAGICBATTLE_OFFSET))(a1);
		}

		static ::System::Boolean IsGuideAreaPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISGUIDEAREAPASSED_OFFSET))();
		}

		static ::RPG::Client::TextID GetScepterFuncTypeTextID(::RPG::GameCore::RogueMagicScepterFuncType a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETSCEPTERFUNCTYPETEXTID_OFFSET))(a1);
		}

		static ::System::Boolean IsScepterFuncTypeActive(::RPG::GameCore::RogueMagicScepterFuncType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISSCEPTERFUNCTYPEACTIVE_OFFSET))(a1);
		}

		static ::System::Boolean IsSpecificScepterFuncTypeActive(::RPG::GameCore::RogueMagicScepterFuncType a1, ::RPG::GameCore::RogueMagicScepterFuncType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicScepterFuncType, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISSPECIFICSCEPTERFUNCTYPEACTIVE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsStyleTypeActive(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISSTYLETYPEACTIVE_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurGameDiffCompLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETCURGAMEDIFFCOMPLEVEL_OFFSET))();
		}

		static ::RPG::Client::TextID GetMiscDisplayTextID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETMISCDISPLAYTEXTID_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetContentDisplayTextID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETCONTENTDISPLAYTEXTID_OFFSET))(a1);
		}

		static ::System::Void Log(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_LOG_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarning(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_LOGWARNING_OFFSET))(a1, a2);
		}

		static ::System::Void LogError(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_LOGERROR_OFFSET))(a1, a2);
		}

		static ::System::Void Assert(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ASSERT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetScpterTotalPower(::Class_0_16E4307DCC419505_1081* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>* a2, ::RPG::GameCore::RogueMagicStyleType a3, ::RPG::GameCore::RogueMagicPowerConfig* a4)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_1081*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>*, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERTOTALPOWER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetScpterBasicPower(::Class_0_16E4307DCC419505_1081* a1, ::RPG::GameCore::RogueMagicStyleType a2, ::RPG::GameCore::RogueMagicPowerConfig* a3)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_1081*, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERBASICPOWER_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetAttachUnitsTotalBasicPower(::Class_0_16E4307DCC419505_1081* a1, ::RPG::GameCore::RogueMagicStyleType a2, ::RPG::GameCore::RogueMagicPowerConfig* a3)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_1081*, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITSTOTALBASICPOWER_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetAttachUnitBasicPower(::RPG::Client::RogueMagicUnitDataItem* a1, ::RPG::GameCore::RogueMagicRangeType a2, ::RPG::GameCore::RogueMagicStyleType a3, ::RPG::GameCore::RogueMagicPowerConfig* a4)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::RPG::GameCore::RogueMagicRangeType, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITBASICPOWER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetPassiveUnitsTotalFactor(::Class_0_16E4307DCC419505_1081* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>* a2, ::RPG::GameCore::RogueMagicPowerConfig* a3)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_1081*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITSTOTALFACTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetPassiveUnitFactor(::RPG::Client::RogueMagicUnitDataItem* a1, ::Class_0_16E4307DCC419505_1081* a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>* a3, ::RPG::GameCore::RogueMagicPowerConfig* a4)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_1081*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITFACTOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetPassiveUnitPercent(::RPG::Client::RogueMagicUnitDataItem* a1, ::Class_0_16E4307DCC419505_1081* a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>* a3, ::RPG::GameCore::RogueMagicPowerConfig* a4)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_1081*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITPERCENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single _GetPassiveUnitEffectTypeFactor(::RPG::Client::RogueMagicUnitDataItem* a1, ::Class_0_16E4307DCC419505_1081* a2, ::RPG::GameCore::RogueMagicPowerConfig* a3)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_1081*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPEFACTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Single _GetPassiveUnitEffectTypeConfigFactor(::RPG::GameCore::RogueMagicPowerConfig* a1, ::RPG::GameCore::RogueMagicEffectType a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::RogueMagicPowerConfig*, ::RPG::GameCore::RogueMagicEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPECONFIGFACTOR_OFFSET))(a1, a2);
		}

		static ::System::Single _GetPassiveUltraUnitSpecialFactor(::RPG::Client::RogueMagicUnitDataItem* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>* a2, ::RPG::GameCore::RogueMagicPowerConfig* a3)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEULTRAUNITSPECIALFACTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 _GetFuncTypeMatchCount(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>* a1, ::RPG::GameCore::RogueMagicScepterFuncType a2)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>*, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETFUNCTYPEMATCHCOUNT_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetRangeTypeMatchCount(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>* a1, ::RPG::GameCore::RogueMagicRangeType a2)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1081*>*, ::RPG::GameCore::RogueMagicRangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETRANGETYPEMATCHCOUNT_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsRogueMagicStyleTypeMatch(::RPG::GameCore::RogueMagicStyleType a1, ::RPG::GameCore::RogueMagicStyleType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICSTYLETYPEMATCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsRogueMagicFuncTypeMatch(::RPG::GameCore::RogueMagicScepterFuncType a1, ::RPG::GameCore::RogueMagicScepterFuncType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicScepterFuncType, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICFUNCTYPEMATCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsRogueMagicRangTypeMatch(::RPG::GameCore::RogueMagicRangeType a1, ::RPG::GameCore::RogueMagicRangeType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicRangeType, ::RPG::GameCore::RogueMagicRangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICRANGTYPEMATCH_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetRogueMagicEffectTypeCount(::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* a1, ::RPG::GameCore::RogueMagicEffectType a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>*, ::RPG::GameCore::RogueMagicEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETROGUEMAGICEFFECTTYPECOUNT_OFFSET))(a1, a2);
		}

		static ::System::Void PrepareActivityPanelMainMissionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_PREPAREACTIVITYPANELMAINMISSIONDATA_OFFSET))();
		}

		static ::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISUNLOCKED_OFFSET))();
		}

		static ::System::Boolean IsGuideMissionFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISGUIDEMISSIONFINISHED_OFFSET))();
		}

		static ::System::UInt32 GetGuideGotoID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETGUIDEGOTOID_OFFSET))();
		}

		static ::System::UInt32 GetActivityGotoID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETACTIVITYGOTOID_OFFSET))();
		}
	};
}
