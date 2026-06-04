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

class Class_1_21DCD4640D389503_18;
class Class_1_2250AFBBC876BF24_1;
class Class_1_6BD41257D23618B4_23;
class Class_1_8A6E7E796972219B;
class Class_1_C22769E5B6B38BE7;
class Class_1_C74059A83466814F;
class Class_1_D17272E82AE804C2_920;
class Class_1_EF2D3B79941AF6F8;
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

#define RPG_CLIENT_ROGUESTATIC_ASSERT_1_OFFSET UNITYSDK_OFFSET(0xC7E7870)
#define RPG_CLIENT_ROGUESTATIC_ASSERT_2_OFFSET UNITYSDK_OFFSET(0xC7E7910)
#define RPG_CLIENT_ROGUESTATIC_ASSERT_OFFSET UNITYSDK_OFFSET(0xC7E77F0)
#define RPG_CLIENT_ROGUESTATIC_CANUSEFOODINROGUE_OFFSET UNITYSDK_OFFSET(0xC7E8170)
#define RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0xC7E4DD0)
#define RPG_CLIENT_ROGUESTATIC_CREATEROGUEDISPLAYACTION_OFFSET UNITYSDK_OFFSET(0xC7E6F50)
#define RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET UNITYSDK_OFFSET(0xC7B9150)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARSBYLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0xC7E72D0)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0xC7E7110)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0xC7E74B0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xC7C07F0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xC7E5400)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC7E6070)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC7E5550)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xC7E5920)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC7BAE10)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7E56A0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC7E52F0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC7E5180)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNHEXINFO_OFFSET UNITYSDK_OFFSET(0xC7E57F0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xC7E5BC0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNPERSONASTYLEINFO_OFFSET UNITYSDK_OFFSET(0xC7E5CC0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xC7E5A70)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUEROOMSECTIONS_OFFSET UNITYSDK_OFFSET(0xC7E79C0)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0xC7E8540)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYAVATARDATABYPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xC7E70B0)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYMONSTERDATABYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0xC7E9A80)
#define RPG_CLIENT_ROGUESTATIC_GETEVENTIDBYROGUEMONSTERID_OFFSET UNITYSDK_OFFSET(0xC7E9BF0)
#define RPG_CLIENT_ROGUESTATIC_GETLOGTAGBYSUBMODE_OFFSET UNITYSDK_OFFSET(0xC7E7550)
#define RPG_CLIENT_ROGUESTATIC_GETMAXRANKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xC7E9F20)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERIDLISTBYEVENTID_OFFSET UNITYSDK_OFFSET(0xC7E9C70)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERLEVELBYCHESSROGUECELL_OFFSET UNITYSDK_OFFSET(0xC7E9910)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET UNITYSDK_OFFSET(0xC7E67E0)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET UNITYSDK_OFFSET(0xC7E6560)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_1_OFFSET UNITYSDK_OFFSET(0xC7E61B0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_2_OFFSET UNITYSDK_OFFSET(0xC7E6250)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_3_OFFSET UNITYSDK_OFFSET(0xC7E6150)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_OFFSET UNITYSDK_OFFSET(0xC7E60B0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDATAPROVIDERNAME_OFFSET UNITYSDK_OFFSET(0xC7E62F0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDOORTRIGGERBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0xC7E63E0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMIRACLEDISPLAYBYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xC7E8C00)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC7E9000)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMCONFIGBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC7E8DE0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMDISPLAYDATABYELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC7E9080)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROP_OFFSET UNITYSDK_OFFSET(0xC7E8D00)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTERIDBYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0xC7E9B30)
#define RPG_CLIENT_ROGUESTATIC_GETROGUETOURNPERSONAMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0xC7E5E10)
#define RPG_CLIENT_ROGUESTATIC_GET_ISSHOWUIDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC7E79B0)
#define RPG_CLIENT_ROGUESTATIC_ISBUFFHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xC7E6850)
#define RPG_CLIENT_ROGUESTATIC_ISDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0xC7E8960)
#define RPG_CLIENT_ROGUESTATIC_ISFORMULAHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xC7E6CB0)
#define RPG_CLIENT_ROGUESTATIC_ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E88C0)
#define RPG_CLIENT_ROGUESTATIC_ISINCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8780)
#define RPG_CLIENT_ROGUESTATIC_ISINMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8820)
#define RPG_CLIENT_ROGUESTATIC_ISINMISSIONREPLAY_OFFSET UNITYSDK_OFFSET(0xC7E7FB0)
#define RPG_CLIENT_ROGUESTATIC_ISINRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8B20)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xC7E8630)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORMAPROTATION_OFFSET UNITYSDK_OFFSET(0xC7E7C10)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xC7E7C90)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORRESULTDISPLAY_OFFSET UNITYSDK_OFFSET(0xC7E7070)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORAUDIONOTLOCKNEWTARGET_OFFSET UNITYSDK_OFFSET(0xC7E7CD0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORBATTLECOLLEGETAB_OFFSET UNITYSDK_OFFSET(0xC7E7F70)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORDIALOGUEEVENT_OFFSET UNITYSDK_OFFSET(0xC7E7D10)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMAPNPCNOTFADE_OFFSET UNITYSDK_OFFSET(0xC7E7C50)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSIONPANELPROMPT_OFFSET UNITYSDK_OFFSET(0xC7E7F30)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSION_OFFSET UNITYSDK_OFFSET(0xC7E7D50)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORUSEFOOD_OFFSET UNITYSDK_OFFSET(0xC7E7D90)
#define RPG_CLIENT_ROGUESTATIC_ISINSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E83F0)
#define RPG_CLIENT_ROGUESTATIC_ISINTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E84A0)
#define RPG_CLIENT_ROGUESTATIC_ISMIRACLEHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xC7E6A10)
#define RPG_CLIENT_ROGUESTATIC_ISPERSONASTYLEGIFTLOCKED_OFFSET UNITYSDK_OFFSET(0xC7E6E00)
#define RPG_CLIENT_ROGUESTATIC_ISRANDOMEVENTHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xC7E6B60)
#define RPG_CLIENT_ROGUESTATIC_ISROGUEPLANE_OFFSET UNITYSDK_OFFSET(0xC7E8030)
#define RPG_CLIENT_ROGUESTATIC_ISROGUETEAMLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0xC7E74F0)
#define RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xC7B9430)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0xC7BB390)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_OFFSET UNITYSDK_OFFSET(0xC7BF6D0)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0xC7E7700)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xC7E76B0)
#define RPG_CLIENT_ROGUESTATIC_LOG_1_OFFSET UNITYSDK_OFFSET(0xC7E7660)
#define RPG_CLIENT_ROGUESTATIC_LOG_OFFSET UNITYSDK_OFFSET(0xC7E7610)
#define RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0xC7B96D0)
#define RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET UNITYSDK_OFFSET(0xC7CAC70)
#define RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET UNITYSDK_OFFSET(0xC7B9080)
#define RPG_CLIENT_ROGUESTATIC_TRIGGERROGUEADVNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CD880)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDEBATTLELOSERECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xC7E92A0)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERHARDCONFIG_OFFSET UNITYSDK_OFFSET(0xC7E9540)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xC7E94E0)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERWARNINGRATIO_OFFSET UNITYSDK_OFFSET(0xC7E9760)
#define RPG_CLIENT_ROGUESTATIC__APPENDROGUELOGTAG_OFFSET UNITYSDK_OFFSET(0xC7E7750)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINROGUETOURN_OFFSET UNITYSDK_OFFSET(0xC7E82A0)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINSIMULATEDROGUE_OFFSET UNITYSDK_OFFSET(0xC7E81C0)
#define RPG_CLIENT_ROGUESTATIC__CHECKROGUEPLANETYPE_OFFSET UNITYSDK_OFFSET(0xC7E80E0)
#define RPG_CLIENT_ROGUESTATIC__CONVERTLINEUPTYPE2SUBMODE_OFFSET UNITYSDK_OFFSET(0xC7E73E0)
#define RPG_CLIENT_ROGUESTATIC__GETCURMODEMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC7E5EF0)
#define RPG_CLIENT_ROGUESTATIC__GETCURSIMULATEDROGUEMAPCONFIGROW_OFFSET UNITYSDK_OFFSET(0xC7E97E0)
#define RPG_CLIENT_ROGUESTATIC__ISCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8A20)
#define RPG_CLIENT_ROGUESTATIC__ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8AE0)
#define RPG_CLIENT_ROGUESTATIC__ISINROGUE_OFFSET UNITYSDK_OFFSET(0xC7E7DD0)
#define RPG_CLIENT_ROGUESTATIC__ISMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8AA0)
#define RPG_CLIENT_ROGUESTATIC__ISOLDROGUE_OFFSET UNITYSDK_OFFSET(0xC7E7020)
#define RPG_CLIENT_ROGUESTATIC__ISRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8BC0)
#define RPG_CLIENT_ROGUESTATIC__ISSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E89C0)
#define RPG_CLIENT_ROGUESTATIC__ISTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0xC7E8A60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueStatic_TypeDefinitionIndex = 63125;

	class RogueStatic : public ::System::Object
	{
	public:
		static ::System::Void EnterMap(::Class_1_EF2D3B79941AF6F8* a1, ::Class_1_21DCD4640D389503_18* a2)
		{
			return ((::System::Void(*)(::Class_1_EF2D3B79941AF6F8*, ::Class_1_21DCD4640D389503_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET))(a1, a2);
		}

		static ::System::Void RefreshMap(::Class_1_EF2D3B79941AF6F8* a1, ::Class_1_21DCD4640D389503_18* a2)
		{
			return ((::System::Void(*)(::Class_1_EF2D3B79941AF6F8*, ::Class_1_21DCD4640D389503_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameFloorWithCurrentMap(::Class_1_EF2D3B79941AF6F8* a1)
		{
			return ((::System::Boolean(*)(::Class_1_EF2D3B79941AF6F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET))(a1);
		}

		static ::System::Void SetMapRotationData(::Class_1_8A6E7E796972219B* a1)
		{
			return ((::System::Void(*)(::Class_1_8A6E7E796972219B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET))(a1);
		}

		static ::System::Void RefreshRogueCoin(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* CreateCostItemConfigs(::Class_1_C74059A83466814F* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET))(a1);
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

		static ::RPG::GameCore::RogueRoomTypeRow* GetNextRogueRoomTypeRow(::Class_1_D17272E82AE804C2_920* a1)
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::Class_1_D17272E82AE804C2_920*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueMagicRoomMarkRow* GetNextRogueMagicRoomRow(::Class_1_6BD41257D23618B4_23* a1)
		{
			return ((::RPG::GameCore::RogueMagicRoomMarkRow*(*)(::Class_1_6BD41257D23618B4_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET))(a1);
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
