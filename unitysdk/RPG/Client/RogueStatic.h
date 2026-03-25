#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_3.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/RogueLogTag.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/RPG/GameCore/RogueSubPlaneType.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_14E02E1F6D70E487_2;
class Class_1_2250AFBBC876BF24_1;
class Class_1_3AD2528CD53B1639_11;
class Class_1_4CF8088A158DCE25_90;
class Class_1_4D5D53619B020DDD;
class Class_1_533CCF93B9B1AD29;
class Class_1_E39756DED83F5D0A;
class Class_1_FA4F4A67B1C04320_845;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class RogueTournHexInfo; }
namespace RPG::Client { class RogueTournPersonaModifierInfo; }
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }
namespace RPG::Client { class RogueTournPersonaStyleInfo; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class RogueAeonDisplayRow; }
namespace RPG::GameCore { class RogueAeonRow; }
namespace RPG::GameCore { class RogueDLCAeonRow; }
namespace RPG::GameCore { class RogueMagicRoomMarkRow; }
namespace RPG::GameCore { class RogueMapRow; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace RPG::GameCore { class RogueRoomTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUESTATIC_ASSERT_1_OFFSET UNITYSDK_OFFSET(0xA360B30)
#define RPG_CLIENT_ROGUESTATIC_ASSERT_2_OFFSET UNITYSDK_OFFSET(0xA360BD0)
#define RPG_CLIENT_ROGUESTATIC_ASSERT_OFFSET UNITYSDK_OFFSET(0xA360AB0)
#define RPG_CLIENT_ROGUESTATIC_CANUSEFOODINROGUE_OFFSET UNITYSDK_OFFSET(0xA361290)
#define RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0xA35DD60)
#define RPG_CLIENT_ROGUESTATIC_CREATEROGUEDISPLAYACTION_OFFSET UNITYSDK_OFFSET(0xA35FD20)
#define RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET UNITYSDK_OFFSET(0xA3449A0)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARSBYLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0xA3603C0)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0xA360220)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0xA3605A0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA35E8A0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA35E300)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA35F000)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA35E420)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xA35E780)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xA35E9C0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA35E540)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA35E210)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA35E0C0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNHEXINFO_OFFSET UNITYSDK_OFFSET(0xA35E660)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xA35EBD0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONASTYLEINFO_OFFSET UNITYSDK_OFFSET(0xA35ECC0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xA35EAB0)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUEROOMSECTIONS_OFFSET UNITYSDK_OFFSET(0xA360C80)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0xA3605E0)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYAVATARDATABYPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA360080)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYMONSTERDATABYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0xA3626E0)
#define RPG_CLIENT_ROGUESTATIC_GETEVENTIDBYROGUEMONSTERID_OFFSET UNITYSDK_OFFSET(0xA362850)
#define RPG_CLIENT_ROGUESTATIC_GETLOGTAGBYSUBMODE_OFFSET UNITYSDK_OFFSET(0xA360720)
#define RPG_CLIENT_ROGUESTATIC_GETMAXRANKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xA362C90)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERIDLISTBYEVENTID_OFFSET UNITYSDK_OFFSET(0xA3628D0)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERLEVELBYCHESSROGUECELL_OFFSET UNITYSDK_OFFSET(0xA362560)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET UNITYSDK_OFFSET(0xA35F710)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET UNITYSDK_OFFSET(0xA35F4F0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_1_OFFSET UNITYSDK_OFFSET(0xA35F140)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_2_OFFSET UNITYSDK_OFFSET(0xA35F1E0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_3_OFFSET UNITYSDK_OFFSET(0xA35F0E0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_OFFSET UNITYSDK_OFFSET(0xA35F040)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDATAPROVIDERNAME_OFFSET UNITYSDK_OFFSET(0xA35F280)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDOORTRIGGERBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0xA35F370)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMIRACLEDISPLAYBYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xA361850)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA361C80)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMCONFIGBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA361A50)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMDISPLAYDATABYELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA361D00)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROP_OFFSET UNITYSDK_OFFSET(0xA361980)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTERIDBYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0xA362790)
#define RPG_CLIENT_ROGUESTATIC_GETROGUETOURNPERSONAMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0xA35EDE0)
#define RPG_CLIENT_ROGUESTATIC_GET_ISSHOWUIDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA360C70)
#define RPG_CLIENT_ROGUESTATIC_ISBUFFHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xA35F780)
#define RPG_CLIENT_ROGUESTATIC_ISDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0xA361510)
#define RPG_CLIENT_ROGUESTATIC_ISFORMULAHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xA35FB80)
#define RPG_CLIENT_ROGUESTATIC_ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA361690)
#define RPG_CLIENT_ROGUESTATIC_ISINCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA35FFE0)
#define RPG_CLIENT_ROGUESTATIC_ISINMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA33AB00)
#define RPG_CLIENT_ROGUESTATIC_ISINMISSIONREPLAY_OFFSET UNITYSDK_OFFSET(0xA3610D0)
#define RPG_CLIENT_ROGUESTATIC_ISINRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA361770)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xA347240)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORMAPROTATION_OFFSET UNITYSDK_OFFSET(0xA360E90)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xA360F10)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORRESULTDISPLAY_OFFSET UNITYSDK_OFFSET(0xA35FE40)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORAUDIONOTLOCKNEWTARGET_OFFSET UNITYSDK_OFFSET(0xA360F50)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORBATTLECOLLEGETAB_OFFSET UNITYSDK_OFFSET(0xA361090)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORDIALOGUEEVENT_OFFSET UNITYSDK_OFFSET(0xA360F90)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMAPNPCNOTFADE_OFFSET UNITYSDK_OFFSET(0xA360ED0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSIONPANELPROMPT_OFFSET UNITYSDK_OFFSET(0xA361050)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSION_OFFSET UNITYSDK_OFFSET(0xA360FD0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORUSEFOOD_OFFSET UNITYSDK_OFFSET(0xA361010)
#define RPG_CLIENT_ROGUESTATIC_ISINSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA346D60)
#define RPG_CLIENT_ROGUESTATIC_ISINTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA33AA60)
#define RPG_CLIENT_ROGUESTATIC_ISMIRACLEHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xA35F8E0)
#define RPG_CLIENT_ROGUESTATIC_ISPERSONASTYLEGIFTLOCKED_OFFSET UNITYSDK_OFFSET(0xA35FC50)
#define RPG_CLIENT_ROGUESTATIC_ISRANDOMEVENTHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xA35FA30)
#define RPG_CLIENT_ROGUESTATIC_ISROGUEPLANE_OFFSET UNITYSDK_OFFSET(0xA361150)
#define RPG_CLIENT_ROGUESTATIC_ISROGUETEAMLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0xA3606C0)
#define RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xA345660)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0xA3609C0)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_OFFSET UNITYSDK_OFFSET(0xA343430)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0xA3608D0)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xA360880)
#define RPG_CLIENT_ROGUESTATIC_LOG_1_OFFSET UNITYSDK_OFFSET(0xA360830)
#define RPG_CLIENT_ROGUESTATIC_LOG_OFFSET UNITYSDK_OFFSET(0xA3607E0)
#define RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0xA345810)
#define RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET UNITYSDK_OFFSET(0xA342C10)
#define RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET UNITYSDK_OFFSET(0xA3448D0)
#define RPG_CLIENT_ROGUESTATIC_TRIGGERROGUEADVNOTIFY_OFFSET UNITYSDK_OFFSET(0xA345160)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDEBATTLELOSERECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xA361ED0)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERHARDCONFIG_OFFSET UNITYSDK_OFFSET(0xA362170)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xA362110)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERWARNINGRATIO_OFFSET UNITYSDK_OFFSET(0xA3623B0)
#define RPG_CLIENT_ROGUESTATIC__APPENDROGUELOGTAG_OFFSET UNITYSDK_OFFSET(0xA360920)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINROGUETOURN_OFFSET UNITYSDK_OFFSET(0xA3613C0)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINSIMULATEDROGUE_OFFSET UNITYSDK_OFFSET(0xA3612E0)
#define RPG_CLIENT_ROGUESTATIC__CHECKROGUEPLANETYPE_OFFSET UNITYSDK_OFFSET(0xA361200)
#define RPG_CLIENT_ROGUESTATIC__CONVERTLINEUPTYPE2SUBMODE_OFFSET UNITYSDK_OFFSET(0xA3604D0)
#define RPG_CLIENT_ROGUESTATIC__GETCURMODEMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA35EEB0)
#define RPG_CLIENT_ROGUESTATIC__GETCURSIMULATEDROGUEMAPCONFIGROW_OFFSET UNITYSDK_OFFSET(0xA362430)
#define RPG_CLIENT_ROGUESTATIC__ISCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA3615D0)
#define RPG_CLIENT_ROGUESTATIC__ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA361730)
#define RPG_CLIENT_ROGUESTATIC__ISINROGUE_OFFSET UNITYSDK_OFFSET(0xA35FE80)
#define RPG_CLIENT_ROGUESTATIC__ISMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA361650)
#define RPG_CLIENT_ROGUESTATIC__ISOLDROGUE_OFFSET UNITYSDK_OFFSET(0xA35FDF0)
#define RPG_CLIENT_ROGUESTATIC__ISRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA361810)
#define RPG_CLIENT_ROGUESTATIC__ISSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA361570)
#define RPG_CLIENT_ROGUESTATIC__ISTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0xA361610)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueStatic_TypeDefinitionIndex = 55004;

	class RogueStatic : public ::System::Object
	{
	public:
		static ::System::Void EnterMap(::Class_1_14E02E1F6D70E487_1* sceneInfo, ::Class_1_14E02E1F6D70E487_2* lineup)
		{
			return ((::System::Void(*)(::Class_1_14E02E1F6D70E487_1*, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET))(sceneInfo, lineup);
		}

		static ::System::Void RefreshMap(::Class_1_14E02E1F6D70E487_1* sceneInfo, ::Class_1_14E02E1F6D70E487_2* lineup)
		{
			return ((::System::Void(*)(::Class_1_14E02E1F6D70E487_1*, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET))(sceneInfo, lineup);
		}

		static ::System::Boolean IsSameFloorWithCurrentMap(::Class_1_14E02E1F6D70E487_1* protoSceneInfo)
		{
			return ((::System::Boolean(*)(::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET))(protoSceneInfo);
		}

		static ::System::Void SetMapRotationData(::Class_1_3AD2528CD53B1639_11* mapRotationData)
		{
			return ((::System::Void(*)(::Class_1_3AD2528CD53B1639_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET))(mapRotationData);
		}

		static ::System::Void RefreshRogueCoin(::System::UInt32 rogueCoinNum, ::System::Boolean isUIShowDelta)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET))(rogueCoinNum, isUIShowDelta);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* CreateCostItemConfigs(::Class_1_4D5D53619B020DDD* proto)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET))(proto);
		}

		static ::RPG::Client::RogueReviveAvatarInfo* GetCurModeRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEREVIVEAVATARINFO_OFFSET))();
		}

		static ::RPG::Client::RoguePickAvatarInfo* GetCurModeRoguePickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEPICKAVATARINFO_OFFSET))();
		}

		static ::RPG::Client::RogueBuffInfo* GetCurModeRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBUFFINFO_OFFSET))();
		}

		static ::RPG::Client::RogueFormulaInfo* GetCurModeRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEFORMULAINFO_OFFSET))();
		}

		static ::RPG::Client::IRogueMiracleInfo* GetCurModeRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMIRACLEINFO_OFFSET))();
		}

		static ::RPG::Client::RogueTournHexInfo* GetCurModeRogueTournHexInfo()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNHEXINFO_OFFSET))();
		}

		static ::RPG::Client::RogueKeywordInfo* GetCurModeRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEKEYWORDINFO_OFFSET))();
		}

		static ::Class_1_E39756DED83F5D0A* GetCurModeRogueBlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBLACKBOARDINFO_OFFSET))();
		}

		static ::RPG::Client::RogueMagicScepterInfo* GetCurModeRogueMagicScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMAGICSCEPTERINFO_OFFSET))();
		}

		static ::RPG::Client::RogueTournTitanBlessInfo* GetCurModeRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNTITANBLESSINFO_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* GetCurModeRogueTournPersonaRoomCardDeckInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardDeckInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleInfo* GetCurModeRogueTournPersonaStyleInfo()
		{
			return ((::RPG::Client::RogueTournPersonaStyleInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONASTYLEINFO_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaModifierInfo* GetRogueTournPersonaModifierInfo()
		{
			return ((::RPG::Client::RogueTournPersonaModifierInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUETOURNPERSONAMODIFIERINFO_OFFSET))();
		}

		static ::System::UInt32 _GetCurModeMonsterEliteDropID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__GETCURMODEMONSTERELITEDROPID_OFFSET))();
		}

		static ::System::String* GetCurModeRogueDebugInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEDEBUGINFO_OFFSET))();
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow(::RPG::GameCore::RogueAeonRow* aeonRow)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_OFFSET))(aeonRow);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_1(::RPG::GameCore::RogueNousAeonRow* aeonRow)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_1_OFFSET))(aeonRow);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_2(::RPG::GameCore::RogueDLCAeonRow* aeonRow)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueDLCAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_2_OFFSET))(aeonRow);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_3(::System::UInt32 rogueAeonDisplayID)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_3_OFFSET))(rogueAeonDisplayID);
		}

		static ::System::String* GetRogueDataProviderName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEDATAPROVIDERNAME_OFFSET))();
		}

		static ::RPG::Client::TextID GetRogueDoorTriggerButtonText(::Class_1_533CCF93B9B1AD29* propExtraInfo)
		{
			return ((::RPG::Client::TextID(*)(::Class_1_533CCF93B9B1AD29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEDOORTRIGGERBUTTONTEXT_OFFSET))(propExtraInfo);
		}

		static ::RPG::GameCore::RogueRoomTypeRow* GetNextRogueRoomTypeRow(::Class_1_FA4F4A67B1C04320_845* propRogueInfo)
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::Class_1_FA4F4A67B1C04320_845*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET))(propRogueInfo);
		}

		static ::RPG::GameCore::RogueMagicRoomMarkRow* GetNextRogueMagicRoomRow(::Class_1_4CF8088A158DCE25_90* doorInfo)
		{
			return ((::RPG::GameCore::RogueMagicRoomMarkRow*(*)(::Class_1_4CF8088A158DCE25_90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET))(doorInfo);
		}

		static ::System::Boolean IsBuffHandbookLocked(::System::UInt32 mazeBuffID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISBUFFHANDBOOKLOCKED_OFFSET))(mazeBuffID);
		}

		static ::System::Boolean IsMiracleHandbookLocked(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISMIRACLEHANDBOOKLOCKED_OFFSET))(miracleID);
		}

		static ::System::Boolean IsRandomEventHandbookLocked(::System::UInt32 npcID, ::System::UInt32 progress)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISRANDOMEVENTHANDBOOKLOCKED_OFFSET))(npcID, progress);
		}

		static ::System::Boolean IsFormulaHandbookLocked(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISFORMULAHANDBOOKLOCKED_OFFSET))(formulaID);
		}

		static ::System::Boolean IsPersonaStyleGiftLocked(::System::UInt32 giftID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISPERSONASTYLEGIFTLOCKED_OFFSET))(giftID);
		}

		static ::Class_1_2250AFBBC876BF24_1* CreateRogueDisplayAction(::RPG::Client::NotifyType type, ::System::Object* arg)
		{
			return ((::Class_1_2250AFBBC876BF24_1*(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CREATEROGUEDISPLAYACTION_OFFSET))(type, arg);
		}

		static ::System::Void TriggerRogueAdvNotify(::RPG::Client::NotifyType type, ::System::Object* arg)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRIGGERROGUEADVNOTIFY_OFFSET))(type, arg);
		}

		static ::System::Boolean IsInRogueForResultDisplay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEFORRESULTDISPLAY_OFFSET))();
		}

		static ::System::Boolean _IsOldRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISOLDROGUE_OFFSET))();
		}

		static ::RPG::Client::IAvatarInfoProvider* GetDisplayAvatarDataByPlayerData(::System::UInt32 realID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETDISPLAYAVATARDATABYPLAYERDATA_OFFSET))(realID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAllPickedAvatars(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARS_OFFSET))(subMode);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAllPickedAvatarsByLineupType(::Enum_3_63C076C405BE0674_3 lineupType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARSBYLINEUPTYPE_OFFSET))(lineupType);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetCurModeAllPickedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEALLPICKEDAVATARS_OFFSET))();
		}

		static ::System::Boolean IsRogueTeamLineupType(::Enum_3_63C076C405BE0674_3 lineupType)
		{
			return ((::System::Boolean(*)(::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISROGUETEAMLINEUPTYPE_OFFSET))(lineupType);
		}

		static ::RPG::GameCore::RogueSubMode _ConvertLineupType2SubMode(::Enum_3_63C076C405BE0674_3 lineupType)
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CONVERTLINEUPTYPE2SUBMODE_OFFSET))(lineupType);
		}

		static ::RPG::Client::RogueLogTag GetLogTagBySubMode(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::RPG::Client::RogueLogTag(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETLOGTAGBYSUBMODE_OFFSET))(subMode);
		}

		static ::System::Void Log(::RPG::Client::RogueLogTag tag, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOG_OFFSET))(tag, msg);
		}

		static ::System::Void Log_1(::RPG::Client::RogueLogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOG_1_OFFSET))(tag, format, args);
		}

		static ::System::Void LogWarning(::RPG::Client::RogueLogTag tag, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGWARNING_OFFSET))(tag, msg);
		}

		static ::System::Void LogWarning_1(::RPG::Client::RogueLogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGWARNING_1_OFFSET))(tag, format, args);
		}

		static ::System::Void LogError(::RPG::Client::RogueLogTag tag, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGERROR_OFFSET))(tag, msg);
		}

		static ::System::Void LogError_1(::RPG::Client::RogueLogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGERROR_1_OFFSET))(tag, format, args);
		}

		static ::System::Void Assert(::RPG::Client::RogueLogTag tag, ::System::Boolean condition)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_OFFSET))(tag, condition);
		}

		static ::System::Void Assert_1(::RPG::Client::RogueLogTag tag, ::System::Boolean condition, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_1_OFFSET))(tag, condition, msg);
		}

		static ::System::Void Assert_2(::RPG::Client::RogueLogTag tag, ::System::Boolean condition, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_2_OFFSET))(tag, condition, format, args);
		}

		static ::System::String* _AppendRogueLogTag(::RPG::Client::RogueLogTag tag, ::System::String* str)
		{
			return ((::System::String*(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__APPENDROGUELOGTAG_OFFSET))(tag, str);
		}

		static ::System::Boolean get_IsShowUIDebugInfo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GET_ISSHOWUIDEBUGINFO_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* GetCurRogueRoomSections()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURROGUEROOMSECTIONS_OFFSET))();
		}

		static ::System::Boolean IsInRogueForMapRotation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEFORMAPROTATION_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForMapNPCNotFade()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMAPNPCNOTFADE_OFFSET))();
		}

		static ::System::Boolean IsInRogueForPlayerReturn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEFORPLAYERRETURN_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForAudioNotLockNewTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORAUDIONOTLOCKNEWTARGET_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForDialogueEvent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORDIALOGUEEVENT_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSION_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForUseFood()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORUSEFOOD_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForMissionPanelPrompt()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSIONPANELPROMPT_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForBattleCollegeTab()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORBATTLECOLLEGETAB_OFFSET))();
		}

		static ::System::Boolean IsInMissionReplay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINMISSIONREPLAY_OFFSET))();
		}

		static ::System::Boolean IsRoguePlane(::System::UInt32 mazePlaneID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISROGUEPLANE_OFFSET))(mazePlaneID);
		}

		static ::System::Boolean _CheckRoguePlaneType(::System::UInt32 mazePlaneID, ::RPG::GameCore::RogueSubPlaneType planeSubType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::RogueSubPlaneType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CHECKROGUEPLANETYPE_OFFSET))(mazePlaneID, planeSubType);
		}

		static ::System::Boolean CanUseFoodInRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CANUSEFOODINROGUE_OFFSET))();
		}

		static ::System::Boolean _CanUseFoodInSimulatedRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CANUSEFOODINSIMULATEDROGUE_OFFSET))();
		}

		static ::System::Boolean _CanUseFoodInRogueTourn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CANUSEFOODINROGUETOURN_OFFSET))();
		}

		static ::RPG::GameCore::RogueSubMode GetCurRogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURROGUESUBMODE_OFFSET))();
		}

		static ::System::Boolean IsDLCSubMode(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISDLCSUBMODE_OFFSET))(subMode);
		}

		static ::System::Boolean _IsInRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISINROGUE_OFFSET))();
		}

		static ::System::Boolean IsInSimulatedRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINSIMULATEDROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInRogueEndlessMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEENDLESSMODE_OFFSET))();
		}

		static ::System::Boolean IsInChessRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINCHESSROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInArcadeRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINARCADEROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInTournRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINTOURNROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInRelicRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINRELICROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInMagicRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINMAGICROGUEMODE_OFFSET))();
		}

		static ::System::Boolean _IsSimulatedRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISSIMULATEDROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsChessRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISCHESSROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsInArcadeRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISINARCADEROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsTournRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISTOURNROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsRelicRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISRELICROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsMagicRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISMAGICROGUEMODE_OFFSET))(mode);
		}

		static ::RPG::Client::IRogueMiracleLegacyDisplayRow* GetRogueMiracleDisplayByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMIRACLEDISPLAYBYMIRACLEID_OFFSET))(miracleID);
		}

		static ::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetRogueMonsterExtraDrop(::RPG::GameCore::NPCComponent* npcComponent)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROP_OFFSET))(npcComponent);
		}

		static ::Il2CppArray<::System::UInt32>* GetRogueMonsterExtraDropByEliteDropID(::System::UInt32 eliteDropID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPBYELITEDROPID_OFFSET))(eliteDropID);
		}

		static ::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetRogueMonsterExtraDropItemConfigByEliteDropID(::System::UInt32 eliteDropID)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMCONFIGBYELITEDROPID_OFFSET))(eliteDropID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRogueMonsterExtraDropItemDisplayDataByEliteDropID(::System::UInt32 eliteDropID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMDISPLAYDATABYELITEDROPID_OFFSET))(eliteDropID);
		}

		static ::System::Boolean TryOverrideBattleLoseRecommendLevel(::System::UInt32& level)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDEBATTLELOSERECOMMENDLEVEL_OFFSET))(level);
		}

		static ::System::Boolean TryOverrideNPCMonsterLevel(::RPG::GameCore::NPCComponent* npcComp, ::System::UInt32& level)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERLEVEL_OFFSET))(npcComp, level);
		}

		static ::System::Boolean TryOverrideNPCMonsterHardConfig(::RPG::GameCore::NPCComponent* npcComp, ::System::UInt32& hardLevelGroup, ::System::UInt32& level)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERHARDCONFIG_OFFSET))(npcComp, hardLevelGroup, level);
		}

		static ::System::Boolean TryOverrideNPCMonsterWarningRatio(::System::Single& monsterWarningRatio)
		{
			return ((::System::Boolean(*)(::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERWARNINGRATIO_OFFSET))(monsterWarningRatio);
		}

		static ::RPG::GameCore::RogueMapRow* _GetCurSimulatedRogueMapConfigRow()
		{
			return ((::RPG::GameCore::RogueMapRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__GETCURSIMULATEDROGUEMAPCONFIGROW_OFFSET))();
		}

		static ::System::UInt32 GetMonsterLevelByChessRogueCell(::RPG::Client::ChessRogueBoardCellDataItem* cellDataItem)
		{
			return ((::System::UInt32(*)(::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMONSTERLEVELBYCHESSROGUECELL_OFFSET))(cellDataItem);
		}

		static ::RPG::Client::MonsterData* GetDisplayMonsterDataByRogueMonsterGroupID(::System::UInt32 rogueMonsterGroupID)
		{
			return ((::RPG::Client::MonsterData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETDISPLAYMONSTERDATABYROGUEMONSTERGROUPID_OFFSET))(rogueMonsterGroupID);
		}

		static ::System::UInt32 GetRogueMonsterIDByRogueMonsterGroupID(::System::UInt32 rogueMonsterGroupID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTERIDBYROGUEMONSTERGROUPID_OFFSET))(rogueMonsterGroupID);
		}

		static ::System::UInt32 GetEventIDByRogueMonsterID(::System::UInt32 rogueMonsterID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETEVENTIDBYROGUEMONSTERID_OFFSET))(rogueMonsterID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMonsterIDListByEventID(::System::UInt32 eventID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMONSTERIDLISTBYEVENTID_OFFSET))(eventID);
		}

		static ::RPG::Client::MonsterData* GetMaxRankMonsterData(::System::Collections::Generic::List_1<::System::UInt32>* monsterIDList)
		{
			return ((::RPG::Client::MonsterData*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMAXRANKMONSTERDATA_OFFSET))(monsterIDList);
		}
	};
}
