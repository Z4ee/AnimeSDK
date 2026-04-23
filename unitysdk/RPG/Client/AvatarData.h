#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/AvatarRoleType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_03C16F0BFAD3A648;
class Class_1_071D0EF220D742B6;
class Class_1_075C34D03AFA1215_7;
class Class_1_19A9A4869232D3A4;
class Class_1_9B9B872136BC0EE3;
class Class_1_BB4B99DE4C2501EC_3;
class Class_1_BBF620797152C03F;
class Class_1_BBF620797152C03F_1;
class Class_1_D17272E82AE804C2_13;
class Class_1_D17272E82AE804C2_150;
class Class_1_F3CA30716D4FAF92_5;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class PlayerAssistInfo; }
namespace RPG::Client { class AvatarGrowUpBeforeData; }
namespace RPG::Client { class AvatarOutfit; }
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class AvatarPropertyUIData; }
namespace RPG::Client { class AvatarSkillData; }
namespace RPG::Client { class AvatarSkillTreeData; }
namespace RPG::Client { class CombatPowerData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicSuitData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class AvatarSkillRowData; }
namespace RPG::GameCore { class AvatarSkinRow; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class CharacterCampConfigRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARDATA_APPLYAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9D6F700)
#define RPG_CLIENT_AVATARDATA_APPLYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x9D6F1A0)
#define RPG_CLIENT_AVATARDATA_APPLYRELICSET_OFFSET UNITYSDK_OFFSET(0x9D6F500)
#define RPG_CLIENT_AVATARDATA_APPLYSKILLTREE_OFFSET UNITYSDK_OFFSET(0x9D6F390)
#define RPG_CLIENT_AVATARDATA_CHANGEMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9D72900)
#define RPG_CLIENT_AVATARDATA_CLEARLEVELUPBEFORDATA_OFFSET UNITYSDK_OFFSET(0x9D72B40)
#define RPG_CLIENT_AVATARDATA_CLEARPROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D72B90)
#define RPG_CLIENT_AVATARDATA_COPYBUILDDATA_OFFSET UNITYSDK_OFFSET(0x9D6EF60)
#define RPG_CLIENT_AVATARDATA_CREATEAETHERDIVIDESPIRIT_OFFSET UNITYSDK_OFFSET(0x9D71800)
#define RPG_CLIENT_AVATARDATA_CREATEASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x9D6EA10)
#define RPG_CLIENT_AVATARDATA_CREATEBYADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x9D6E7D0)
#define RPG_CLIENT_AVATARDATA_CREATEBYREALID_OFFSET UNITYSDK_OFFSET(0x9D6E300)
#define RPG_CLIENT_AVATARDATA_CREATECHALLENGEUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x9D70510)
#define RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_1_OFFSET UNITYSDK_OFFSET(0x9D6EAB0)
#define RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_2_OFFSET UNITYSDK_OFFSET(0x9D713D0)
#define RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0x9D71370)
#define RPG_CLIENT_AVATARDATA_CREATEGACHADATABYREALID_OFFSET UNITYSDK_OFFSET(0x9D6E5E0)
#define RPG_CLIENT_AVATARDATA_CREATEMAXENHANCEDGACHADATA_OFFSET UNITYSDK_OFFSET(0x9D6B5D0)
#define RPG_CLIENT_AVATARDATA_CREATEMULTIPATHAVATARBYREALID_OFFSET UNITYSDK_OFFSET(0x9D6E470)
#define RPG_CLIENT_AVATARDATA_CREATESPEICALAVATAR_OFFSET UNITYSDK_OFFSET(0x9D6F7E0)
#define RPG_CLIENT_AVATARDATA_CREATEUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x9D6FFB0)
#define RPG_CLIENT_AVATARDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9D6E190)
#define RPG_CLIENT_AVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D6DF70)
#define RPG_CLIENT_AVATARDATA_GETALLPROPERTYVALUEWITHVIRTUALRELICSET_OFFSET UNITYSDK_OFFSET(0x9D73AF0)
#define RPG_CLIENT_AVATARDATA_GETAVATARCOMBATPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x9D751C0)
#define RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_1_OFFSET UNITYSDK_OFFSET(0x9D733B0)
#define RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9D73340)
#define RPG_CLIENT_AVATARDATA_GETCURRENTEXPPERCENT_OFFSET UNITYSDK_OFFSET(0x9D74120)
#define RPG_CLIENT_AVATARDATA_GETCURRENTLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x9D743D0)
#define RPG_CLIENT_AVATARDATA_GETCURRENTMAXLV_OFFSET UNITYSDK_OFFSET(0x9D74610)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET UNITYSDK_OFFSET(0x9D73840)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET UNITYSDK_OFFSET(0x9D737A0)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x9D74080)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x9D72BE0)
#define RPG_CLIENT_AVATARDATA_GETEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x9D74D50)
#define RPG_CLIENT_AVATARDATA_GETEXTRAADDITION_OFFSET UNITYSDK_OFFSET(0x9D73970)
#define RPG_CLIENT_AVATARDATA_GETFIRSTSKINTYPE_OFFSET UNITYSDK_OFFSET(0x9D6CDB0)
#define RPG_CLIENT_AVATARDATA_GETHPMAX_OFFSET UNITYSDK_OFFSET(0x9D73E80)
#define RPG_CLIENT_AVATARDATA_GETLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x9D744F0)
#define RPG_CLIENT_AVATARDATA_GETMAXLV_OFFSET UNITYSDK_OFFSET(0x9D74710)
#define RPG_CLIENT_AVATARDATA_GETMODIFIEDADVENTURECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0x9D75E80)
#define RPG_CLIENT_AVATARDATA_GETNEEDEXPTOLV_OFFSET UNITYSDK_OFFSET(0x9D74250)
#define RPG_CLIENT_AVATARDATA_GETNEWLEVELBYADDEXP_OFFSET UNITYSDK_OFFSET(0x9D749D0)
#define RPG_CLIENT_AVATARDATA_GETNORMALSKINIDS_OFFSET UNITYSDK_OFFSET(0x9D6CF60)
#define RPG_CLIENT_AVATARDATA_GETPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x9D73FF0)
#define RPG_CLIENT_AVATARDATA_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x9D735D0)
#define RPG_CLIENT_AVATARDATA_GETRANKAFTEREXTRAADDITION_OFFSET UNITYSDK_OFFSET(0x9D73A30)
#define RPG_CLIENT_AVATARDATA_GETRELICLIST_OFFSET UNITYSDK_OFFSET(0x9D74E00)
#define RPG_CLIENT_AVATARDATA_GETSKINIDS_OFFSET UNITYSDK_OFFSET(0x9D6CFB0)
#define RPG_CLIENT_AVATARDATA_GETSPMAX_OFFSET UNITYSDK_OFFSET(0x9D73F00)
#define RPG_CLIENT_AVATARDATA_GETSTELLARSKINIDS_OFFSET UNITYSDK_OFFSET(0x9D6D120)
#define RPG_CLIENT_AVATARDATA_GET_ADVENTUREJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x9D76130)
#define RPG_CLIENT_AVATARDATA_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x9D75B60)
#define RPG_CLIENT_AVATARDATA_GET_AVATARJSONPATH_OFFSET UNITYSDK_OFFSET(0x9D762D0)
#define RPG_CLIENT_AVATARDATA_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x9D727D0)
#define RPG_CLIENT_AVATARDATA_GET_AVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x9D76910)
#define RPG_CLIENT_AVATARDATA_GET_AVATARROWDATA_OFFSET UNITYSDK_OFFSET(0x9D76970)
#define RPG_CLIENT_AVATARDATA_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9D75810)
#define RPG_CLIENT_AVATARDATA_GET_BASEID_OFFSET UNITYSDK_OFFSET(0x9D6CB30)
#define RPG_CLIENT_AVATARDATA_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0x9D767F0)
#define RPG_CLIENT_AVATARDATA_GET_CAMPROW_OFFSET UNITYSDK_OFFSET(0x9D76780)
#define RPG_CLIENT_AVATARDATA_GET_COMBATPOWERDATA_OFFSET UNITYSDK_OFFSET(0x9D76930)
#define RPG_CLIENT_AVATARDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x9D76670)
#define RPG_CLIENT_AVATARDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x9D75830)
#define RPG_CLIENT_AVATARDATA_GET_DEFAULTAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0x9D764B0)
#define RPG_CLIENT_AVATARDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x9D6CBC0)
#define RPG_CLIENT_AVATARDATA_GET_EQUIPMENTMODIFIER_OFFSET UNITYSDK_OFFSET(0x9D76B60)
#define RPG_CLIENT_AVATARDATA_GET_EQUIPMENTUID_OFFSET UNITYSDK_OFFSET(0x9D76630)
#define RPG_CLIENT_AVATARDATA_GET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D768B0)
#define RPG_CLIENT_AVATARDATA_GET_HASEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x9D769E0)
#define RPG_CLIENT_AVATARDATA_GET_HASSERVANT_OFFSET UNITYSDK_OFFSET(0x9D735C0)
#define RPG_CLIENT_AVATARDATA_GET_HASSKIN_OFFSET UNITYSDK_OFFSET(0x9D6CCB0)
#define RPG_CLIENT_AVATARDATA_GET_HASTAKENPROMOTIONREWARDLIST_OFFSET UNITYSDK_OFFSET(0x9D76A90)
#define RPG_CLIENT_AVATARDATA_GET_HEROGENDER_OFFSET UNITYSDK_OFFSET(0x9D75780)
#define RPG_CLIENT_AVATARDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9D6C890)
#define RPG_CLIENT_AVATARDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9D716F0)
#define RPG_CLIENT_AVATARDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x9D76580)
#define RPG_CLIENT_AVATARDATA_GET_ISASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x9D76560)
#define RPG_CLIENT_AVATARDATA_GET_ISCUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x9D75B50)
#define RPG_CLIENT_AVATARDATA_GET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x9D765B0)
#define RPG_CLIENT_AVATARDATA_GET_ISFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x9D76570)
#define RPG_CLIENT_AVATARDATA_GET_ISFORMALAVATAR_OFFSET UNITYSDK_OFFSET(0x9D76590)
#define RPG_CLIENT_AVATARDATA_GET_ISHERO_OFFSET UNITYSDK_OFFSET(0x9D75680)
#define RPG_CLIENT_AVATARDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x9D76AB0)
#define RPG_CLIENT_AVATARDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9D76A70)
#define RPG_CLIENT_AVATARDATA_GET_ISPLOTTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x9D75CB0)
#define RPG_CLIENT_AVATARDATA_GET_ISSHOWSKILLPLOTTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x9D75D10)
#define RPG_CLIENT_AVATARDATA_GET_ISTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x9D72770)
#define RPG_CLIENT_AVATARDATA_GET_ISUPGRADEAVAILABLETYPE_OFFSET UNITYSDK_OFFSET(0x9D765A0)
#define RPG_CLIENT_AVATARDATA_GET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D768D0)
#define RPG_CLIENT_AVATARDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9D765D0)
#define RPG_CLIENT_AVATARDATA_GET_MAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x9D74820)
#define RPG_CLIENT_AVATARDATA_GET_MAXRANK_OFFSET UNITYSDK_OFFSET(0x9D76690)
#define RPG_CLIENT_AVATARDATA_GET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9D75800)
#define RPG_CLIENT_AVATARDATA_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x9D76BB0)
#define RPG_CLIENT_AVATARDATA_GET_PREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x9D75DB0)
#define RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x9D75A10)
#define RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x9D75920)
#define RPG_CLIENT_AVATARDATA_GET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D768F0)
#define RPG_CLIENT_AVATARDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x9D765F0)
#define RPG_CLIENT_AVATARDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9D76610)
#define RPG_CLIENT_AVATARDATA_GET_REALID_OFFSET UNITYSDK_OFFSET(0x9D6CA00)
#define RPG_CLIENT_AVATARDATA_GET_RELICSDATA_OFFSET UNITYSDK_OFFSET(0x9D76650)
#define RPG_CLIENT_AVATARDATA_GET_RELICSUITMODIFIER_OFFSET UNITYSDK_OFFSET(0x9D76B80)
#define RPG_CLIENT_AVATARDATA_GET_ROLETYPE_OFFSET UNITYSDK_OFFSET(0x9D75620)
#define RPG_CLIENT_AVATARDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9D75580)
#define RPG_CLIENT_AVATARDATA_GET_SERVANTDATA_OFFSET UNITYSDK_OFFSET(0x9D76950)
#define RPG_CLIENT_AVATARDATA_GET_SKILLTREEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9D76B70)
#define RPG_CLIENT_AVATARDATA_GET_SKINDATA_OFFSET UNITYSDK_OFFSET(0x9D76B40)
#define RPG_CLIENT_AVATARDATA_GET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x9D6CAE0)
#define RPG_CLIENT_AVATARDATA_GET_SPECIALROW_OFFSET UNITYSDK_OFFSET(0x9D755A0)
#define RPG_CLIENT_AVATARDATA_GET_SPECIFIEDGENDERTYPE_OFFSET UNITYSDK_OFFSET(0x9D76B90)
#define RPG_CLIENT_AVATARDATA_GET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0x9D75C60)
#define RPG_CLIENT_AVATARDATA_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x9D76AD0)
#define RPG_CLIENT_AVATARDATA_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x9D76AF0)
#define RPG_CLIENT_AVATARDATA_GET__PROFESSIONTYPEROW_OFFSET UNITYSDK_OFFSET(0x9D75AE0)
#define RPG_CLIENT_AVATARDATA_ISCURHERO_OFFSET UNITYSDK_OFFSET(0x9D71630)
#define RPG_CLIENT_AVATARDATA_ISHEROID_OFFSET UNITYSDK_OFFSET(0x9D68100)
#define RPG_CLIENT_AVATARDATA_ISMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x9D74970)
#define RPG_CLIENT_AVATARDATA_ISPROMOTIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9D74910)
#define RPG_CLIENT_AVATARDATA_ISPROMOTIONREWARDRECEIVED_OFFSET UNITYSDK_OFFSET(0x9D752E0)
#define RPG_CLIENT_AVATARDATA_ISSAMEGENDER_OFFSET UNITYSDK_OFFSET(0x9D71780)
#define RPG_CLIENT_AVATARDATA_ISSERVANTSKILLID_OFFSET UNITYSDK_OFFSET(0x9D73540)
#define RPG_CLIENT_AVATARDATA_REFRESHCHALLENGEUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x9D70730)
#define RPG_CLIENT_AVATARDATA_REFRESHUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x9D70130)
#define RPG_CLIENT_AVATARDATA_RESETEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0x9D74CF0)
#define RPG_CLIENT_AVATARDATA_REVERTPREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x9D75E30)
#define RPG_CLIENT_AVATARDATA_SETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x9D72720)
#define RPG_CLIENT_AVATARDATA_SETAVATARSKIN_OFFSET UNITYSDK_OFFSET(0x9D6D360)
#define RPG_CLIENT_AVATARDATA_SETEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0x9D74C00)
#define RPG_CLIENT_AVATARDATA_SETGACHAINITIALDATA_OFFSET UNITYSDK_OFFSET(0x9D6E740)
#define RPG_CLIENT_AVATARDATA_SETGACHAULTIMATEDATA_OFFSET UNITYSDK_OFFSET(0x9D75090)
#define RPG_CLIENT_AVATARDATA_SETINITIALDATA_OFFSET UNITYSDK_OFFSET(0x9D74E60)
#define RPG_CLIENT_AVATARDATA_SETMULTIPATHDRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x9D6D170)
#define RPG_CLIENT_AVATARDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x9D72AF0)
#define RPG_CLIENT_AVATARDATA_SETULTIMATEDATA_OFFSET UNITYSDK_OFFSET(0x9D74ED0)
#define RPG_CLIENT_AVATARDATA_SET_AVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x9D76920)
#define RPG_CLIENT_AVATARDATA_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9D75820)
#define RPG_CLIENT_AVATARDATA_SET_COMBATPOWERDATA_OFFSET UNITYSDK_OFFSET(0x9D76940)
#define RPG_CLIENT_AVATARDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x9D76680)
#define RPG_CLIENT_AVATARDATA_SET_EQUIPMENTUID_OFFSET UNITYSDK_OFFSET(0x9D76640)
#define RPG_CLIENT_AVATARDATA_SET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D768C0)
#define RPG_CLIENT_AVATARDATA_SET_HASTAKENPROMOTIONREWARDLIST_OFFSET UNITYSDK_OFFSET(0x9D76AA0)
#define RPG_CLIENT_AVATARDATA_SET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x9D765C0)
#define RPG_CLIENT_AVATARDATA_SET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x9D76AC0)
#define RPG_CLIENT_AVATARDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9D76A80)
#define RPG_CLIENT_AVATARDATA_SET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D768E0)
#define RPG_CLIENT_AVATARDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9D765E0)
#define RPG_CLIENT_AVATARDATA_SET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x9D76BC0)
#define RPG_CLIENT_AVATARDATA_SET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D76900)
#define RPG_CLIENT_AVATARDATA_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x9D76600)
#define RPG_CLIENT_AVATARDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x9D76620)
#define RPG_CLIENT_AVATARDATA_SET_RELICSDATA_OFFSET UNITYSDK_OFFSET(0x9D76660)
#define RPG_CLIENT_AVATARDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9D75590)
#define RPG_CLIENT_AVATARDATA_SET_SERVANTDATA_OFFSET UNITYSDK_OFFSET(0x9D76960)
#define RPG_CLIENT_AVATARDATA_SET_SKINDATA_OFFSET UNITYSDK_OFFSET(0x9D76B50)
#define RPG_CLIENT_AVATARDATA_SET_SPECIALROW_OFFSET UNITYSDK_OFFSET(0x9D755B0)
#define RPG_CLIENT_AVATARDATA_SET_SPECIFIEDGENDERTYPE_OFFSET UNITYSDK_OFFSET(0x9D76BA0)
#define RPG_CLIENT_AVATARDATA_SET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x9D76AE0)
#define RPG_CLIENT_AVATARDATA_SWITCHENHANCEDID_OFFSET UNITYSDK_OFFSET(0x9D72490)
#define RPG_CLIENT_AVATARDATA_SYNCAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9D719C0)
#define RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATAWITHOUTEQUIPMENTANDRELIC_OFFSET UNITYSDK_OFFSET(0x9D71210)
#define RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0x9D72270)
#define RPG_CLIENT_AVATARDATA__ADDSKIN_OFFSET UNITYSDK_OFFSET(0x9D6DB00)
#define RPG_CLIENT_AVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET UNITYSDK_OFFSET(0x9D6FF50)
#define RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATAREQUIPMENT_OFFSET UNITYSDK_OFFSET(0x9D6FB40)
#define RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATARRELIC_OFFSET UNITYSDK_OFFSET(0x9D6FC60)
#define RPG_CLIENT_AVATARDATA__CHECKHASSKIN_OFFSET UNITYSDK_OFFSET(0x9D6CE20)
#define RPG_CLIENT_AVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D6DCC0)
#define RPG_CLIENT_AVATARDATA__ENSUREHASINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9D6CD50)
#define RPG_CLIENT_AVATARDATA__INITSKINS_OFFSET UNITYSDK_OFFSET(0x9D6D480)
#define RPG_CLIENT_AVATARDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0x9D75350)
#define RPG_CLIENT_AVATARDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9D71F60)
#define RPG_CLIENT_AVATARDATA__REFRESHSERVANTDATA_OFFSET UNITYSDK_OFFSET(0x9D72150)
#define RPG_CLIENT_AVATARDATA__SWITCHRELICSETDATA_OFFSET UNITYSDK_OFFSET(0x9D73E20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData_TypeDefinitionIndex = 57627;

	class AvatarData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarSkillTreeData* SkillTreeData; // 0x10
		::RPG::Client::AvatarGrowUpBeforeData* _LevelUpedBeforeData_k__BackingField; // 0x18
		::Class_1_9B9B872136BC0EE3* _ServantData_k__BackingField; // 0x20
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::AvatarSkillRowData*>* _SkillDataMap; // 0x28
		::RPG::Client::AvatarGrowUpBeforeData* _PromotedBeforeData_k__BackingField; // 0x30
		::RPG::GameCore::IAvatarCommonRowWrap* _Row_k__BackingField; // 0x38
		::Class_1_BBF620797152C03F* _SkillTreeModifier_k__BackingField; // 0x40
		::RPG::Client::IAvatarSkinData* _SkinData_k__BackingField; // 0x48
		::RPG::GameCore::AvatarRowData* _AvatarRowData; // 0x50
		::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig_k__BackingField; // 0x58
		::RPG::GameCore::SpecialAvatarRow* _SpecialRow_k__BackingField; // 0x60
		::RPG::Client::AvatarGrowUpBeforeData* _GrowUpBeforeData_k__BackingField; // 0x68
		::Class_1_BBF620797152C03F_1* _EquipmentModifier_k__BackingField; // 0x70
		::RPG::Client::EquipmentItemData* _TrialEquipment; // 0x78
		::RPG::Client::CombatPowerData* _CombatPowerData_k__BackingField; // 0x80
		::System::String* _AvatarCustomName; // 0x88
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* _ExtraPropertyAddition; // 0x90
		::RPG::Client::AvatarOutfit* _Outfit_k__BackingField; // 0x98
		::Class_1_19A9A4869232D3A4* _RelicSuitModifier_k__BackingField; // 0xA0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SkinIDs; // 0xA8
		::System::Collections::Generic::List_1<::System::UInt32>* _HasTakenPromotionRewardList_k__BackingField; // 0xB0
		::Class_1_03C16F0BFAD3A648* _AvatarPropertyData_k__BackingField; // 0xB8
		::RPG::Client::RelicSuitData* _RelicsData_k__BackingField; // 0xC0
		::System::UInt32 _AdventurePlayerIDOverwrite; // 0xC8
		::System::Boolean _IsNew_k__BackingField; // 0xCC
		::System::Boolean _IsMarked_k__BackingField; // 0xCD
		::System::Boolean _IsDisplayOnly_k__BackingField; // 0xCE
		::System::UInt64 FirstMetTimeStamp; // 0xD0
		::System::UInt32 _Promotion_k__BackingField; // 0xD8
		::System::UInt32 _CurrentExp_k__BackingField; // 0xDC
		::System::UInt32 _Level_k__BackingField; // 0xE0
		::RPG::GameCore::GenderType _SpecifiedGenderType_k__BackingField; // 0xE4
		::Enum_3_01618AD0437C8486 _AvatarType_k__BackingField; // 0xE8
		::System::UInt32 _Rank_k__BackingField; // 0xEC
		::System::UInt32 _EquipmentUID_k__BackingField; // 0xF0

		::System::Void _ctor(::RPG::GameCore::IAvatarCommonRowWrap* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__CTOR_OFFSET))(this, row);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Boolean get_HasSkin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASSKIN_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkinType GetFirstSkinType()
		{
			return ((::RPG::GameCore::AvatarSkinType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETFIRSTSKINTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNormalSkinIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETNORMALSKINIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetStellarSkinIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETSTELLARSKINIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSkinIDs(::RPG::GameCore::AvatarSkinType skinType)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETSKINIDS_OFFSET))(this, skinType);
		}

		::System::Void SetMultiPathDressedSkinID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETMULTIPATHDRESSEDSKINID_OFFSET))(this);
		}

		::System::Boolean _CheckHasSkin(::RPG::GameCore::AvatarSkinType skinType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__CHECKHASSKIN_OFFSET))(this, skinType);
		}

		::System::Void _EnsureHasInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__ENSUREHASINITIALIZED_OFFSET))(this);
		}

		::System::Void _InitSkins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__INITSKINS_OFFSET))(this);
		}

		::System::Void _AddSkin(::RPG::GameCore::AvatarSkinRow* skinRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkinRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__ADDSKIN_OFFSET))(this, skinRow);
		}

		static ::RPG::Client::AvatarData* Create(::System::UInt32 baseID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATE_OFFSET))(baseID);
		}

		static ::RPG::Client::AvatarData* Create_1(::RPG::Client::AvatarRoleType roleType)
		{
			return ((::RPG::Client::AvatarData*(*)(::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATE_1_OFFSET))(roleType);
		}

		static ::RPG::Client::AvatarData* CreateByRealID(::System::UInt32 realID, ::System::UInt32 enhancedID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEBYREALID_OFFSET))(realID, enhancedID);
		}

		static ::RPG::Client::AvatarData* CreateMultiPathAvatarByRealID(::System::UInt32 realID, ::System::UInt32 enhancedID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEMULTIPATHAVATARBYREALID_OFFSET))(realID, enhancedID);
		}

		static ::RPG::Client::AvatarData* CreateGachaDataByRealID(::System::UInt32 realID, ::System::UInt32 enhancedID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEGACHADATABYREALID_OFFSET))(realID, enhancedID);
		}

		static ::RPG::Client::AvatarData* CreateMaxEnhancedGachaData(::System::UInt32 realID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEMAXENHANCEDGACHADATA_OFFSET))(realID);
		}

		static ::RPG::Client::AvatarData* CreateByAdventurePlayerID(::System::UInt32 advPlayerID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEBYADVENTUREPLAYERID_OFFSET))(advPlayerID);
		}

		static ::RPG::Client::AvatarData* CreateAssistAvatar(::Proto::PlayerAssistInfo* info)
		{
			return ((::RPG::Client::AvatarData*(*)(::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEASSISTAVATAR_OFFSET))(info);
		}

		static ::System::Void CopyBuildData(::RPG::Client::AvatarData* avatarData, ::RPG::Client::AvatarData* sourceAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_COPYBUILDDATA_OFFSET))(avatarData, sourceAvatarData);
		}

		static ::RPG::Client::AvatarData* CreateSpeicalAvatar(::System::UInt32 specialAvatarID, ::System::UInt32 worldLevel)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATESPEICALAVATAR_OFFSET))(specialAvatarID, worldLevel);
		}

		static ::RPG::Client::AvatarData* CreateUpgradedAvatar(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::RPG::Client::AvatarData*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEUPGRADEDAVATAR_OFFSET))(originAvatarData);
		}

		static ::System::Void RefreshUpgradedAvatar(::RPG::Client::AvatarData*& pAvatarData, ::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_REFRESHUPGRADEDAVATAR_OFFSET))(pAvatarData, originAvatarData);
		}

		static ::RPG::Client::AvatarData* CreateChallengeUpgradedAvatar(::System::UInt32 avatarID, ::Class_1_D17272E82AE804C2_150* equipmentSnapShot, ::Class_1_071D0EF220D742B6* relicSnapShot)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::Class_1_D17272E82AE804C2_150*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATECHALLENGEUPGRADEDAVATAR_OFFSET))(avatarID, equipmentSnapShot, relicSnapShot);
		}

		static ::System::Void RefreshChallengeUpgradedAvatar(::RPG::Client::AvatarData*& pAvatarData, ::RPG::Client::AvatarData* originAvatarData, ::Class_1_D17272E82AE804C2_150* equipmentSnapShot, ::Class_1_071D0EF220D742B6* relicSnapShot)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::Client::AvatarData*, ::Class_1_D17272E82AE804C2_150*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_REFRESHCHALLENGEUPGRADEDAVATAR_OFFSET))(pAvatarData, originAvatarData, equipmentSnapShot, relicSnapShot);
		}

		static ::RPG::Client::AvatarData* CreateDisplayAvatar(::Proto::DisplayAvatarDetailInfo* info, ::System::String* PlayerName)
		{
			return ((::RPG::Client::AvatarData*(*)(::Proto::DisplayAvatarDetailInfo*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_OFFSET))(info, PlayerName);
		}

		static ::RPG::Client::AvatarData* CreateDisplayAvatar_1(::Proto::DisplayAvatarDetailInfo* info, ::System::String* PlayerName, ::Class_1_075C34D03AFA1215_7* playerOutfit)
		{
			return ((::RPG::Client::AvatarData*(*)(::Proto::DisplayAvatarDetailInfo*, ::System::String*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_1_OFFSET))(info, PlayerName, playerOutfit);
		}

		static ::RPG::Client::AvatarData* CreateDisplayAvatar_2(::System::String* PlayerName, ::Class_1_075C34D03AFA1215_7* playerOutfit, ::RPG::GameCore::GenderType genderType)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::String*, ::Class_1_075C34D03AFA1215_7*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_2_OFFSET))(PlayerName, playerOutfit, genderType);
		}

		::System::Boolean IsCurHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISCURHERO_OFFSET))(this);
		}

		static ::System::Boolean IsHeroID(::System::UInt32 realID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISHEROID_OFFSET))(realID);
		}

		static ::System::Boolean IsSameGender(::System::UInt32 heroID, ::RPG::GameCore::GenderType expectedType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISSAMEGENDER_OFFSET))(heroID, expectedType);
		}

		static ::RPG::Client::AvatarData* CreateAetherDivideSpirit(::System::UInt32 baseID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEAETHERDIVIDESPIRIT_OFFSET))(baseID);
		}

		::System::Void SyncAvatarData(::Class_1_BB4B99DE4C2501EC_3* baseData, ::Class_1_F3CA30716D4FAF92_5* uniqueData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SYNCAVATARDATA_OFFSET))(this, baseData, uniqueData);
		}

		::System::Void SyncAvatarPathData(::RPG::Client::AvatarPathData* avatarPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATA_OFFSET))(this, avatarPathData);
		}

		::System::Void SyncAvatarPathDataWithoutEquipmentAndRelic(::RPG::Client::AvatarPathData* avatarPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATAWITHOUTEQUIPMENTANDRELIC_OFFSET))(this, avatarPathData);
		}

		::System::Void SwitchEnhancedID(::System::UInt32 enhancedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SWITCHENHANCEDID_OFFSET))(this, enhancedID);
		}

		::System::Void SetAvatarLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETAVATARLEVEL_OFFSET))(this, level);
		}

		::System::Void SetAvatarSkin(::System::UInt32 skinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETAVATARSKIN_OFFSET))(this, skinID);
		}

		::System::Void ChangeMultiPathAvatarType(::System::UInt32 newAvatarID, ::System::UInt32 enhancedID, ::System::UInt32 nRank, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_13*>* pAvatarSkillTree, ::System::UInt32 skinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_13*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CHANGEMULTIPATHAVATARTYPE_OFFSET))(this, newAvatarID, enhancedID, nRank, pAvatarSkillTree, skinID);
		}

		::System::Void SetRank(::System::UInt32 newRank)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETRANK_OFFSET))(this, newRank);
		}

		::System::Void ClearLevelUpBeforData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CLEARLEVELUPBEFORDATA_OFFSET))(this);
		}

		::System::Void ClearPromotionBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CLEARPROMOTIONBEFOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarSkillData*>* GetDisplaySkillDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYSKILLDATALIST_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetCharacterSkillData(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_OFFSET))(this, skillID);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetCharacterSkillData_1(::System::UInt32 skillID, ::System::UInt32 skillLv)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_1_OFFSET))(this, skillID, skillLv);
		}

		::System::Boolean IsServantSkillID(::System::UInt32 skillID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISSERVANTSKILLID_OFFSET))(this, skillID);
		}

		::RPG::Client::AvatarPropertyUIData* GetPropertyUIData(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::AvatarPropertyUIData*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETPROPERTYUIDATA_OFFSET))(this, propertyType);
		}

		::RPG::GameCore::FixPoint GetExtraAddition(::RPG::GameCore::BattleExtraPropertyAddition property)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETEXTRAADDITION_OFFSET))(this, property);
		}

		::System::UInt32 GetRankAfterExtraAddition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETRANKAFTEREXTRAADDITION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GetAllPropertyValueWithVirtualRelicSet(::RPG::Client::RelicSuitData* virtualData)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::Client::RelicSuitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETALLPROPERTYVALUEWITHVIRTUALRELICSET_OFFSET))(this, virtualData);
		}

		::RPG::GameCore::FixPoint GetHPMax(::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETHPMAX_OFFSET))(this, promotion, level, rank);
		}

		::RPG::GameCore::FixPoint GetSPMax()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETSPMAX_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatPropertyBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatAddValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::Single GetCurrentExpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCURRENTEXPPERCENT_OFFSET))(this);
		}

		::System::UInt32 GetNeedExpToLv(::System::UInt32 toLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETNEEDEXPTOLV_OFFSET))(this, toLevel);
		}

		::System::UInt32 GetCurrentLvMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCURRENTLVMAXEXP_OFFSET))(this);
		}

		::System::UInt32 GetLvMaxExp(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETLVMAXEXP_OFFSET))(this, level);
		}

		::System::UInt32 GetCurrentMaxLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCURRENTMAXLV_OFFSET))(this);
		}

		::System::UInt32 GetMaxLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETMAXLV_OFFSET))(this);
		}

		::System::Boolean IsPromotionMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISPROMOTIONMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean IsMaxPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISMAXPROMOTION_OFFSET))(this);
		}

		::System::UInt32 GetNewLevelByAddExp(::System::UInt32 addExp)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETNEWLEVELBYADDEXP_OFFSET))(this, addExp);
		}

		::System::Void SetExtraPropertyAddition(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* pAdditionDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETEXTRAPROPERTYADDITION_OFFSET))(this, pAdditionDict);
		}

		::System::Void ResetExtraPropertyAddition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_RESETEXTRAPROPERTYADDITION_OFFSET))(this);
		}

		::RPG::Client::EquipmentItemData* GetEquipment()
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETEQUIPMENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetRelicList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETRELICLIST_OFFSET))(this);
		}

		::System::Void SetInitialData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETINITIALDATA_OFFSET))(this);
		}

		::System::Void SetUltimateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETULTIMATEDATA_OFFSET))(this);
		}

		::System::Void SetGachaInitialData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETGACHAINITIALDATA_OFFSET))(this);
		}

		::System::Void SetGachaUltimateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETGACHAULTIMATEDATA_OFFSET))(this);
		}

		::System::Single GetAvatarCombatPowerValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETAVATARCOMBATPOWERVALUE_OFFSET))(this);
		}

		::System::Boolean IsPromotionRewardReceived(::System::UInt32 promotionLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISPROMOTIONREWARDRECEIVED_OFFSET))(this, promotionLevel);
		}

		::System::Void ApplyEquipment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYEQUIPMENT_OFFSET))(this);
		}

		::System::Void ApplySkillTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYSKILLTREE_OFFSET))(this);
		}

		::System::Void ApplyRelicSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYRELICSET_OFFSET))(this);
		}

		::System::Void ApplyAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYAVATARDATA_OFFSET))(this);
		}

		::System::Void _RefreshServantData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__REFRESHSERVANTDATA_OFFSET))(this);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::System::Void _RecordData(::RPG::Client::AvatarGrowUpBeforeData* growupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__RECORDDATA_OFFSET))(this, growupData);
		}

		static ::System::Void _BuildSkillTreesAndSkills(::RPG::Client::AvatarData*& pAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET))(pAvatarData);
		}

		static ::System::Void _BuildSpecialAvatarEquipment(::RPG::Client::AvatarData*& avatar, ::RPG::GameCore::SpecialAvatarRow* configRow)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATAREQUIPMENT_OFFSET))(avatar, configRow);
		}

		static ::System::Void _BuildSpecialAvatarRelic(::RPG::Client::AvatarData*& avatar, ::RPG::GameCore::SpecialAvatarRow* configRow)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATARRELIC_OFFSET))(avatar, configRow);
		}

		::System::Void _SwitchRelicSetData(::RPG::Client::RelicSuitData* newData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSuitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__SWITCHRELICSETDATA_OFFSET))(this, newData);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_Row()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::IAvatarCommonRowWrap* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::SpecialAvatarRow* get_SpecialRow()
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SPECIALROW_OFFSET))(this);
		}

		::System::Void set_SpecialRow(::RPG::GameCore::SpecialAvatarRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SPECIALROW_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_BASEID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::AvatarRoleType get_RoleType()
		{
			return ((::RPG::Client::AvatarRoleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ROLETYPE_OFFSET))(this);
		}

		::System::UInt32 get_RealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_REALID_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Boolean get_IsHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISHERO_OFFSET))(this);
		}

		::RPG::GameCore::GenderType get_HeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HEROGENDER_OFFSET))(this);
		}

		::Enum_3_DFCB42601400F441 get_MultiPathAvatarType()
		{
			return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_MULTIPATHAVATARTYPE_OFFSET))(this);
		}

		::Enum_3_01618AD0437C8486 get_AvatarType()
		{
			return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::Enum_3_01618AD0437C8486 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_AVATARTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_ProfessionType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProfessionTypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPENAME_OFFSET))(this);
		}

		::System::String* get_AvatarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARNAME_OFFSET))(this);
		}

		::System::Boolean get_IsCustomName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISCUSTOMNAME_OFFSET))(this);
		}

		::System::UInt32 get_AdventurePlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ADVENTUREPLAYERID_OFFSET))(this);
		}

		::System::UInt32 get_SpecialAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SPECIALAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TrialPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_TRIALPLAYERID_OFFSET))(this);
		}

		::System::Boolean get_IsTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsPlotTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISPLOTTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsShowSkillPlotTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISSHOWSKILLPLOTTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_PrefsShowSimplifiedSkillDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET))(this);
		}

		::System::Void RevertPrefsShowSimplifiedSkillDesc(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_REVERTPREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET))(this, reason);
		}

		::RPG::GameCore::AdventureCharacterConfig* GetModifiedAdventureCharacterConfig()
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETMODIFIEDADVENTURECHARACTERCONFIG_OFFSET))(this);
		}

		::System::String* get_AdventureJsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ADVENTUREJSONCONFIGPATH_OFFSET))(this);
		}

		::System::String* get_AvatarJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARJSONPATH_OFFSET))(this);
		}

		::System::String* get_DefaultAvatarModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_DEFAULTAVATARMODELPATH_OFFSET))(this);
		}

		::System::Boolean get_IsAssistAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISASSISTAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsFixedPathAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISFIXEDPATHAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::System::Boolean get_IsFormalAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISFORMALAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvailableType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISUPGRADEAVAILABLETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDisplayOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISDISPLAYONLY_OFFSET))(this);
		}

		::System::Void set_IsDisplayOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ISDISPLAYONLY_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_PROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::UInt32 get_EquipmentUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_EQUIPMENTUID_OFFSET))(this);
		}

		::System::Void set_EquipmentUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_EQUIPMENTUID_OFFSET))(this, value);
		}

		::RPG::Client::RelicSuitData* get_RelicsData()
		{
			return ((::RPG::Client::RelicSuitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_RELICSDATA_OFFSET))(this);
		}

		::System::Void set_RelicsData(::RPG::Client::RelicSuitData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSuitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_RELICSDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_CURRENTEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_MAXRANK_OFFSET))(this);
		}

		::System::UInt32 get_MaxPromotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_MAXPROMOTION_OFFSET))(this);
		}

		::RPG::GameCore::CharacterCampConfigRow* get_CampRow()
		{
			return ((::RPG::GameCore::CharacterCampConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_CAMPROW_OFFSET))(this);
		}

		::System::UInt32 get_CampID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_CAMPID_OFFSET))(this);
		}

		::RPG::Client::AvatarGrowUpBeforeData* get_GrowUpBeforeData()
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_GROWUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_GrowUpBeforeData(::RPG::Client::AvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_GROWUPBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::AvatarGrowUpBeforeData* get_LevelUpedBeforeData()
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_LEVELUPEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_LevelUpedBeforeData(::RPG::Client::AvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_LEVELUPEDBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::AvatarGrowUpBeforeData* get_PromotedBeforeData()
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROMOTEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_PromotedBeforeData(::RPG::Client::AvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_PROMOTEDBEFOREDATA_OFFSET))(this, value);
		}

		::Class_1_03C16F0BFAD3A648* get_AvatarPropertyData()
		{
			return ((::Class_1_03C16F0BFAD3A648*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARPROPERTYDATA_OFFSET))(this);
		}

		::System::Void set_AvatarPropertyData(::Class_1_03C16F0BFAD3A648* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_03C16F0BFAD3A648*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_AVATARPROPERTYDATA_OFFSET))(this, value);
		}

		::RPG::Client::CombatPowerData* get_CombatPowerData()
		{
			return ((::RPG::Client::CombatPowerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_COMBATPOWERDATA_OFFSET))(this);
		}

		::System::Void set_CombatPowerData(::RPG::Client::CombatPowerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CombatPowerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_COMBATPOWERDATA_OFFSET))(this, value);
		}

		::Class_1_9B9B872136BC0EE3* get_ServantData()
		{
			return ((::Class_1_9B9B872136BC0EE3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SERVANTDATA_OFFSET))(this);
		}

		::System::Void set_ServantData(::Class_1_9B9B872136BC0EE3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9B9B872136BC0EE3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SERVANTDATA_OFFSET))(this, value);
		}

		::System::Boolean get_HasServant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASSERVANT_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowData* get_AvatarRowData()
		{
			return ((::RPG::GameCore::AvatarRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARROWDATA_OFFSET))(this);
		}

		::System::Boolean get_HasEquipment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASEQUIPMENT_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HasTakenPromotionRewardList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASTAKENPROMOTIONREWARDLIST_OFFSET))(this);
		}

		::System::Void set_HasTakenPromotionRewardList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_HASTAKENPROMOTIONREWARDLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Void set_IsMarked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ISMARKED_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ULTRASKILLCONFIG_OFFSET))(this);
		}

		::System::Void set_UltraSkillConfig(::RPG::GameCore::AvatarUltraSkillConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ULTRASKILLCONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::RPG::Client::IAvatarSkinData* get_SkinData()
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SKINDATA_OFFSET))(this);
		}

		::System::Void set_SkinData(::RPG::Client::IAvatarSkinData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SKINDATA_OFFSET))(this, value);
		}

		::Class_1_BBF620797152C03F_1* get_EquipmentModifier()
		{
			return ((::Class_1_BBF620797152C03F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_EQUIPMENTMODIFIER_OFFSET))(this);
		}

		::Class_1_BBF620797152C03F* get_SkillTreeModifier()
		{
			return ((::Class_1_BBF620797152C03F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SKILLTREEMODIFIER_OFFSET))(this);
		}

		::Class_1_19A9A4869232D3A4* get_RelicSuitModifier()
		{
			return ((::Class_1_19A9A4869232D3A4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_RELICSUITMODIFIER_OFFSET))(this);
		}

		::RPG::GameCore::GenderType get_SpecifiedGenderType()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SPECIFIEDGENDERTYPE_OFFSET))(this);
		}

		::System::Void set_SpecifiedGenderType(::RPG::GameCore::GenderType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SPECIFIEDGENDERTYPE_OFFSET))(this, value);
		}

		::RPG::Client::AvatarOutfit* get_Outfit()
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_OUTFIT_OFFSET))(this);
		}

		::System::Void set_Outfit(::RPG::Client::AvatarOutfit* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_OUTFIT_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarBaseTypeRow* get__ProfessionTypeRow()
		{
			return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET__PROFESSIONTYPEROW_OFFSET))(this);
		}
	};
}
