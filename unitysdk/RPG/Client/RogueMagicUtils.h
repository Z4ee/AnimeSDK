#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_737;
class Class_1_3A7B270FE0BE90AE_4;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class RogueMagicPowerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICUTILS_ASSERT_OFFSET UNITYSDK_OFFSET(0xA334D40)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETACTIVITYGOTOID_OFFSET UNITYSDK_OFFSET(0xA336330)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITBASICPOWER_OFFSET UNITYSDK_OFFSET(0xA32DF20)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITSTOTALBASICPOWER_OFFSET UNITYSDK_OFFSET(0xA334D90)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETCONTENTDISPLAYTEXTID_OFFSET UNITYSDK_OFFSET(0xA331BF0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETCURGAMEDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xA32F100)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETGUIDEGOTOID_OFFSET UNITYSDK_OFFSET(0xA336250)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETMISCDISPLAYTEXTID_OFFSET UNITYSDK_OFFSET(0xA31CF00)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITFACTOR_OFFSET UNITYSDK_OFFSET(0xA3353A0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITPERCENT_OFFSET UNITYSDK_OFFSET(0xA32E370)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITSTOTALFACTOR_OFFSET UNITYSDK_OFFSET(0xA335040)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETROGUEMAGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xA335910)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETSCEPTERFUNCTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xA3349E0)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERBASICPOWER_OFFSET UNITYSDK_OFFSET(0xA32A350)
#define RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERTOTALPOWER_OFFSET UNITYSDK_OFFSET(0xA32DBF0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISGUIDEAREAPASSED_OFFSET UNITYSDK_OFFSET(0xA3348F0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISGUIDEMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xA3360B0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISROGUEMAGICBATTLE_OFFSET UNITYSDK_OFFSET(0xA3347D0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISSCEPTERFUNCTYPEACTIVE_OFFSET UNITYSDK_OFFSET(0xA334B10)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISSPECIFICSCEPTERFUNCTYPEACTIVE_OFFSET UNITYSDK_OFFSET(0xA334B80)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISSTYLETYPEACTIVE_OFFSET UNITYSDK_OFFSET(0xA334BE0)
#define RPG_CLIENT_ROGUEMAGICUTILS_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA335FB0)
#define RPG_CLIENT_ROGUEMAGICUTILS_LOGERROR_OFFSET UNITYSDK_OFFSET(0xA320D40)
#define RPG_CLIENT_ROGUEMAGICUTILS_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xA334CF0)
#define RPG_CLIENT_ROGUEMAGICUTILS_LOG_OFFSET UNITYSDK_OFFSET(0xA334CA0)
#define RPG_CLIENT_ROGUEMAGICUTILS_PREPAREACTIVITYPANELMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA321C60)
#define RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINSIDEROGUESCENE_OFFSET UNITYSDK_OFFSET(0xA327260)
#define RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINTOROGUESCENE_OFFSET UNITYSDK_OFFSET(0xA325C00)
#define RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTOUTOFROGUESCENE_OFFSET UNITYSDK_OFFSET(0xA325DE0)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETFUNCTYPEMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xA335B10)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEULTRAUNITSPECIALFACTOR_OFFSET UNITYSDK_OFFSET(0xA3356A0)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPECONFIGFACTOR_OFFSET UNITYSDK_OFFSET(0xA335A10)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPEFACTOR_OFFSET UNITYSDK_OFFSET(0xA335480)
#define RPG_CLIENT_ROGUEMAGICUTILS__GETRANGETYPEMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xA335D60)
#define RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICFUNCTYPEMATCH_OFFSET UNITYSDK_OFFSET(0xA335420)
#define RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICRANGTYPEMATCH_OFFSET UNITYSDK_OFFSET(0xA335340)
#define RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICSTYLETYPEMATCH_OFFSET UNITYSDK_OFFSET(0xA3352E0)
#define RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0xA3346F0)
#define RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0xA334660)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUtils_TypeDefinitionIndex = 54926;

	class RogueMagicUtils : public ::System::Object
	{
	public:
		static ::System::Void TeleportIntoRogueScene(::Class_1_3A7B270FE0BE90AE_4* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINTOROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void TeleportOutOfRogueScene(::Class_1_3A7B270FE0BE90AE_4* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTOUTOFROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void TeleportInsideRogueScene(::Class_1_3A7B270FE0BE90AE_4* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_TELEPORTINSIDEROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean crossMap)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(crossMap);
		}

		static ::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(isEnter);
		}

		static ::System::Boolean IsRogueMagicBattle(::RPG::Client::BattleGamePhase* phase)
		{
			return ((::System::Boolean(*)(::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISROGUEMAGICBATTLE_OFFSET))(phase);
		}

		static ::System::Boolean IsGuideAreaPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISGUIDEAREAPASSED_OFFSET))();
		}

		static ::RPG::Client::TextID GetScepterFuncTypeTextID(::RPG::GameCore::RogueMagicScepterFuncType type)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETSCEPTERFUNCTYPETEXTID_OFFSET))(type);
		}

		static ::System::Boolean IsScepterFuncTypeActive(::RPG::GameCore::RogueMagicScepterFuncType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISSCEPTERFUNCTYPEACTIVE_OFFSET))(type);
		}

		static ::System::Boolean IsSpecificScepterFuncTypeActive(::RPG::GameCore::RogueMagicScepterFuncType type, ::RPG::GameCore::RogueMagicScepterFuncType targetFuncType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicScepterFuncType, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISSPECIFICSCEPTERFUNCTYPEACTIVE_OFFSET))(type, targetFuncType);
		}

		static ::System::Boolean IsStyleTypeActive(::RPG::GameCore::RogueMagicStyleType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ISSTYLETYPEACTIVE_OFFSET))(type);
		}

		static ::System::UInt32 GetCurGameDiffCompLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETCURGAMEDIFFCOMPLEVEL_OFFSET))();
		}

		static ::RPG::Client::TextID GetMiscDisplayTextID(::System::UInt32 displayID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETMISCDISPLAYTEXTID_OFFSET))(displayID);
		}

		static ::RPG::Client::TextID GetContentDisplayTextID(::System::UInt32 displayID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETCONTENTDISPLAYTEXTID_OFFSET))(displayID);
		}

		static ::System::Void Log(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_LOG_OFFSET))(format, args);
		}

		static ::System::Void LogWarning(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_LOGWARNING_OFFSET))(format, args);
		}

		static ::System::Void LogError(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_LOGERROR_OFFSET))(format, args);
		}

		static ::System::Void Assert(::System::Boolean condition, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_ASSERT_OFFSET))(condition, format, args);
		}

		static ::System::Single GetScpterTotalPower(::Class_0_16E4307DCC419505_737* scepterDataItem, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* allScpterDatas, ::RPG::GameCore::RogueMagicStyleType curStyleType, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_737*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>*, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERTOTALPOWER_OFFSET))(scepterDataItem, allScpterDatas, curStyleType, config);
		}

		static ::System::Single GetScpterBasicPower(::Class_0_16E4307DCC419505_737* scepterDataItem, ::RPG::GameCore::RogueMagicStyleType curStyleType, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_737*, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETSCPTERBASICPOWER_OFFSET))(scepterDataItem, curStyleType, config);
		}

		static ::System::Single GetAttachUnitsTotalBasicPower(::Class_0_16E4307DCC419505_737* scepterDataItem, ::RPG::GameCore::RogueMagicStyleType curStyleType, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_737*, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITSTOTALBASICPOWER_OFFSET))(scepterDataItem, curStyleType, config);
		}

		static ::System::Single GetAttachUnitBasicPower(::RPG::Client::RogueMagicUnitDataItem* unitItem, ::RPG::GameCore::RogueMagicRangeType limitRangeType, ::RPG::GameCore::RogueMagicStyleType curStyleType, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::RPG::GameCore::RogueMagicRangeType, ::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETATTACHUNITBASICPOWER_OFFSET))(unitItem, limitRangeType, curStyleType, config);
		}

		static ::System::Single GetPassiveUnitsTotalFactor(::Class_0_16E4307DCC419505_737* scepterDataItem, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* allScpterDatas, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::Class_0_16E4307DCC419505_737*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITSTOTALFACTOR_OFFSET))(scepterDataItem, allScpterDatas, config);
		}

		static ::System::Single GetPassiveUnitFactor(::RPG::Client::RogueMagicUnitDataItem* unitItem, ::Class_0_16E4307DCC419505_737* belongScepter, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* allScpterDatas, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_737*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITFACTOR_OFFSET))(unitItem, belongScepter, allScpterDatas, config);
		}

		static ::System::Single GetPassiveUnitPercent(::RPG::Client::RogueMagicUnitDataItem* unitItem, ::Class_0_16E4307DCC419505_737* belongScepter, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* allScpterDatas, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_737*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETPASSIVEUNITPERCENT_OFFSET))(unitItem, belongScepter, allScpterDatas, config);
		}

		static ::System::Single _GetPassiveUnitEffectTypeFactor(::RPG::Client::RogueMagicUnitDataItem* unitItem, ::Class_0_16E4307DCC419505_737* belongScepter, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_737*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPEFACTOR_OFFSET))(unitItem, belongScepter, config);
		}

		static ::System::Single _GetPassiveUnitEffectTypeConfigFactor(::RPG::GameCore::RogueMagicPowerConfig* config, ::RPG::GameCore::RogueMagicEffectType effectType)
		{
			return ((::System::Single(*)(::RPG::GameCore::RogueMagicPowerConfig*, ::RPG::GameCore::RogueMagicEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEUNITEFFECTTYPECONFIGFACTOR_OFFSET))(config, effectType);
		}

		static ::System::Single _GetPassiveUltraUnitSpecialFactor(::RPG::Client::RogueMagicUnitDataItem* unitItem, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* allScpterDatas, ::RPG::GameCore::RogueMagicPowerConfig* config)
		{
			return ((::System::Single(*)(::RPG::Client::RogueMagicUnitDataItem*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETPASSIVEULTRAUNITSPECIALFACTOR_OFFSET))(unitItem, allScpterDatas, config);
		}

		static ::System::UInt32 _GetFuncTypeMatchCount(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* allScpterDatas, ::RPG::GameCore::RogueMagicScepterFuncType funcType)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>*, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETFUNCTYPEMATCHCOUNT_OFFSET))(allScpterDatas, funcType);
		}

		static ::System::UInt32 _GetRangeTypeMatchCount(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* allScpterDatas, ::RPG::GameCore::RogueMagicRangeType rangeType)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>*, ::RPG::GameCore::RogueMagicRangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__GETRANGETYPEMATCHCOUNT_OFFSET))(allScpterDatas, rangeType);
		}

		static ::System::Boolean _IsRogueMagicStyleTypeMatch(::RPG::GameCore::RogueMagicStyleType left, ::RPG::GameCore::RogueMagicStyleType right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicStyleType, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICSTYLETYPEMATCH_OFFSET))(left, right);
		}

		static ::System::Boolean _IsRogueMagicFuncTypeMatch(::RPG::GameCore::RogueMagicScepterFuncType left, ::RPG::GameCore::RogueMagicScepterFuncType right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicScepterFuncType, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICFUNCTYPEMATCH_OFFSET))(left, right);
		}

		static ::System::Boolean _IsRogueMagicRangTypeMatch(::RPG::GameCore::RogueMagicRangeType left, ::RPG::GameCore::RogueMagicRangeType right)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicRangeType, ::RPG::GameCore::RogueMagicRangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS__ISROGUEMAGICRANGTYPEMATCH_OFFSET))(left, right);
		}

		static ::System::UInt32 GetRogueMagicEffectTypeCount(::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* types, ::RPG::GameCore::RogueMagicEffectType effectType)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>*, ::RPG::GameCore::RogueMagicEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS_GETROGUEMAGICEFFECTTYPECOUNT_OFFSET))(types, effectType);
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
