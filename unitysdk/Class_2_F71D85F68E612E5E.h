#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1382163A006DA4F3.h"
#include "unitysdk/Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_3A4E69AD540D9124;
class Class_1_E8E63295DCAF8D1A;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace RPG::GameCore { class CakeRaceEmojiRow; }
namespace RPG::GameCore { class CakeRaceFieldRow; }
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceHitConfig; }
namespace RPG::GameCore { class CakeRaceMessageRow; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceNPCRow; }
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace RPG::GameCore { class CakeRaceRegionRow; }
namespace RPG::GameCore { class CakeRaceSectionRow; }
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F71D85F68E612E5E_GET_BATTLEITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293480)
#define CLASS_2_F71D85F68E612E5E_GET_BETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C293500)
#define CLASS_2_F71D85F68E612E5E_GET_CATABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C2933B0)
#define CLASS_2_F71D85F68E612E5E_GET_CATCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C2933A0)
#define CLASS_2_F71D85F68E612E5E_GET_CATSTATETREECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C2933C0)
#define CLASS_2_F71D85F68E612E5E_GET_CELLTYPE2MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x1C2934B0)
#define CLASS_2_F71D85F68E612E5E_GET_CONSTVALUELITTLEGAMECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293350)
#define CLASS_2_F71D85F68E612E5E_GET_EFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293380)
#define CLASS_2_F71D85F68E612E5E_GET_EMOJICONFIGS_OFFSET UNITYSDK_OFFSET(0x1C2933F0)
#define CLASS_2_F71D85F68E612E5E_GET_FIELD2REGIONS_OFFSET UNITYSDK_OFFSET(0x1C293440)
#define CLASS_2_F71D85F68E612E5E_GET_FIELDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293370)
#define CLASS_2_F71D85F68E612E5E_GET_FIELDEFFECTABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293490)
#define CLASS_2_F71D85F68E612E5E_GET_FIELDSCORECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293390)
#define CLASS_2_F71D85F68E612E5E_GET_HITTEDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C2934C0)
#define CLASS_2_F71D85F68E612E5E_GET_ITEMID2ABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293470)
#define CLASS_2_F71D85F68E612E5E_GET_MESSAGECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C2933E0)
#define CLASS_2_F71D85F68E612E5E_GET_MOVESTATE2MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x1C2934A0)
#define CLASS_2_F71D85F68E612E5E_GET_NPCCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293400)
#define CLASS_2_F71D85F68E612E5E_GET_NPCSTATETREECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293410)
#define CLASS_2_F71D85F68E612E5E_GET_REGION2TAGS_OFFSET UNITYSDK_OFFSET(0x1C293460)
#define CLASS_2_F71D85F68E612E5E_GET_REGIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293360)
#define CLASS_2_F71D85F68E612E5E_GET_REGIONID2REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C293430)
#define CLASS_2_F71D85F68E612E5E_GET_SCORERANKRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C2934F0)
#define CLASS_2_F71D85F68E612E5E_GET_SECTIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C2933D0)
#define CLASS_2_F71D85F68E612E5E_GET_SPARKLECONFIG_OFFSET UNITYSDK_OFFSET(0x1C293540)
#define CLASS_2_F71D85F68E612E5E_GET_SPECIALBETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C293520)
#define CLASS_2_F71D85F68E612E5E_GET_STARTREGIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C2934D0)
#define CLASS_2_F71D85F68E612E5E_GET_TAG2REGIONS_OFFSET UNITYSDK_OFFSET(0x1C293450)
#define CLASS_2_F71D85F68E612E5E_GET_TITLECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C293420)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1C28AB20)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1C28F3B0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x1C291610)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_2BAFEFA955480F78_OFFSET UNITYSDK_OFFSET(0x1C291670)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x1C28AF90)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x1C2924A0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_3E4243BB348DE0D4_OFFSET UNITYSDK_OFFSET(0x1C28AEF0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0x1C28D4B0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x1C28C6F0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_4F90F278876933A1_OFFSET UNITYSDK_OFFSET(0x1C28B030)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x1C28FC70)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x1C290BC0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1C28DAE0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x1C28EB80)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x1C28D160)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_BD81B8467093446B_OFFSET UNITYSDK_OFFSET(0x1C28B080)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_BDCA514D5386932A_OFFSET UNITYSDK_OFFSET(0x1C2928E0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_BF6FEE69DDBB8364_OFFSET UNITYSDK_OFFSET(0x1C292E40)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x1C28EE20)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x1C28F030)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_CF48D47ABED5EA16_OFFSET UNITYSDK_OFFSET(0x1C28CE30)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x1C28AC60)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_1_OFFSET UNITYSDK_OFFSET(0x1C28B330)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_2_OFFSET UNITYSDK_OFFSET(0x1C28B520)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_3_OFFSET UNITYSDK_OFFSET(0x1C28BD40)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_4_OFFSET UNITYSDK_OFFSET(0x1C28BF30)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_5_OFFSET UNITYSDK_OFFSET(0x1C28C120)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1C28B130)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_E21AC6EE08DC160A_1_OFFSET UNITYSDK_OFFSET(0x1C28C310)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x1C28B710)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_EA1B8EA7321FACF1_OFFSET UNITYSDK_OFFSET(0x1C292360)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x1C28CB30)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_F63BFC531FDE221A_OFFSET UNITYSDK_OFFSET(0x1C2926B0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x1C28DBB0)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_FA58824BA12F6F62_1_OFFSET UNITYSDK_OFFSET(0x1C290940)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_FA58824BA12F6F62_2_OFFSET UNITYSDK_OFFSET(0x1C290A80)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x1C290800)
#define CLASS_2_F71D85F68E612E5E_METHOD_2_FD8C8F0BEE6373DC_OFFSET UNITYSDK_OFFSET(0x1C2922C0)
#define CLASS_2_F71D85F68E612E5E_SET_BETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C293510)
#define CLASS_2_F71D85F68E612E5E_SET_SPECIALBETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C293530)
#define CLASS_2_F71D85F68E612E5E_SET_STARTREGIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C2934E0)
#define CLASS_2_F71D85F68E612E5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C289F70)

inline static constexpr unsigned int Class_2_F71D85F68E612E5E_TypeDefinitionIndex = 36540;

class Class_2_F71D85F68E612E5E : public ::Class_1_1382163A006DA4F3
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _ItemId2AbilityConfigs_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>* _CellType2MoveConfig_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldRow*>* _FieldConfigs_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*>* _Region2Tags_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* _SpecialBetCoinRewardRatioList_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldScoreRow*>* _FieldScoreConfigs_k__BackingField; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _FieldEffectAbilityConfigs_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>* _MoveState2MoveConfig_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* _ScoreRankRatioList_k__BackingField; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceRegionTag, ::System::Collections::Generic::List_1<::System::UInt32>*>* _Tag2Regions_k__BackingField; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* _CatStateTreeConfigs_k__BackingField; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceMessageRow*>* _MessageConfigs_k__BackingField; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceRegionRow*>* _RegionID2RegionConfig_k__BackingField; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceNPCRow*>* _NpcConfigs_k__BackingField; // 0x80
	::RPG::GameCore::CakeRaceAbilityConfig* LGFALBOPNIP; // 0x88
	::Class_1_3A4E69AD540D9124* _SparkleConfig_k__BackingField; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>* _ConstValueLittleGameConfigs_k__BackingField; // 0x98
	::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatRow*>* _CatConfigs_k__BackingField; // 0xA8
	::System::Collections::Generic::List_1<::System::UInt32>* _BetCoinRewardRatioList_k__BackingField; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E8E63295DCAF8D1A*>* _RegionConfigs_k__BackingField; // 0xB8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceHitType, ::RPG::GameCore::CakeRaceHitConfig*>* _HittedConfigs_k__BackingField; // 0xC0
	::RPG::GameCore::CakeRaceAbilityConfig* ADBDKHJFAFJ; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _CatAbilityConfigs_k__BackingField; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* _NpcStateTreeConfigs_k__BackingField; // 0xD8
	::RPG::GameCore::CakeRaceGameConfig* OEBCGADNGII; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _Field2Regions_k__BackingField; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEffectRow*>* _EffectConfigs_k__BackingField; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEmojiRow*>* _EmojiConfigs_k__BackingField; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceSectionRow*>* _SectionConfigs_k__BackingField; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceBattleItemRow*>* _BattleItemConfigs_k__BackingField; // 0x108
	::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* _TitleConfigs_k__BackingField; // 0x110
	::System::UInt32 _StartRegionLength_k__BackingField; // 0x118
	::System::UInt64 OHNODJBABAJ; // 0x120

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelConfig* Method_2_4F90F278876933A1()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_4F90F278876933A1_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceGameConfig* Method_2_BD81B8467093446B()
	{
		return ((::RPG::GameCore::CakeRaceGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_BD81B8467093446B_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_3E4243BB348DE0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_3E4243BB348DE0D4_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_1_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_2_OFFSET))(this);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_3_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_4_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_DF2A78D8DB25ED05_5_OFFSET))(this);
	}

	::System::Void Method_2_E21AC6EE08DC160A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_E21AC6EE08DC160A_1_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_EB7282B6745B4611()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_EB7282B6745B4611_OFFSET))(this);
	}

	::System::Void Method_2_CF48D47ABED5EA16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_CF48D47ABED5EA16_OFFSET))(this);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_2_422AB1A19F04E217()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_422AB1A19F04E217_OFFSET))(this);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_FA58824BA12F6F62_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_FA58824BA12F6F62_1_OFFSET))(this);
	}

	::System::Void Method_2_FA58824BA12F6F62_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_FA58824BA12F6F62_2_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_2BAFEFA955480F78(::System::UInt32 a1, ::Class_1_E8E63295DCAF8D1A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E8E63295DCAF8D1A*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_2BAFEFA955480F78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EA1B8EA7321FACF1(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::Il2CppArray<::System::Collections::Generic::List_1<::Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539>*>* a2, ::Class_1_E8E63295DCAF8D1A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::Il2CppArray<::System::Collections::Generic::List_1<::Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539>*>*, ::Class_1_E8E63295DCAF8D1A*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_EA1B8EA7321FACF1_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector3 Method_2_BF6FEE69DDBB8364(::RPG::GameCore::CakeRaceRegionConfig* a1, ::RPG::GameCore::CakeRaceRegionCellConfig* a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::RPG::GameCore::CakeRaceRegionCellConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_BF6FEE69DDBB8364_OFFSET))(this, a1, a2);
	}

	::RPG::MVector3 Method_2_BDCA514D5386932A(::RPG::GameCore::CakeRaceRegionConfig* a1, ::RPG::GameCore::CakeRaceRegionCellConfig* a2, ::Il2CppArray<::System::Collections::Generic::List_1<::Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539>*>* a3)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::Il2CppArray<::System::Collections::Generic::List_1<::Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539>*>*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_BDCA514D5386932A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B10EBB5408EF02E(::Class_1_E8E63295DCAF8D1A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E8E63295DCAF8D1A*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F63BFC531FDE221A(::System::UInt32 a1, ::Il2CppArray<::System::Collections::Generic::List_1<::Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539>*>* a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Collections::Generic::List_1<::Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_F63BFC531FDE221A_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_FD8C8F0BEE6373DC(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_FD8C8F0BEE6373DC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_METHOD_2_259B533085E399D3_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>* get_ConstValueLittleGameConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_CONSTVALUELITTLEGAMECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E8E63295DCAF8D1A*>* get_RegionConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E8E63295DCAF8D1A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_REGIONCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldRow*>* get_FieldConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_FIELDCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEffectRow*>* get_EffectConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEffectRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_EFFECTCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldScoreRow*>* get_FieldScoreConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldScoreRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_FIELDSCORECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatRow*>* get_CatConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_CATCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* get_CatAbilityConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_CATABILITYCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* get_CatStateTreeConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_CATSTATETREECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceSectionRow*>* get_SectionConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceSectionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_SECTIONCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceMessageRow*>* get_MessageConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceMessageRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_MESSAGECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEmojiRow*>* get_EmojiConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEmojiRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_EMOJICONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceNPCRow*>* get_NpcConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceNPCRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_NPCCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* get_NpcStateTreeConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_NPCSTATETREECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* get_TitleConfigs()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_TITLECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceRegionRow*>* get_RegionID2RegionConfig()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceRegionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_REGIONID2REGIONCONFIG_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_Field2Regions()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_FIELD2REGIONS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceRegionTag, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_Tag2Regions()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceRegionTag, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_TAG2REGIONS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*>* get_Region2Tags()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_REGION2TAGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* get_ItemId2AbilityConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_ITEMID2ABILITYCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceBattleItemRow*>* get_BattleItemConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceBattleItemRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_BATTLEITEMCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* get_FieldEffectAbilityConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_FIELDEFFECTABILITYCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>* get_MoveState2MoveConfig()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_MOVESTATE2MOVECONFIG_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>* get_CellType2MoveConfig()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_CELLTYPE2MOVECONFIG_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceHitType, ::RPG::GameCore::CakeRaceHitConfig*>* get_HittedConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceHitType, ::RPG::GameCore::CakeRaceHitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_HITTEDCONFIGS_OFFSET))(this);
	}

	::System::UInt32 get_StartRegionLength()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_STARTREGIONLENGTH_OFFSET))(this);
	}

	::System::Void set_StartRegionLength(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_SET_STARTREGIONLENGTH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ScoreRankRatioList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_SCORERANKRATIOLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_BetCoinRewardRatioList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_BETCOINREWARDRATIOLIST_OFFSET))(this);
	}

	::System::Void set_BetCoinRewardRatioList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_SET_BETCOINREWARDRATIOLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SpecialBetCoinRewardRatioList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_SPECIALBETCOINREWARDRATIOLIST_OFFSET))(this);
	}

	::System::Void set_SpecialBetCoinRewardRatioList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_SET_SPECIALBETCOINREWARDRATIOLIST_OFFSET))(this, a1);
	}

	::Class_1_3A4E69AD540D9124* get_SparkleConfig()
	{
		return ((::Class_1_3A4E69AD540D9124*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_GET_SPARKLECONFIG_OFFSET))(this);
	}
};
