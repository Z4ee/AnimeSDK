#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/MatchThreeBoardEnvTag.h"
#include "unitysdk/RPG/Client/MatchThreeBoard_GameState.h"
#include "unitysdk/RPG/Client/MatchThreeBoard_PowerCounterSizeConfig.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1D65C84443DC695F;
class Class_1_95E1BEF84A79D9EB_1;
class Class_1_AA0343CD5D895891;
class Class_1_DC01FF708B3C70CD;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class GridBasedEventData; }
namespace RPG::Client { class GridBasedMovement; }
namespace RPG::Client { class InverseMask; }
namespace RPG::Client { class MatchThreeBoardEnv; }
namespace RPG::Client { class MatchThreeEnergyFadeEffect; }
namespace RPG::Client { class MatchThreeFlashEffect; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client { class MatchThreeGrid; }
namespace RPG::Client { class MatchThreeLoopEffect; }
namespace RPG::Client { class MatchThreePiece; }
namespace RPG::Client { class MatchThreePowerCounter; }
namespace RPG::Client { class MatchThreeSelectionState; }
namespace RPG::Client { class MatchThreeSkillTriggerEffect; }
namespace RPG::Client { class MatchThreeTimedEffect; }
namespace RPG::Client { class MatchThreeTutorialEffect; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { template <typename T> class MatchThreeIndex_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONBOARDDESTROY_OFFSET UNITYSDK_OFFSET(0x9B308A0)
#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x9B30980)
#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPROPINPUT_OFFSET UNITYSDK_OFFSET(0x9B31120)
#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONSWITCH_OFFSET UNITYSDK_OFFSET(0x9B307C0)
#define RPG_CLIENT_MATCHTHREEBOARD_CREATEBOARD_OFFSET UNITYSDK_OFFSET(0x9B25160)
#define RPG_CLIENT_MATCHTHREEBOARD_DOCREATEGRIDONBOARD_OFFSET UNITYSDK_OFFSET(0x9B27B10)
#define RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEBYDROPPATH_OFFSET UNITYSDK_OFFSET(0x9B27850)
#define RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEONBOARD_OFFSET UNITYSDK_OFFSET(0x9B26DB0)
#define RPG_CLIENT_MATCHTHREEBOARD_DODROPPIECEPATH_OFFSET UNITYSDK_OFFSET(0x9B28990)
#define RPG_CLIENT_MATCHTHREEBOARD_DOENERGYFADEEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2DA50)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPIECETOPROP_OFFSET UNITYSDK_OFFSET(0x9B2BFE0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPROPTOPIECE_OFFSET UNITYSDK_OFFSET(0x9B2BCD0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILLTOPROP_OFFSET UNITYSDK_OFFSET(0x9B2B790)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILL_OFFSET UNITYSDK_OFFSET(0x9B2B2A0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSKILL_OFFSET UNITYSDK_OFFSET(0x9B2C300)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSTEP_OFFSET UNITYSDK_OFFSET(0x9B2C760)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2ADB0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOMATCHPIECE_OFFSET UNITYSDK_OFFSET(0x9B28B40)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x9B30730)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYALLSCREENBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2D0E0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2CD80)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYCOPYPIECEEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2CA00)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYMULTISTYLEBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2D350)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPOWERCOUNTER_OFFSET UNITYSDK_OFFSET(0x9B2D620)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPROPBUBBLEEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2D4D0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYREFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0x9B287D0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYSTEPBONUSTEXT_OFFSET UNITYSDK_OFFSET(0x9B30380)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPROPCANCEL_OFFSET UNITYSDK_OFFSET(0x9B30ED0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPROPUSE_OFFSET UNITYSDK_OFFSET(0x9B30C60)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHGRID_OFFSET UNITYSDK_OFFSET(0x9B27E70)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHPIECE_OFFSET UNITYSDK_OFFSET(0x9B28360)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEGRID_OFFSET UNITYSDK_OFFSET(0x9B2AB50)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEPIECE_OFFSET UNITYSDK_OFFSET(0x9B29B70)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSETBOARDENVTAG_OFFSET UNITYSDK_OFFSET(0x9B2DF30)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSHAKEPIECE_OFFSET UNITYSDK_OFFSET(0x9B29600)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSKILLTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x9B2DD20)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSTOPSHAKEPIECE_OFFSET UNITYSDK_OFFSET(0x9B29890)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSWITCHPIECE_OFFSET UNITYSDK_OFFSET(0x9B29DE0)
#define RPG_CLIENT_MATCHTHREEBOARD_GETEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x9B2EAA0)
#define RPG_CLIENT_MATCHTHREEBOARD_GETPIECESIZE_OFFSET UNITYSDK_OFFSET(0x9B2EA50)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x9B31200)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET UNITYSDK_OFFSET(0x9B30AA0)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9B30A80)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x9B30A60)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_SELECTIONPIECE_OFFSET UNITYSDK_OFFSET(0x9B307A0)
#define RPG_CLIENT_MATCHTHREEBOARD_GET__CANINPUT_OFFSET UNITYSDK_OFFSET(0x9B30D60)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_1_OFFSET UNITYSDK_OFFSET(0x9B2E7B0)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_OFFSET UNITYSDK_OFFSET(0x9B2E6B0)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0x9B2E8D0)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x9B2E840)
#define RPG_CLIENT_MATCHTHREEBOARD_INITBOARD_OFFSET UNITYSDK_OFFSET(0x9B22FC0)
#define RPG_CLIENT_MATCHTHREEBOARD_ISPROPUSEORPROPSELECTION_OFFSET UNITYSDK_OFFSET(0x9B2E4B0)
#define RPG_CLIENT_MATCHTHREEBOARD_ISSELECTIONSTATESELECTED_OFFSET UNITYSDK_OFFSET(0x9B2E450)
#define RPG_CLIENT_MATCHTHREEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9B22CC0)
#define RPG_CLIENT_MATCHTHREEBOARD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9B251A0)
#define RPG_CLIENT_MATCHTHREEBOARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9B24910)
#define RPG_CLIENT_MATCHTHREEBOARD_ONINPUTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9B2E3E0)
#define RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9B25A00)
#define RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9B262A0)
#define RPG_CLIENT_MATCHTHREEBOARD_PLAYENEMYSWITCHTIPEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2A490)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONBOARDDESTROY_OFFSET UNITYSDK_OFFSET(0x9B30910)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x9B309F0)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPROPINPUT_OFFSET UNITYSDK_OFFSET(0x9B31190)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONSWITCH_OFFSET UNITYSDK_OFFSET(0x9B30830)
#define RPG_CLIENT_MATCHTHREEBOARD_SETMOTIONTIMESCALE_OFFSET UNITYSDK_OFFSET(0x9B2E570)
#define RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATESELECTED_OFFSET UNITYSDK_OFFSET(0x9B26A10)
#define RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATEVISIBLE_OFFSET UNITYSDK_OFFSET(0x9B2E050)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x9B31210)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET UNITYSDK_OFFSET(0x9B30AB0)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9B30A90)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x9B30A70)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_SELECTIONPIECE_OFFSET UNITYSDK_OFFSET(0x9B307B0)
#define RPG_CLIENT_MATCHTHREEBOARD__ASSERTEMPTYPIECE_OFFSET UNITYSDK_OFFSET(0x9B2EB10)
#define RPG_CLIENT_MATCHTHREEBOARD__ASSETEMPTYGRID_OFFSET UNITYSDK_OFFSET(0x9B27CF0)
#define RPG_CLIENT_MATCHTHREEBOARD__BEGINDRAGTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9B2FC00)
#define RPG_CLIENT_MATCHTHREEBOARD__CANMOVESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9B26880)
#define RPG_CLIENT_MATCHTHREEBOARD__CANSWITCH_OFFSET UNITYSDK_OFFSET(0x9B300C0)
#define RPG_CLIENT_MATCHTHREEBOARD__CHANGEPIECEPOSTO_OFFSET UNITYSDK_OFFSET(0x9B2EDA0)
#define RPG_CLIENT_MATCHTHREEBOARD__CLEARACTIVEPROP_OFFSET UNITYSDK_OFFSET(0x9B30DD0)
#define RPG_CLIENT_MATCHTHREEBOARD__CLEARPROPINPUT_OFFSET UNITYSDK_OFFSET(0x9B30B40)
#define RPG_CLIENT_MATCHTHREEBOARD__CREATESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9B24680)
#define RPG_CLIENT_MATCHTHREEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9B31280)
#define RPG_CLIENT_MATCHTHREEBOARD__DESTROYPROPPANEL_OFFSET UNITYSDK_OFFSET(0x9B22E50)
#define RPG_CLIENT_MATCHTHREEBOARD__DETERMINEDIR_OFFSET UNITYSDK_OFFSET(0x9B25730)
#define RPG_CLIENT_MATCHTHREEBOARD__ENDDRAGTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9B30030)
#define RPG_CLIENT_MATCHTHREEBOARD__GETBOMBCREATEEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2F790)
#define RPG_CLIENT_MATCHTHREEBOARD__GETBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2D220)
#define RPG_CLIENT_MATCHTHREEBOARD__GETENERGYFADEEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2DB60)
#define RPG_CLIENT_MATCHTHREEBOARD__GETFLASHEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2C5A0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETGEMPOUCHFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2AF70)
#define RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBREAKEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2F630)
#define RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x9B28170)
#define RPG_CLIENT_MATCHTHREEBOARD__GETLOCALPOINT_OFFSET UNITYSDK_OFFSET(0x9B255E0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETLOOPEFFECTBYINDEX_OFFSET UNITYSDK_OFFSET(0x9B2F8C0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETMATCHEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2F3F0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETMULTISTYLEBOMBFLASHEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2C6D0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYINDEX_OFFSET UNITYSDK_OFFSET(0x9B24FE0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYLOCALPOINT_OFFSET UNITYSDK_OFFSET(0x9B25D40)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTERSIZECONFIG_OFFSET UNITYSDK_OFFSET(0x9B2D8D0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTER_OFFSET UNITYSDK_OFFSET(0x9B2D9C0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETREFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0x9B28900)
#define RPG_CLIENT_MATCHTHREEBOARD__GETSKILLTRAILEFFECTBYSKILLID_OFFSET UNITYSDK_OFFSET(0x9B2B550)
#define RPG_CLIENT_MATCHTHREEBOARD__GETSKILLTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x9B2DEA0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETSTEPTRAILEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2C970)
#define RPG_CLIENT_MATCHTHREEBOARD__INITPROPPANEL_OFFSET UNITYSDK_OFFSET(0x9B24790)
#define RPG_CLIENT_MATCHTHREEBOARD__ISDRAGABLE_OFFSET UNITYSDK_OFFSET(0x9B2E500)
#define RPG_CLIENT_MATCHTHREEBOARD__ISNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x9B2FA30)
#define RPG_CLIENT_MATCHTHREEBOARD__ISPIECESELECTABLE_OFFSET UNITYSDK_OFFSET(0x9B275D0)
#define RPG_CLIENT_MATCHTHREEBOARD__LOCALPOINT2INDEX_OFFSET UNITYSDK_OFFSET(0x9B25EE0)
#define RPG_CLIENT_MATCHTHREEBOARD__MOVEPIECEPATH_OFFSET UNITYSDK_OFFSET(0x9B279A0)
#define RPG_CLIENT_MATCHTHREEBOARD__MOVESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9B26910)
#define RPG_CLIENT_MATCHTHREEBOARD__ONCHESSBOARDINPUTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9B30D00)
#define RPG_CLIENT_MATCHTHREEBOARD__ONDRAGTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9B2FB40)
#define RPG_CLIENT_MATCHTHREEBOARD__ONGRIDBASEDMOVE_OFFSET UNITYSDK_OFFSET(0x9B266F0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONONEONONEDATACHANGE_OFFSET UNITYSDK_OFFSET(0x9B30AC0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONCANCEL_OFFSET UNITYSDK_OFFSET(0x9B30F50)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONOK_OFFSET UNITYSDK_OFFSET(0x9B30E20)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTCONSUMED_OFFSET UNITYSDK_OFFSET(0x9B30C10)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTDISCARDED_OFFSET UNITYSDK_OFFSET(0x9B26450)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPUSE_OFFSET UNITYSDK_OFFSET(0x9B30FC0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9B24F90)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYBOARDSHAKEANIM_OFFSET UNITYSDK_OFFSET(0x9B2F6F0)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBCREATEEFFECT_OFFSET UNITYSDK_OFFSET(0x9B274C0)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBMATCHEDEFFECT_OFFSET UNITYSDK_OFFSET(0x9B2CDF0)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYGRIDBREAKEFFECT_OFFSET UNITYSDK_OFFSET(0x9B28220)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHAUDIO_OFFSET UNITYSDK_OFFSET(0x9B29090)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHEDEFFECT_OFFSET UNITYSDK_OFFSET(0x9B29240)
#define RPG_CLIENT_MATCHTHREEBOARD__REFRESHPIECEPOSITION_OFFSET UNITYSDK_OFFSET(0x9B24960)
#define RPG_CLIENT_MATCHTHREEBOARD__REGISTERSKILLTRAILEFFECT_OFFSET UNITYSDK_OFFSET(0x9B24460)
#define RPG_CLIENT_MATCHTHREEBOARD__REMOVELOOPEFFECT_OFFSET UNITYSDK_OFFSET(0x9B28E70)
#define RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTIONPIECESTATE_OFFSET UNITYSDK_OFFSET(0x9B26690)
#define RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x9B25930)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPIECE_OFFSET UNITYSDK_OFFSET(0x9B261C0)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_1_OFFSET UNITYSDK_OFFSET(0x9B25F80)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_2_OFFSET UNITYSDK_OFFSET(0x9B301D0)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_OFFSET UNITYSDK_OFFSET(0x9B26120)
#define RPG_CLIENT_MATCHTHREEBOARD__SETSELECTIONSTATEPIECEHOVER_OFFSET UNITYSDK_OFFSET(0x9B2E220)
#define RPG_CLIENT_MATCHTHREEBOARD__SETSTATE_OFFSET UNITYSDK_OFFSET(0x9B26400)
#define RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECELOOPEFFECT_OFFSET UNITYSDK_OFFSET(0x9B27230)
#define RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECE_OFFSET UNITYSDK_OFFSET(0x9B26FC0)
#define RPG_CLIENT_MATCHTHREEBOARD__SPAWNTEMPPIECE_OFFSET UNITYSDK_OFFSET(0x9B2ECD0)
#define RPG_CLIENT_MATCHTHREEBOARD__SWAPPIECEPOS_OFFSET UNITYSDK_OFFSET(0x9B2A0C0)
#define RPG_CLIENT_MATCHTHREEBOARD__TRYNOTIFYRIGHTBUTTONDOWNONPROPUSE_OFFSET UNITYSDK_OFFSET(0x9B25560)
#define RPG_CLIENT_MATCHTHREEBOARD__TRYSWITCH_OFFSET UNITYSDK_OFFSET(0x9B25820)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard_TypeDefinitionIndex = 53521;

	class MatchThreeBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 BoardRow = 0x7; // 0x0
		// static const ::System::Int32 BoardCol = 0x7; // 0x0
		// static const ::System::String* BoardShakeAnimName; // 0x0
		// static const ::System::String* PiecePath; // 0x0
		// static const ::System::String* GridPath; // 0x0
		// static const ::System::String* SkillTriggerEffectPath; // 0x0
		// static const ::System::String* EnergyEffectPath; // 0x0
		// static const ::System::String* Ice2EffectPath; // 0x0
		// static const ::System::String* BombCreateEffectPath; // 0x0
		// static const ::System::String* PropBubbleEffectPath; // 0x0
		// static const ::System::String* PowerCounterPath; // 0x0
		// static const ::System::String* RefreshEffectPath; // 0x0
		// static const ::System::String* TutorialEffectPath; // 0x0
		// static const ::System::String* SelectionStatePath; // 0x0
		// static const ::System::String* StepTrailEffectPath; // 0x0
		// static const ::System::String* StepBonusTextPath; // 0x0
		// static const ::System::String* PropToPieceEffectPath; // 0x0
		// static const ::System::String* PropToBoardEffectPath; // 0x0
		// static const ::System::String* BoardToPropEffectPath; // 0x0
		// static const ::System::String* CopyPieceEffectPath; // 0x0
		// static const ::System::String* EnemySwitchTipEffectPath; // 0x0
		// static const ::System::String* MultiStyleBombFlashEffectPath; // 0x0
		::UnityEngine::Transform* SkillIcon; // 0x18
		::UnityEngine::Transform* SkillIconEnemy; // 0x20
		::UnityEngine::Transform* StepIcon; // 0x28
		::UnityEngine::Transform* StepIconEnemy; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* PropIcons; // 0x38
		::Il2CppArray<::UnityEngine::Transform*>* PropIconsEnemy; // 0x40
		::RPG::Client::InverseMask* InverseMask; // 0x48
		::UnityEngine::Animation* BoardShakeAnim; // 0x50
		::System::Single SwitchDragDistance; // 0x58
		::System::Single FlySpeed; // 0x5C
		::System::Single SwitchSpeed; // 0x60
		::System::Single Accelaration; // 0x64
		::System::Single InitalSpeed; // 0x68
		::System::Single MatchTime; // 0x6C
		::System::Single MergedBombMatchTime; // 0x70
		::System::Single AllScreenBombMatchTime; // 0x74
		::System::Single FireEggMatchTime; // 0x78
		::System::Single MultiStyleTrailFlyTime; // 0x7C
		::System::Single GemPackTrailFlyTime; // 0x80
		::System::Single BirdSkillTrailFlyTime; // 0x84
		::System::Single PowerCounterTime; // 0x88
		::System::Single EnemySwitchTipDelay; // 0x8C
		::System::Single ExtraStepChangeDelay; // 0x90
		::System::Single ExtraStepChangeTime; // 0x94
		::System::Single CopyPieceEffectLength; // 0x98
		::RPG::Client::MatchThreePiece* _SelectionPiece_k__BackingField; // 0xA0
		::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>* OnSwitch; // 0xA8
		::System::Action* OnBoardDestroy; // 0xB0
		::System::Action_1<::System::Boolean>* OnPause; // 0xB8
		::System::Boolean _IsPaused_k__BackingField; // 0xC0
		::UnityEngine::RectTransform* _EmptySkillIconRectTransform_k__BackingField; // 0xC8
		::UnityEngine::RectTransform* _EmptySkillIconRectTransformEnemy_k__BackingField; // 0xD0
		::UnityEngine::Vector2 _PieceDesignSize; // 0xD8
		::UnityEngine::Vector2Int DefaultSelectionPos; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _PieceID2MatchEffectPath; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _PieceTag2MatchEffectPath; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _PieceTag2LoopEffectPath; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _BombType2MatchEffectPath; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _PieceID2FlashEffectPath; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _BombType2BombEffectPath; // 0x110
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Match3::BombType, ::System::String*>* _BombType2CreateEffectPath; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _PieceID2GemPouchTrailEffectPath; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _SkillID2SkillTrailEffectPath; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::UnityEngine::Color, ::UnityEngine::Color>>* _StyleID2PowerCounterColor; // 0x130
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Match3::BombType, ::System::ValueTuple_2<::UnityEngine::Color, ::UnityEngine::Color>>* _BombType2PowerCounterColor; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _Combo2MatchAudioEvent; // 0x140
		::RPG::Client::MatchThreeBoardEnv* _BoardEnv; // 0x148
		::RPG::Client::MatchThreeIndex_1<::RPG::Client::MatchThreePiece*>* _Pieces; // 0x150
		::RPG::Client::MatchThreeIndex_1<::RPG::Client::MatchThreeGrid*>* _Grids; // 0x158
		::RPG::Client::MatchThreeIndex_1<::RPG::Client::MatchThreeLoopEffect*>* _LoopEffects; // 0x160
		::RPG::Client::MatchThreeTutorialEffect* _TutorialEffect; // 0x168
		::RPG::Client::MatchThreeSelectionState* _SelectionState; // 0x170
		::RPG::Client::MatchThreeBoard_GameState _State; // 0x178
		::Class_1_95E1BEF84A79D9EB_1* _PoolMgr; // 0x180
		::UnityEngine::Vector2 _PointerDownLocalPoint; // 0x188
		::UnityEngine::Vector2 _PieceSize; // 0x190
		::UnityEngine::Vector3 _EffectScale; // 0x198
		::UnityEngine::Vector2 _OriginPoint; // 0x1A4
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* _DragablePieces; // 0x1B0
		::UnityEngine::RectTransform* _RectTransform; // 0x1B8
		::UnityEngine::RectTransform* _SkillTriggerRectTransform; // 0x1C0
		::UnityEngine::RectTransform* _SkillTriggerRectTransformEnemy; // 0x1C8
		::RPG::Client::GridBasedMovement* _GridBasedMovement; // 0x1D0
		::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>* OnPropInput; // 0x1D8
		::System::Int32 _LastPropUseFrameCount; // 0x1E0
		::RPG::Client::MatchThreeGameProp* _CurrentActivatePropInfo; // 0x1E8
		::RPG::Client::LittleGame::Match3::OpponentRole _CurrentActionRole_k__BackingField; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitBoard(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INITBOARD_OFFSET))(this, controller);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONENABLE_OFFSET))(this);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONSCREENSIZECHANGED_OFFSET))(this, arg);
		}

		::System::Void _RefreshPiecePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__REFRESHPIECEPOSITION_OFFSET))(this);
		}

		::System::Void CreateBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_CREATEBOARD_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void _OnGridBasedMove(::RPG::Client::GridBasedEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridBasedEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONGRIDBASEDMOVE_OFFSET))(this, eventData);
		}

		::System::Void DoCreatePieceOnBoard(::UnityEngine::Vector2Int index, ::Class_1_1D65C84443DC695F* pieceData, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEONBOARD_OFFSET))(this, index, pieceData, onFinish);
		}

		::System::Void DoCreatePieceByDropPath(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* path, ::Class_1_1D65C84443DC695F* pieceData, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEBYDROPPATH_OFFSET))(this, path, pieceData, onFinish);
		}

		::System::Void DoCreateGridOnBoard(::UnityEngine::Vector2Int index, ::Class_1_AA0343CD5D895891* gridData, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_AA0343CD5D895891*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOCREATEGRIDONBOARD_OFFSET))(this, index, gridData, onFinish);
		}

		::System::Void DoRefreshGrid(::UnityEngine::Vector2Int index, ::Class_1_AA0343CD5D895891* gridData, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_AA0343CD5D895891*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHGRID_OFFSET))(this, index, gridData, onFinish);
		}

		::System::Void DoRefreshPiece(::UnityEngine::Vector2Int index, ::Class_1_1D65C84443DC695F* pieceData, ::System::Boolean updateView, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHPIECE_OFFSET))(this, index, pieceData, updateView, onFinish);
		}

		::System::Void DoPlayRefreshEffect(::UnityEngine::Vector2Int index, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYREFRESHEFFECT_OFFSET))(this, index, onFinish);
		}

		::System::Void DoDropPiecePath(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* path, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DODROPPIECEPATH_OFFSET))(this, path, onFinish);
		}

		::System::Void DoMatchPiece(::UnityEngine::Vector2Int index, ::System::Int32 comboAudio, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOMATCHPIECE_OFFSET))(this, index, comboAudio, onFinish);
		}

		::System::Void DoShakePiece(::UnityEngine::Vector2Int index, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSHAKEPIECE_OFFSET))(this, index, onFinish);
		}

		::System::Void DoStopShakePiece(::UnityEngine::Vector2Int pos, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSTOPSHAKEPIECE_OFFSET))(this, pos, onFinish);
		}

		::System::Void DoRemovePiece(::UnityEngine::Vector2Int index, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEPIECE_OFFSET))(this, index, onFinish);
		}

		::System::Void DoSwitchPiece(::UnityEngine::Vector2Int indexA, ::UnityEngine::Vector2Int indexB, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSWITCHPIECE_OFFSET))(this, indexA, indexB, onFinish);
		}

		::System::Void PlayEnemySwitchTipEffect(::UnityEngine::Vector2Int indexA, ::UnityEngine::Vector2Int indexB, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_PLAYENEMYSWITCHTIPEFFECT_OFFSET))(this, indexA, indexB, onFinish);
		}

		::System::Void DoRemoveGrid(::UnityEngine::Vector2Int index, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEGRID_OFFSET))(this, index, onFinish);
		}

		::System::Void DoFlyEffect(::UnityEngine::Vector2Int from, ::UnityEngine::Vector2Int to, ::System::UInt32 styleID, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECT_OFFSET))(this, from, to, styleID, onFinish);
		}

		::System::Void DoFlyEffectFromSkill(::UnityEngine::Vector2 to, ::System::UInt32 skillID, ::System::Action* onFinish, ::RPG::Client::LittleGame::Match3::OpponentRole role)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILL_OFFSET))(this, to, skillID, onFinish, role);
		}

		::System::Void DoFlyEffectFromSkillToProp(::System::UInt32 propIndex, ::System::UInt32 skillID, ::System::Action* onFinish, ::RPG::Client::LittleGame::Match3::OpponentRole role)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILLTOPROP_OFFSET))(this, propIndex, skillID, onFinish, role);
		}

		::System::Void DoFlyEffectFromPropToPiece(::System::UInt32 propIndex, ::UnityEngine::Vector2 to, ::System::Action* onFinish, ::RPG::Client::LittleGame::Match3::OpponentRole role, ::System::Boolean isFullScreen)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPROPTOPIECE_OFFSET))(this, propIndex, to, onFinish, role, isFullScreen);
		}

		::System::Void DoFlyEffectFromPieceToProp(::UnityEngine::Vector2 from, ::System::UInt32 propIndex, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPIECETOPROP_OFFSET))(this, from, propIndex, onFinish);
		}

		::System::Void DoFlyEffectToSkill(::UnityEngine::Vector2 from, ::System::UInt32 styleID, ::System::Boolean isMultiStyleBomb, ::System::Action* onFinish, ::RPG::Client::LittleGame::Match3::OpponentRole role)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::System::Boolean, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSKILL_OFFSET))(this, from, styleID, isMultiStyleBomb, onFinish, role);
		}

		::System::Void DoFlyEffectToStep(::UnityEngine::Vector2 from, ::System::Action* onFinish, ::RPG::Client::LittleGame::Match3::OpponentRole role)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSTEP_OFFSET))(this, from, onFinish, role);
		}

		::System::Void _RegisterSkillTrailEffect(::UnityEngine::Transform* effectRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__REGISTERSKILLTRAILEFFECT_OFFSET))(this, effectRoot);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetSkillTrailEffectBySkillID(::System::UInt32 skillID)
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETSKILLTRAILEFFECTBYSKILLID_OFFSET))(this, skillID);
		}

		::System::Void DoPlayCopyPieceEffect(::UnityEngine::Vector2Int from, ::UnityEngine::Vector2Int to, ::Class_1_1D65C84443DC695F* pieceData, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYCOPYPIECEEFFECT_OFFSET))(this, from, to, pieceData, onFinish);
		}

		::System::Void DoPlayBombEffect(::UnityEngine::Vector2Int index, ::RPG::GameCore::Match3::BombType type, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::BombType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYBOMBEFFECT_OFFSET))(this, index, type, onFinish);
		}

		::System::Void DoPlayAllScreenBombEffect(::UnityEngine::Vector2Int index0, ::UnityEngine::Vector2Int index1, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYALLSCREENBOMBEFFECT_OFFSET))(this, index0, index1, onFinish);
		}

		::System::Void DoPlayMultiStyleBombEffect(::UnityEngine::Vector2Int from, ::UnityEngine::Vector2Int to, ::Class_1_1D65C84443DC695F* pieceData, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYMULTISTYLEBOMBEFFECT_OFFSET))(this, from, to, pieceData, onFinish);
		}

		::System::Void DoPlayPropBubbleEffect(::UnityEngine::Vector2Int index, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPROPBUBBLEEFFECT_OFFSET))(this, index, onFinish);
		}

		::System::Void DoPlayPowerCounter(::UnityEngine::Vector2 index, ::System::UInt32 styleID, ::RPG::GameCore::Match3::BombType bombType, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPOWERCOUNTER_OFFSET))(this, index, styleID, bombType, value);
		}

		::System::Void DoEnergyFadeEffect(::UnityEngine::RectTransform* skillIconTransform, ::System::String* animName, ::System::String* skillIcon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOENERGYFADEEFFECT_OFFSET))(this, skillIconTransform, animName, skillIcon);
		}

		::System::Void DoSkillTriggerEffect(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSKILLTRIGGEREFFECT_OFFSET))(this, position);
		}

		::System::Void DoSetBoardEnvTag(::RPG::Client::MatchThreeBoardEnvTag envTag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSETBOARDENVTAG_OFFSET))(this, envTag);
		}

		::System::Void SetSelectionStateVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATEVISIBLE_OFFSET))(this, visible);
		}

		::System::Void OnInputStateChange(::System::Boolean canInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONINPUTSTATECHANGE_OFFSET))(this, canInput);
		}

		::System::Boolean IsSelectionStateSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ISSELECTIONSTATESELECTED_OFFSET))(this);
		}

		::System::Boolean IsPropUseOrPropSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ISPROPUSEORPROPSELECTION_OFFSET))(this);
		}

		::System::Void SetSelectionStateSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATESELECTED_OFFSET))(this, value);
		}

		::System::Void SetMotionTimeScale(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SETMOTIONTIMESCALE_OFFSET))(this, scale);
		}

		::UnityEngine::Vector2 Index2Position(::UnityEngine::Vector2Int index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_OFFSET))(this, index);
		}

		::UnityEngine::Vector2 Index2Position_1(::UnityEngine::Vector2 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_1_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 Index2WorldPosition(::UnityEngine::Vector2Int index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 Index2WorldPosition_1(::UnityEngine::Vector2 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_1_OFFSET))(this, index);
		}

		::UnityEngine::Vector2 GetPieceSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GETPIECESIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEffectScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GETEFFECTSCALE_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetLocalPoint(::UnityEngine::Vector2 touchPoint)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETLOCALPOINT_OFFSET))(this, touchPoint);
		}

		::RPG::Client::MatchThreePiece* _GetPieceByLocalPoint(::UnityEngine::Vector2 localPoint)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYLOCALPOINT_OFFSET))(this, localPoint);
		}

		::RPG::Client::MatchThreePiece* _SpawnPiece(::UnityEngine::Vector2Int index, ::Class_1_1D65C84443DC695F* pieceData)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECE_OFFSET))(this, index, pieceData);
		}

		::RPG::Client::MatchThreePiece* _SpawnTempPiece(::UnityEngine::Vector2Int index, ::Class_1_1D65C84443DC695F* pieceData)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SPAWNTEMPPIECE_OFFSET))(this, index, pieceData);
		}

		::RPG::Client::MatchThreeLoopEffect* _SpawnPieceLoopEffect(::UnityEngine::Vector2Int index, ::RPG::GameCore::Match3::PieceTag pieceTag)
		{
			return ((::RPG::Client::MatchThreeLoopEffect*(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECELOOPEFFECT_OFFSET))(this, index, pieceTag);
		}

		::System::Void _MovePiecePath(::RPG::Client::MatchThreePiece* piece, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* path, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__MOVEPIECEPATH_OFFSET))(this, piece, path, onFinish);
		}

		::System::Void _PlayMatchedEffect(::UnityEngine::Vector2Int index, ::System::UInt32 styleID, ::RPG::GameCore::Match3::BombType type, ::RPG::GameCore::Match3::PieceTag pieceTag, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHEDEFFECT_OFFSET))(this, index, styleID, type, pieceTag, onFinish);
		}

		::System::Void _PlayMatchAudio(::System::Int32 combo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHAUDIO_OFFSET))(this, combo);
		}

		::System::Void _PlayGridBreakEffect(::UnityEngine::Vector2Int index, ::RPG::GameCore::Match3::GridTag gridTag, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::GridTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYGRIDBREAKEFFECT_OFFSET))(this, index, gridTag, onFinish);
		}

		::System::Void _PlayBombMatchedEffect(::UnityEngine::Vector2Int index, ::RPG::GameCore::Match3::BombType type, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::BombType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBMATCHEDEFFECT_OFFSET))(this, index, type, onFinish);
		}

		::System::Void _PlayBoardShakeAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYBOARDSHAKEANIM_OFFSET))(this);
		}

		::System::Void _PlayBombCreateEffect(::UnityEngine::Vector2Int index, ::RPG::GameCore::Match3::BombType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBCREATEEFFECT_OFFSET))(this, index, type);
		}

		::System::Void _RemoveLoopEffect(::UnityEngine::Vector2Int index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__REMOVELOOPEFFECT_OFFSET))(this, index);
		}

		::UnityEngine::Vector2Int _LocalPoint2Index(::UnityEngine::Vector2 localPoint)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__LOCALPOINT2INDEX_OFFSET))(this, localPoint);
		}

		::System::Void _AssertEmptyPiece(::UnityEngine::Vector2Int index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ASSERTEMPTYPIECE_OFFSET))(this, index);
		}

		::System::Void _AssetEmptyGrid(::UnityEngine::Vector2Int index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ASSETEMPTYGRID_OFFSET))(this, index);
		}

		::RPG::Client::MatchThreePiece* _GetPieceByIndex(::UnityEngine::Vector2Int index)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::MatchThreeGrid* _GetGridByIndex(::UnityEngine::Vector2Int index)
		{
			return ((::RPG::Client::MatchThreeGrid*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::MatchThreeLoopEffect* _GetLoopEffectByIndex(::UnityEngine::Vector2Int index)
		{
			return ((::RPG::Client::MatchThreeLoopEffect*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETLOOPEFFECTBYINDEX_OFFSET))(this, index);
		}

		::System::Void _ChangePiecePosTo(::RPG::Client::MatchThreePiece* piece, ::UnityEngine::Vector2Int index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CHANGEPIECEPOSTO_OFFSET))(this, piece, index);
		}

		::System::Void _SwapPiecePos(::RPG::Client::MatchThreePiece* pieceA, ::RPG::Client::MatchThreePiece* pieceB)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SWAPPIECEPOS_OFFSET))(this, pieceA, pieceB);
		}

		::System::Void _SetState(::RPG::Client::MatchThreeBoard_GameState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard_GameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SETSTATE_OFFSET))(this, state);
		}

		::System::Void _CreateSelectionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CREATESELECTIONSTATE_OFFSET))(this);
		}

		::System::Void _SelectPiece(::RPG::Client::MatchThreePiece* piece)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPIECE_OFFSET))(this, piece);
		}

		::System::Void _ResetSelectionPieceState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTIONPIECESTATE_OFFSET))(this);
		}

		::System::Void _ResetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTSTATE_OFFSET))(this);
		}

		::System::Boolean _IsNeighbors(::UnityEngine::Vector2Int indexA, ::UnityEngine::Vector2Int indexB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ISNEIGHBORS_OFFSET))(this, indexA, indexB);
		}

		::System::Boolean _IsPieceSelectable(::RPG::Client::MatchThreePiece* piece)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ISPIECESELECTABLE_OFFSET))(this, piece);
		}

		::System::Boolean _CanMoveSelectionState(::UnityEngine::Vector2Int dir)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CANMOVESELECTIONSTATE_OFFSET))(this, dir);
		}

		::System::Void _MoveSelectionState(::UnityEngine::Vector2Int dir)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__MOVESELECTIONSTATE_OFFSET))(this, dir);
		}

		::System::Void _SetSelectionStatePieceHover(::System::Boolean hover)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SETSELECTIONSTATEPIECEHOVER_OFFSET))(this, hover);
		}

		::System::Void _OnDragTutorial(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONDRAGTUTORIAL_OFFSET))(this, arg);
		}

		::System::Void _BeginDragTutorial(::Class_1_DC01FF708B3C70CD* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DC01FF708B3C70CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__BEGINDRAGTUTORIAL_OFFSET))(this, config);
		}

		::System::Void _EndDragTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ENDDRAGTUTORIAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int _DetermineDir(::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__DETERMINEDIR_OFFSET))(this, vector);
		}

		::System::Boolean _TrySwitch(::UnityEngine::Vector2Int indexA, ::UnityEngine::Vector2Int indexB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__TRYSWITCH_OFFSET))(this, indexA, indexB);
		}

		::System::Boolean _CanSwitch(::UnityEngine::Vector2Int indexA, ::UnityEngine::Vector2Int indexB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CANSWITCH_OFFSET))(this, indexA, indexB);
		}

		::System::Boolean _IsDragable(::UnityEngine::Vector2Int index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ISDRAGABLE_OFFSET))(this, index);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetStepTrailEffect()
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETSTEPTRAILEFFECT_OFFSET))(this);
		}

		::RPG::Client::MatchThreeEnergyFadeEffect* _GetEnergyFadeEffect()
		{
			return ((::RPG::Client::MatchThreeEnergyFadeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETENERGYFADEEFFECT_OFFSET))(this);
		}

		::RPG::Client::MatchThreeSkillTriggerEffect* _GetSkillTriggerEffect()
		{
			return ((::RPG::Client::MatchThreeSkillTriggerEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETSKILLTRIGGEREFFECT_OFFSET))(this);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetGemPouchFlyEffect(::System::UInt32 styleID)
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETGEMPOUCHFLYEFFECT_OFFSET))(this, styleID);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetMatchEffect(::System::UInt32 styleID, ::RPG::GameCore::Match3::BombType type, ::RPG::GameCore::Match3::PieceTag pieceTag)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETMATCHEFFECT_OFFSET))(this, styleID, type, pieceTag);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetGridBreakEffect(::RPG::GameCore::Match3::GridTag gridTag)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::RPG::GameCore::Match3::GridTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBREAKEFFECT_OFFSET))(this, gridTag);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetBombCreateEffect(::RPG::GameCore::Match3::BombType type)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETBOMBCREATEEFFECT_OFFSET))(this, type);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetFlashEffect(::System::UInt32 styleID)
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETFLASHEFFECT_OFFSET))(this, styleID);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetMultiStyleBombFlashEffect()
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETMULTISTYLEBOMBFLASHEFFECT_OFFSET))(this);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetBombEffect(::RPG::GameCore::Match3::BombType type)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETBOMBEFFECT_OFFSET))(this, type);
		}

		::RPG::Client::MatchThreePowerCounter* _GetPowerCounter()
		{
			return ((::RPG::Client::MatchThreePowerCounter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTER_OFFSET))(this);
		}

		::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig _GetPowerCounterSizeConfig(::RPG::GameCore::Match3::BombType bombType, ::System::UInt32 powerValue)
		{
			return ((::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig(*)(::PVOID, ::RPG::GameCore::Match3::BombType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTERSIZECONFIG_OFFSET))(this, bombType, powerValue);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetRefreshEffect()
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETREFRESHEFFECT_OFFSET))(this);
		}

		::System::Void DoPlayStepBonusText(::UnityEngine::Vector2 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYSTEPBONUSTEXT_OFFSET))(this, index);
		}

		::System::Void DoPause(::System::Boolean isPaused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPAUSE_OFFSET))(this, isPaused);
		}

		::RPG::Client::MatchThreePiece* get_SelectionPiece()
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_SELECTIONPIECE_OFFSET))(this);
		}

		::System::Void set_SelectionPiece(::RPG::Client::MatchThreePiece* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_SELECTIONPIECE_OFFSET))(this, value);
		}

		::System::Void add_OnSwitch(::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONSWITCH_OFFSET))(this, value);
		}

		::System::Void remove_OnSwitch(::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONSWITCH_OFFSET))(this, value);
		}

		::System::Void add_OnBoardDestroy(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONBOARDDESTROY_OFFSET))(this, value);
		}

		::System::Void remove_OnBoardDestroy(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONBOARDDESTROY_OFFSET))(this, value);
		}

		::System::Void add_OnPause(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPAUSE_OFFSET))(this, value);
		}

		::System::Void remove_OnPause(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPAUSE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_IsPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_ISPAUSED_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_EmptySkillIconRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_EmptySkillIconRectTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_EmptySkillIconRectTransformEnemy()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET))(this);
		}

		::System::Void set_EmptySkillIconRectTransformEnemy(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET))(this, value);
		}

		::System::Void _InitPropPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__INITPROPPANEL_OFFSET))(this);
		}

		::System::Void _DestroyPropPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__DESTROYPROPPANEL_OFFSET))(this);
		}

		::System::Void _OnOneOnOneDataChange(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONONEONONEDATACHANGE_OFFSET))(this, param);
		}

		::System::Void _OnPropInputConsumed(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTCONSUMED_OFFSET))(this, param);
		}

		::System::Void _OnPropInputDiscarded(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTDISCARDED_OFFSET))(this, param);
		}

		::System::Void _OnChessBoardInputStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONCHESSBOARDINPUTSTATECHANGE_OFFSET))(this);
		}

		::System::Void _ClearPropInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CLEARPROPINPUT_OFFSET))(this);
		}

		::System::Boolean _OnPropButtonOK(::RPG::Client::LittleGame::Match3::OpponentRole role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONOK_OFFSET))(this, role);
		}

		::System::Boolean DoPropCancel(::RPG::Client::LittleGame::Match3::OpponentRole role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPROPCANCEL_OFFSET))(this, role);
		}

		::System::Boolean _OnPropButtonCancel(::RPG::Client::LittleGame::Match3::OpponentRole role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONCANCEL_OFFSET))(this, role);
		}

		::System::Boolean _TryNotifyRightButtonDownOnPropUse(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__TRYNOTIFYRIGHTBUTTONDOWNONPROPUSE_OFFSET))(this, eventData);
		}

		::System::Boolean DoPropUse(::RPG::Client::LittleGame::Match3::OpponentRole role, ::RPG::Client::MatchThreeGameProp* propInfo, ::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole, ::RPG::Client::MatchThreeGameProp*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPROPUSE_OFFSET))(this, role, propInfo, index);
		}

		::System::Boolean _OnPropUse(::RPG::Client::LittleGame::Match3::OpponentRole role, ::RPG::Client::MatchThreeGameProp* propInfo, ::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole, ::RPG::Client::MatchThreeGameProp*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPUSE_OFFSET))(this, role, propInfo, index);
		}

		::System::Void _ClearActiveProp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CLEARACTIVEPROP_OFFSET))(this);
		}

		::System::Void _SelectPropTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_OFFSET))(this);
		}

		::System::Void _SelectPropTarget_1(::UnityEngine::Vector2Int index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_1_OFFSET))(this, index);
		}

		::System::Void _SelectPropTarget_2(::UnityEngine::Vector2Int index0, ::UnityEngine::Vector2Int index1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_2_OFFSET))(this, index0, index1);
		}

		::System::Void add_OnPropInput(::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPROPINPUT_OFFSET))(this, value);
		}

		::System::Void remove_OnPropInput(::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPROPINPUT_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::Match3::OpponentRole get_CurrentActionRole()
		{
			return ((::RPG::Client::LittleGame::Match3::OpponentRole(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_CURRENTACTIONROLE_OFFSET))(this);
		}

		::System::Void set_CurrentActionRole(::RPG::Client::LittleGame::Match3::OpponentRole value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_CURRENTACTIONROLE_OFFSET))(this, value);
		}

		::System::Boolean get__CanInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET__CANINPUT_OFFSET))(this);
		}
	};
}
