#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/RogueLogTag.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/RPG/GameCore/RogueSubPlaneType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_126;
class Class_1_21DCD4640D389503_16;
class Class_1_2250AFBBC876BF24_1;
class Class_1_3AD2528CD53B1639_8;
class Class_1_C22769E5B6B38BE7;
class Class_1_C3162D2F7EA647B9;
class Class_1_D17272E82AE804C2_1060;
class Class_1_F88C6D5EE35F8F30;
class Class_1_FAB24B2D24758D65;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
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

#define RPG_CLIENT_ROGUESTATIC_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1AEE37D0)
#define RPG_CLIENT_ROGUESTATIC_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1AEE3870)
#define RPG_CLIENT_ROGUESTATIC_ASSERT_OFFSET UNITYSDK_OFFSET(0x1AEE3750)
#define RPG_CLIENT_ROGUESTATIC_CANUSEFOODINROGUE_OFFSET UNITYSDK_OFFSET(0x1AEE3F20)
#define RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x1BA07E10)
#define RPG_CLIENT_ROGUESTATIC_CREATEROGUEDISPLAYACTION_OFFSET UNITYSDK_OFFSET(0x1AEE25D0)
#define RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET UNITYSDK_OFFSET(0x1B9DA8F0)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARSBYLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0x1AEE3050)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0x1AEE2D50)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0x1AEE3230)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0x1AEE0AF0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x1BA085E0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1AEE14E0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0x1BA08780)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x1AEE0950)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x1AEE0C90)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x1BA08920)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1BA084D0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1BA08310)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNHEXINFO_OFFSET UNITYSDK_OFFSET(0x1AEE07D0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0x1AEE0F40)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONASTYLEINFO_OFFSET UNITYSDK_OFFSET(0x1AEE1090)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x1AEE0DA0)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUEROOMSECTIONS_OFFSET UNITYSDK_OFFSET(0x1AEE3950)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x1AEE3270)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYAVATARDATABYPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x1AEE2CF0)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYMONSTERDATABYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1AEE54E0)
#define RPG_CLIENT_ROGUESTATIC_GETEVENTIDBYROGUEMONSTERID_OFFSET UNITYSDK_OFFSET(0x1AEE5650)
#define RPG_CLIENT_ROGUESTATIC_GETLOGTAGBYSUBMODE_OFFSET UNITYSDK_OFFSET(0x1AEE33C0)
#define RPG_CLIENT_ROGUESTATIC_GETMAXRANKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1AEE5980)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERIDLISTBYEVENTID_OFFSET UNITYSDK_OFFSET(0x1AEE56D0)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERLEVELBYCHESSROGUECELL_OFFSET UNITYSDK_OFFSET(0x1AEE5370)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET UNITYSDK_OFFSET(0x1AEE1D50)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET UNITYSDK_OFFSET(0x1AEE1B30)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_1_OFFSET UNITYSDK_OFFSET(0x1AEE1630)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_2_OFFSET UNITYSDK_OFFSET(0x1AEE16D0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_3_OFFSET UNITYSDK_OFFSET(0x1AEE15D0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1AEE1530)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDATAPROVIDERNAME_OFFSET UNITYSDK_OFFSET(0x1AEE1770)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDOORTRIGGERBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1AEE19B0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMIRACLEDISPLAYBYMIRACLEID_OFFSET UNITYSDK_OFFSET(0x1AEE4610)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0x1AEE4A60)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMCONFIGBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0x1AEE4840)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMDISPLAYDATABYELITEDROPID_OFFSET UNITYSDK_OFFSET(0x1AEE4AE0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROP_OFFSET UNITYSDK_OFFSET(0x1AEE4760)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTERIDBYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1AEE5590)
#define RPG_CLIENT_ROGUESTATIC_GETROGUETOURNPERSONAMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0x1AEE1230)
#define RPG_CLIENT_ROGUESTATIC_GET_ISSHOWUIDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1AEE3910)
#define RPG_CLIENT_ROGUESTATIC_ISBUFFHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x1AEE1DC0)
#define RPG_CLIENT_ROGUESTATIC_ISDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0x1AEE4370)
#define RPG_CLIENT_ROGUESTATIC_ISFORMULAHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x1AEE22D0)
#define RPG_CLIENT_ROGUESTATIC_ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE42D0)
#define RPG_CLIENT_ROGUESTATIC_ISINCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE2BB0)
#define RPG_CLIENT_ROGUESTATIC_ISINMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE2C50)
#define RPG_CLIENT_ROGUESTATIC_ISINMISSIONREPLAY_OFFSET UNITYSDK_OFFSET(0x1AEE3D60)
#define RPG_CLIENT_ROGUESTATIC_ISINRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE4530)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEENDLESSMODE_OFFSET UNITYSDK_OFFSET(0x1AEE1860)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORMAPROTATION_OFFSET UNITYSDK_OFFSET(0x1AEE3B20)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0x1AEE3BA0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORRESULTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1AEE2960)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORAUDIONOTLOCKNEWTARGET_OFFSET UNITYSDK_OFFSET(0x1AEE3BE0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORBATTLECOLLEGETAB_OFFSET UNITYSDK_OFFSET(0x1AEE3D20)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORDIALOGUEEVENT_OFFSET UNITYSDK_OFFSET(0x1AEE3C20)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMAPNPCNOTFADE_OFFSET UNITYSDK_OFFSET(0x1AEE3B60)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSIONPANELPROMPT_OFFSET UNITYSDK_OFFSET(0x1AEE3CE0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSION_OFFSET UNITYSDK_OFFSET(0x1AEE3C60)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORUSEFOOD_OFFSET UNITYSDK_OFFSET(0x1AEE3CA0)
#define RPG_CLIENT_ROGUESTATIC_ISINSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE2B00)
#define RPG_CLIENT_ROGUESTATIC_ISINTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE4230)
#define RPG_CLIENT_ROGUESTATIC_ISMIRACLEHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x1AEE1FC0)
#define RPG_CLIENT_ROGUESTATIC_ISPERSONASTYLEGIFTLOCKED_OFFSET UNITYSDK_OFFSET(0x1AEE2450)
#define RPG_CLIENT_ROGUESTATIC_ISRANDOMEVENTHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x1AEE2140)
#define RPG_CLIENT_ROGUESTATIC_ISROGUEPLANE_OFFSET UNITYSDK_OFFSET(0x1AEE3DE0)
#define RPG_CLIENT_ROGUESTATIC_ISROGUETEAMLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0x1AEE3360)
#define RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET UNITYSDK_OFFSET(0x1B9DABD0)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1AEE3660)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1AEE2F70)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1AEE3570)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1AEE3520)
#define RPG_CLIENT_ROGUESTATIC_LOG_1_OFFSET UNITYSDK_OFFSET(0x1AEE34D0)
#define RPG_CLIENT_ROGUESTATIC_LOG_OFFSET UNITYSDK_OFFSET(0x1AEE3480)
#define RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0x1B9DAEB0)
#define RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET UNITYSDK_OFFSET(0x1B9ECAD0)
#define RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET UNITYSDK_OFFSET(0x1B9DA810)
#define RPG_CLIENT_ROGUESTATIC_TRIGGERROGUEADVNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AEE26F0)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDEBATTLELOSERECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AEE4D00)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERHARDCONFIG_OFFSET UNITYSDK_OFFSET(0x1AEE4FA0)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1AEE4F40)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERWARNINGRATIO_OFFSET UNITYSDK_OFFSET(0x1AEE51C0)
#define RPG_CLIENT_ROGUESTATIC__APPENDROGUELOGTAG_OFFSET UNITYSDK_OFFSET(0x1AEE35C0)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINROGUETOURN_OFFSET UNITYSDK_OFFSET(0x1AEE4050)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINSIMULATEDROGUE_OFFSET UNITYSDK_OFFSET(0x1AEE3F70)
#define RPG_CLIENT_ROGUESTATIC__CHECKROGUEPLANETYPE_OFFSET UNITYSDK_OFFSET(0x1AEE3E90)
#define RPG_CLIENT_ROGUESTATIC__CONVERTLINEUPTYPE2SUBMODE_OFFSET UNITYSDK_OFFSET(0x1AEE3160)
#define RPG_CLIENT_ROGUESTATIC__GETCURMODEMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x1AEE1310)
#define RPG_CLIENT_ROGUESTATIC__GETCURSIMULATEDROGUEMAPCONFIGROW_OFFSET UNITYSDK_OFFSET(0x1AEE5240)
#define RPG_CLIENT_ROGUESTATIC__ISCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE4430)
#define RPG_CLIENT_ROGUESTATIC__ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE44F0)
#define RPG_CLIENT_ROGUESTATIC__ISINROGUE_OFFSET UNITYSDK_OFFSET(0x1AEE29A0)
#define RPG_CLIENT_ROGUESTATIC__ISMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE44B0)
#define RPG_CLIENT_ROGUESTATIC__ISOLDROGUE_OFFSET UNITYSDK_OFFSET(0x1AEE26A0)
#define RPG_CLIENT_ROGUESTATIC__ISRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE45D0)
#define RPG_CLIENT_ROGUESTATIC__ISSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE43D0)
#define RPG_CLIENT_ROGUESTATIC__ISTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1AEE4470)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueStatic_TypeDefinitionIndex = 67488;

	class RogueStatic : public ::System::Object
	{
	public:
		static ::System::Void EnterMap(::Class_1_F88C6D5EE35F8F30* a1, ::Class_1_21DCD4640D389503_16* a2)
		{
			return ((::System::Void(*)(::Class_1_F88C6D5EE35F8F30*, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET))(a1, a2);
		}

		static ::System::Void RefreshMap(::Class_1_F88C6D5EE35F8F30* a1, ::Class_1_21DCD4640D389503_16* a2)
		{
			return ((::System::Void(*)(::Class_1_F88C6D5EE35F8F30*, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameFloorWithCurrentMap(::Class_1_F88C6D5EE35F8F30* a1)
		{
			return ((::System::Boolean(*)(::Class_1_F88C6D5EE35F8F30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET))(a1);
		}

		static ::System::Void SetMapRotationData(::Class_1_3AD2528CD53B1639_8* a1)
		{
			return ((::System::Void(*)(::Class_1_3AD2528CD53B1639_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET))(a1);
		}

		static ::System::Void RefreshRogueCoin(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* CreateCostItemConfigs(::Class_1_C3162D2F7EA647B9* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET))(a1);
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

		static ::Class_1_C22769E5B6B38BE7* GetCurModeRogueBlackboardInfo()
		{
			return ((::Class_1_C22769E5B6B38BE7*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBLACKBOARDINFO_OFFSET))();
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

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow(::RPG::GameCore::RogueAeonRow* a1)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_1(::RPG::GameCore::RogueNousAeonRow* a1)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_2(::RPG::GameCore::RogueDLCAeonRow* a1)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueDLCAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_2_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_3(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_3_OFFSET))(a1);
		}

		static ::System::String* GetRogueDataProviderName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEDATAPROVIDERNAME_OFFSET))();
		}

		static ::RPG::Client::TextID GetRogueDoorTriggerButtonText(::Class_1_FAB24B2D24758D65* a1)
		{
			return ((::RPG::Client::TextID(*)(::Class_1_FAB24B2D24758D65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEDOORTRIGGERBUTTONTEXT_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueRoomTypeRow* GetNextRogueRoomTypeRow(::Class_1_D17272E82AE804C2_1060* a1)
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::Class_1_D17272E82AE804C2_1060*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueMagicRoomMarkRow* GetNextRogueMagicRoomRow(::Class_1_21C7581DFE99F091_126* a1)
		{
			return ((::RPG::GameCore::RogueMagicRoomMarkRow*(*)(::Class_1_21C7581DFE99F091_126*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET))(a1);
		}

		static ::System::Boolean IsBuffHandbookLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISBUFFHANDBOOKLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsMiracleHandbookLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISMIRACLEHANDBOOKLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsRandomEventHandbookLocked(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISRANDOMEVENTHANDBOOKLOCKED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsFormulaHandbookLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISFORMULAHANDBOOKLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsPersonaStyleGiftLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISPERSONASTYLEGIFTLOCKED_OFFSET))(a1);
		}

		static ::Class_1_2250AFBBC876BF24_1* CreateRogueDisplayAction(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::Class_1_2250AFBBC876BF24_1*(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CREATEROGUEDISPLAYACTION_OFFSET))(a1, a2);
		}

		static ::System::Void TriggerRogueAdvNotify(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRIGGERROGUEADVNOTIFY_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInRogueForResultDisplay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEFORRESULTDISPLAY_OFFSET))();
		}

		static ::System::Boolean _IsOldRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISOLDROGUE_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetDisplayAvatarDataByPlayerData(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETDISPLAYAVATARDATABYPLAYERDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllPickedAvatars(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllPickedAvatarsByLineupType(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARSBYLINEUPTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetCurModeAllPickedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEALLPICKEDAVATARS_OFFSET))();
		}

		static ::System::Boolean IsRogueTeamLineupType(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::System::Boolean(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISROGUETEAMLINEUPTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueSubMode _ConvertLineupType2SubMode(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CONVERTLINEUPTYPE2SUBMODE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueLogTag GetLogTagBySubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::RPG::Client::RogueLogTag(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETLOGTAGBYSUBMODE_OFFSET))(a1);
		}

		static ::System::Void Log(::RPG::Client::RogueLogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOG_OFFSET))(a1, a2);
		}

		static ::System::Void Log_1(::RPG::Client::RogueLogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogWarning(::RPG::Client::RogueLogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGWARNING_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarning_1(::RPG::Client::RogueLogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGWARNING_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogError(::RPG::Client::RogueLogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGERROR_OFFSET))(a1, a2);
		}

		static ::System::Void LogError_1(::RPG::Client::RogueLogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGERROR_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Assert(::RPG::Client::RogueLogTag a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_OFFSET))(a1, a2);
		}

		static ::System::Void Assert_1(::RPG::Client::RogueLogTag a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Assert_2(::RPG::Client::RogueLogTag a1, ::System::Boolean a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* _AppendRogueLogTag(::RPG::Client::RogueLogTag a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__APPENDROGUELOGTAG_OFFSET))(a1, a2);
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

		static ::System::Boolean IsRoguePlane(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISROGUEPLANE_OFFSET))(a1);
		}

		static ::System::Boolean _CheckRoguePlaneType(::System::UInt32 a1, ::RPG::GameCore::RogueSubPlaneType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::RogueSubPlaneType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CHECKROGUEPLANETYPE_OFFSET))(a1, a2);
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

		static ::System::Boolean IsDLCSubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISDLCSUBMODE_OFFSET))(a1);
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

		static ::System::Boolean _IsSimulatedRogueMode(::RPG::GameCore::GameModeType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISSIMULATEDROGUEMODE_OFFSET))(a1);
		}

		static ::System::Boolean _IsChessRogueMode(::RPG::GameCore::GameModeType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISCHESSROGUEMODE_OFFSET))(a1);
		}

		static ::System::Boolean _IsInArcadeRogueMode(::RPG::GameCore::GameModeType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISINARCADEROGUEMODE_OFFSET))(a1);
		}

		static ::System::Boolean _IsTournRogueMode(::RPG::GameCore::GameModeType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISTOURNROGUEMODE_OFFSET))(a1);
		}

		static ::System::Boolean _IsRelicRogueMode(::RPG::GameCore::GameModeType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISRELICROGUEMODE_OFFSET))(a1);
		}

		static ::System::Boolean _IsMagicRogueMode(::RPG::GameCore::GameModeType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISMAGICROGUEMODE_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracleLegacyDisplayRow* GetRogueMiracleDisplayByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMIRACLEDISPLAYBYMIRACLEID_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetRogueMonsterExtraDrop(::RPG::GameCore::NPCComponent* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROP_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetRogueMonsterExtraDropByEliteDropID(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPBYELITEDROPID_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetRogueMonsterExtraDropItemConfigByEliteDropID(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMCONFIGBYELITEDROPID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRogueMonsterExtraDropItemDisplayDataByEliteDropID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMDISPLAYDATABYELITEDROPID_OFFSET))(a1);
		}

		static ::System::Boolean TryOverrideBattleLoseRecommendLevel(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDEBATTLELOSERECOMMENDLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean TryOverrideNPCMonsterLevel(::RPG::GameCore::NPCComponent* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERLEVEL_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryOverrideNPCMonsterHardConfig(::RPG::GameCore::NPCComponent* a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERHARDCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryOverrideNPCMonsterWarningRatio(::System::Single& a1)
		{
			return ((::System::Boolean(*)(::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERWARNINGRATIO_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueMapRow* _GetCurSimulatedRogueMapConfigRow()
		{
			return ((::RPG::GameCore::RogueMapRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__GETCURSIMULATEDROGUEMAPCONFIGROW_OFFSET))();
		}

		static ::System::UInt32 GetMonsterLevelByChessRogueCell(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMONSTERLEVELBYCHESSROGUECELL_OFFSET))(a1);
		}

		static ::RPG::Client::MonsterData* GetDisplayMonsterDataByRogueMonsterGroupID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETDISPLAYMONSTERDATABYROGUEMONSTERGROUPID_OFFSET))(a1);
		}

		static ::System::UInt32 GetRogueMonsterIDByRogueMonsterGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTERIDBYROGUEMONSTERGROUPID_OFFSET))(a1);
		}

		static ::System::UInt32 GetEventIDByRogueMonsterID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETEVENTIDBYROGUEMONSTERID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMonsterIDListByEventID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMONSTERIDLISTBYEVENTID_OFFSET))(a1);
		}

		static ::RPG::Client::MonsterData* GetMaxRankMonsterData(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMAXRANKMONSTERDATA_OFFSET))(a1);
		}
	};
}
