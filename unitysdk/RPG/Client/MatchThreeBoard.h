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
class Class_1_84F4F471A7FDCB9A;
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

#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONBOARDDESTROY_OFFSET UNITYSDK_OFFSET(0x1A894520)
#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1A894600)
#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPROPINPUT_OFFSET UNITYSDK_OFFSET(0x1A894EB0)
#define RPG_CLIENT_MATCHTHREEBOARD_ADD_ONSWITCH_OFFSET UNITYSDK_OFFSET(0x1A894440)
#define RPG_CLIENT_MATCHTHREEBOARD_CREATEBOARD_OFFSET UNITYSDK_OFFSET(0x1A88A7A0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOCREATEGRIDONBOARD_OFFSET UNITYSDK_OFFSET(0x1A88D1B0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEBYDROPPATH_OFFSET UNITYSDK_OFFSET(0x1A88CE40)
#define RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEONBOARD_OFFSET UNITYSDK_OFFSET(0x1A88C6A0)
#define RPG_CLIENT_MATCHTHREEBOARD_DODROPPIECEPATH_OFFSET UNITYSDK_OFFSET(0x1A88DB40)
#define RPG_CLIENT_MATCHTHREEBOARD_DOENERGYFADEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A891DB0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPIECETOPROP_OFFSET UNITYSDK_OFFSET(0x1A890300)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPROPTOPIECE_OFFSET UNITYSDK_OFFSET(0x1A88FFF0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILLTOPROP_OFFSET UNITYSDK_OFFSET(0x1A88FAB0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILL_OFFSET UNITYSDK_OFFSET(0x1A88F5F0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSKILL_OFFSET UNITYSDK_OFFSET(0x1A890640)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSTEP_OFFSET UNITYSDK_OFFSET(0x1A890A70)
#define RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88F120)
#define RPG_CLIENT_MATCHTHREEBOARD_DOMATCHPIECE_OFFSET UNITYSDK_OFFSET(0x1A88DC40)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x1A8943B0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYALLSCREENBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x1A891440)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8910D0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYCOPYPIECEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A890D30)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYMULTISTYLEBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x1A891680)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPOWERCOUNTER_OFFSET UNITYSDK_OFFSET(0x1A891990)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPROPBUBBLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A891820)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYREFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88D960)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPLAYSTEPBONUSTEXT_OFFSET UNITYSDK_OFFSET(0x1A894000)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPROPCANCEL_OFFSET UNITYSDK_OFFSET(0x1A894C60)
#define RPG_CLIENT_MATCHTHREEBOARD_DOPROPUSE_OFFSET UNITYSDK_OFFSET(0x1A8948E0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHGRID_OFFSET UNITYSDK_OFFSET(0x1A88D360)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHPIECE_OFFSET UNITYSDK_OFFSET(0x1A88D790)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEGRID_OFFSET UNITYSDK_OFFSET(0x1A88F010)
#define RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEPIECE_OFFSET UNITYSDK_OFFSET(0x1A88E4B0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSETBOARDENVTAG_OFFSET UNITYSDK_OFFSET(0x1A8922B0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSHAKEPIECE_OFFSET UNITYSDK_OFFSET(0x1A88E290)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSKILLTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x1A892090)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSTOPSHAKEPIECE_OFFSET UNITYSDK_OFFSET(0x1A88E3E0)
#define RPG_CLIENT_MATCHTHREEBOARD_DOSWITCHPIECE_OFFSET UNITYSDK_OFFSET(0x1A88E620)
#define RPG_CLIENT_MATCHTHREEBOARD_GETEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x1A892EC0)
#define RPG_CLIENT_MATCHTHREEBOARD_GETPIECESIZE_OFFSET UNITYSDK_OFFSET(0x1A892E70)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x1A894F90)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET UNITYSDK_OFFSET(0x1A894720)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A894700)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1A8946E0)
#define RPG_CLIENT_MATCHTHREEBOARD_GET_SELECTIONPIECE_OFFSET UNITYSDK_OFFSET(0x1A894420)
#define RPG_CLIENT_MATCHTHREEBOARD_GET__CANINPUT_OFFSET UNITYSDK_OFFSET(0x1A894A20)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_1_OFFSET UNITYSDK_OFFSET(0x1A892BC0)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_OFFSET UNITYSDK_OFFSET(0x1A892AC0)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1A892CF0)
#define RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A892C60)
#define RPG_CLIENT_MATCHTHREEBOARD_INITBOARD_OFFSET UNITYSDK_OFFSET(0x1A8882C0)
#define RPG_CLIENT_MATCHTHREEBOARD_ISPROPUSEORPROPSELECTION_OFFSET UNITYSDK_OFFSET(0x1A892840)
#define RPG_CLIENT_MATCHTHREEBOARD_ISSELECTIONSTATESELECTED_OFFSET UNITYSDK_OFFSET(0x1A8927C0)
#define RPG_CLIENT_MATCHTHREEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A887F30)
#define RPG_CLIENT_MATCHTHREEBOARD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A88A7E0)
#define RPG_CLIENT_MATCHTHREEBOARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A889FC0)
#define RPG_CLIENT_MATCHTHREEBOARD_ONINPUTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A892720)
#define RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A88B040)
#define RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A88B9E0)
#define RPG_CLIENT_MATCHTHREEBOARD_PLAYENEMYSWITCHTIPEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88E9A0)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONBOARDDESTROY_OFFSET UNITYSDK_OFFSET(0x1A894590)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1A894670)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPROPINPUT_OFFSET UNITYSDK_OFFSET(0x1A894F20)
#define RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONSWITCH_OFFSET UNITYSDK_OFFSET(0x1A8944B0)
#define RPG_CLIENT_MATCHTHREEBOARD_SETMOTIONTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1A892990)
#define RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATESELECTED_OFFSET UNITYSDK_OFFSET(0x1A88C310)
#define RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A8923F0)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x1A894FA0)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET UNITYSDK_OFFSET(0x1A894730)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A894710)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1A8946F0)
#define RPG_CLIENT_MATCHTHREEBOARD_SET_SELECTIONPIECE_OFFSET UNITYSDK_OFFSET(0x1A894430)
#define RPG_CLIENT_MATCHTHREEBOARD__ASSERTEMPTYPIECE_OFFSET UNITYSDK_OFFSET(0x1A892F30)
#define RPG_CLIENT_MATCHTHREEBOARD__ASSETEMPTYGRID_OFFSET UNITYSDK_OFFSET(0x1A88D310)
#define RPG_CLIENT_MATCHTHREEBOARD__BEGINDRAGTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1A8937A0)
#define RPG_CLIENT_MATCHTHREEBOARD__CANMOVESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A88C110)
#define RPG_CLIENT_MATCHTHREEBOARD__CANSWITCH_OFFSET UNITYSDK_OFFSET(0x1A893BD0)
#define RPG_CLIENT_MATCHTHREEBOARD__CHANGEPIECEPOSTO_OFFSET UNITYSDK_OFFSET(0x1A893050)
#define RPG_CLIENT_MATCHTHREEBOARD__CLEARACTIVEPROP_OFFSET UNITYSDK_OFFSET(0x1A894AB0)
#define RPG_CLIENT_MATCHTHREEBOARD__CLEARPROPINPUT_OFFSET UNITYSDK_OFFSET(0x1A8947C0)
#define RPG_CLIENT_MATCHTHREEBOARD__CREATESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A889CD0)
#define RPG_CLIENT_MATCHTHREEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A894FB0)
#define RPG_CLIENT_MATCHTHREEBOARD__DESTROYPROPPANEL_OFFSET UNITYSDK_OFFSET(0x1A8880F0)
#define RPG_CLIENT_MATCHTHREEBOARD__DETERMINEDIR_OFFSET UNITYSDK_OFFSET(0x1A88AD70)
#define RPG_CLIENT_MATCHTHREEBOARD__ENDDRAGTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1A893B40)
#define RPG_CLIENT_MATCHTHREEBOARD__GETBOMBCREATEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A893490)
#define RPG_CLIENT_MATCHTHREEBOARD__GETBOMBEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8915A0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETENERGYFADEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A891ED0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETFLASHEFFECT_OFFSET UNITYSDK_OFFSET(0x1A890900)
#define RPG_CLIENT_MATCHTHREEBOARD__GETGEMPOUCHFLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88F310)
#define RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBREAKEFFECT_OFFSET UNITYSDK_OFFSET(0x1A893330)
#define RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1A88D590)
#define RPG_CLIENT_MATCHTHREEBOARD__GETLOCALPOINT_OFFSET UNITYSDK_OFFSET(0x1A88AC20)
#define RPG_CLIENT_MATCHTHREEBOARD__GETLOOPEFFECTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1A8935B0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETMATCHEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8931B0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETMULTISTYLEBOMBFLASHEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8909E0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYINDEX_OFFSET UNITYSDK_OFFSET(0x1A88A6F0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYLOCALPOINT_OFFSET UNITYSDK_OFFSET(0x1A88B510)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTERSIZECONFIG_OFFSET UNITYSDK_OFFSET(0x1A891C30)
#define RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTER_OFFSET UNITYSDK_OFFSET(0x1A891D20)
#define RPG_CLIENT_MATCHTHREEBOARD__GETREFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88DAB0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETSKILLTRAILEFFECTBYSKILLID_OFFSET UNITYSDK_OFFSET(0x1A88F8C0)
#define RPG_CLIENT_MATCHTHREEBOARD__GETSKILLTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x1A892220)
#define RPG_CLIENT_MATCHTHREEBOARD__GETSTEPTRAILEFFECT_OFFSET UNITYSDK_OFFSET(0x1A890CA0)
#define RPG_CLIENT_MATCHTHREEBOARD__INITPROPPANEL_OFFSET UNITYSDK_OFFSET(0x1A889DE0)
#define RPG_CLIENT_MATCHTHREEBOARD__ISDRAGABLE_OFFSET UNITYSDK_OFFSET(0x1A892890)
#define RPG_CLIENT_MATCHTHREEBOARD__ISNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1A893660)
#define RPG_CLIENT_MATCHTHREEBOARD__ISPIECESELECTABLE_OFFSET UNITYSDK_OFFSET(0x1A88CBA0)
#define RPG_CLIENT_MATCHTHREEBOARD__LOCALPOINT2INDEX_OFFSET UNITYSDK_OFFSET(0x1A88B5F0)
#define RPG_CLIENT_MATCHTHREEBOARD__MOVEPIECEPATH_OFFSET UNITYSDK_OFFSET(0x1A88CFB0)
#define RPG_CLIENT_MATCHTHREEBOARD__MOVESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A88C1D0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONCHESSBOARDINPUTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A894950)
#define RPG_CLIENT_MATCHTHREEBOARD__ONDRAGTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1A8936E0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONGRIDBASEDMOVE_OFFSET UNITYSDK_OFFSET(0x1A88BEF0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONONEONONEDATACHANGE_OFFSET UNITYSDK_OFFSET(0x1A894740)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONCANCEL_OFFSET UNITYSDK_OFFSET(0x1A894CB0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONOK_OFFSET UNITYSDK_OFFSET(0x1A894B00)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTCONSUMED_OFFSET UNITYSDK_OFFSET(0x1A894890)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTDISCARDED_OFFSET UNITYSDK_OFFSET(0x1A88BBA0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONPROPUSE_OFFSET UNITYSDK_OFFSET(0x1A894DA0)
#define RPG_CLIENT_MATCHTHREEBOARD__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1A88A6A0)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYBOARDSHAKEANIM_OFFSET UNITYSDK_OFFSET(0x1A8933F0)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBCREATEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88CA70)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBMATCHEDEFFECT_OFFSET UNITYSDK_OFFSET(0x1A891140)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYGRIDBREAKEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88D640)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHAUDIO_OFFSET UNITYSDK_OFFSET(0x1A88DF70)
#define RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHEDEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88E110)
#define RPG_CLIENT_MATCHTHREEBOARD__REFRESHPIECEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A88A010)
#define RPG_CLIENT_MATCHTHREEBOARD__REGISTERSKILLTRAILEFFECT_OFFSET UNITYSDK_OFFSET(0x1A889A60)
#define RPG_CLIENT_MATCHTHREEBOARD__REMOVELOOPEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88DEA0)
#define RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTIONPIECESTATE_OFFSET UNITYSDK_OFFSET(0x1A88BE90)
#define RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1A88AF70)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPIECE_OFFSET UNITYSDK_OFFSET(0x1A88B900)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_1_OFFSET UNITYSDK_OFFSET(0x1A88B690)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_2_OFFSET UNITYSDK_OFFSET(0x1A893DE0)
#define RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_OFFSET UNITYSDK_OFFSET(0x1A88B860)
#define RPG_CLIENT_MATCHTHREEBOARD__SETSELECTIONSTATEPIECEHOVER_OFFSET UNITYSDK_OFFSET(0x1A892660)
#define RPG_CLIENT_MATCHTHREEBOARD__SETSTATE_OFFSET UNITYSDK_OFFSET(0x1A88BB50)
#define RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECELOOPEFFECT_OFFSET UNITYSDK_OFFSET(0x1A88C930)
#define RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECE_OFFSET UNITYSDK_OFFSET(0x1A88C7F0)
#define RPG_CLIENT_MATCHTHREEBOARD__SPAWNTEMPPIECE_OFFSET UNITYSDK_OFFSET(0x1A892F80)
#define RPG_CLIENT_MATCHTHREEBOARD__SWAPPIECEPOS_OFFSET UNITYSDK_OFFSET(0x1A88E7A0)
#define RPG_CLIENT_MATCHTHREEBOARD__TRYNOTIFYRIGHTBUTTONDOWNONPROPUSE_OFFSET UNITYSDK_OFFSET(0x1A88ABA0)
#define RPG_CLIENT_MATCHTHREEBOARD__TRYSWITCH_OFFSET UNITYSDK_OFFSET(0x1A88AE60)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard_TypeDefinitionIndex = 62961;

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
		::Class_1_84F4F471A7FDCB9A* _PoolMgr; // 0x180
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

		::System::Void InitBoard(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INITBOARD_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONENABLE_OFFSET))(this);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONSCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void _RefreshPiecePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__REFRESHPIECEPOSITION_OFFSET))(this);
		}

		::System::Void CreateBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_CREATEBOARD_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void _OnGridBasedMove(::RPG::Client::GridBasedEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridBasedEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONGRIDBASEDMOVE_OFFSET))(this, a1);
		}

		::System::Void DoCreatePieceOnBoard(::UnityEngine::Vector2Int a1, ::Class_1_1D65C84443DC695F* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEONBOARD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoCreatePieceByDropPath(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::Class_1_1D65C84443DC695F* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOCREATEPIECEBYDROPPATH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoCreateGridOnBoard(::UnityEngine::Vector2Int a1, ::Class_1_AA0343CD5D895891* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_AA0343CD5D895891*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOCREATEGRIDONBOARD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoRefreshGrid(::UnityEngine::Vector2Int a1, ::Class_1_AA0343CD5D895891* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_AA0343CD5D895891*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHGRID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoRefreshPiece(::UnityEngine::Vector2Int a1, ::Class_1_1D65C84443DC695F* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREFRESHPIECE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoPlayRefreshEffect(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYREFRESHEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void DoDropPiecePath(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DODROPPIECEPATH_OFFSET))(this, a1, a2);
		}

		::System::Void DoMatchPiece(::UnityEngine::Vector2Int a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOMATCHPIECE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoShakePiece(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSHAKEPIECE_OFFSET))(this, a1, a2);
		}

		::System::Void DoStopShakePiece(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSTOPSHAKEPIECE_OFFSET))(this, a1, a2);
		}

		::System::Void DoRemovePiece(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEPIECE_OFFSET))(this, a1, a2);
		}

		::System::Void DoSwitchPiece(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSWITCHPIECE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayEnemySwitchTipEffect(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_PLAYENEMYSWITCHTIPEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoRemoveGrid(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOREMOVEGRID_OFFSET))(this, a1, a2);
		}

		::System::Void DoFlyEffect(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::UInt32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoFlyEffectFromSkill(::UnityEngine::Vector2 a1, ::System::UInt32 a2, ::System::Action* a3, ::RPG::Client::LittleGame::Match3::OpponentRole a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoFlyEffectFromSkillToProp(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3, ::RPG::Client::LittleGame::Match3::OpponentRole a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMSKILLTOPROP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoFlyEffectFromPropToPiece(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Action* a3, ::RPG::Client::LittleGame::Match3::OpponentRole a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPROPTOPIECE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DoFlyEffectFromPieceToProp(::UnityEngine::Vector2 a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTFROMPIECETOPROP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoFlyEffectToSkill(::UnityEngine::Vector2 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Action* a4, ::RPG::Client::LittleGame::Match3::OpponentRole a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::System::Boolean, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSKILL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DoFlyEffectToStep(::UnityEngine::Vector2 a1, ::System::Action* a2, ::RPG::Client::LittleGame::Match3::OpponentRole a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Action*, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOFLYEFFECTTOSTEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RegisterSkillTrailEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__REGISTERSKILLTRAILEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetSkillTrailEffectBySkillID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETSKILLTRAILEFFECTBYSKILLID_OFFSET))(this, a1);
		}

		::System::Void DoPlayCopyPieceEffect(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::Class_1_1D65C84443DC695F* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYCOPYPIECEEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoPlayBombEffect(::UnityEngine::Vector2Int a1, ::RPG::GameCore::Match3::BombType a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::BombType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYBOMBEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoPlayAllScreenBombEffect(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYALLSCREENBOMBEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoPlayMultiStyleBombEffect(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::Class_1_1D65C84443DC695F* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYMULTISTYLEBOMBEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoPlayPropBubbleEffect(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPROPBUBBLEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void DoPlayPowerCounter(::UnityEngine::Vector2 a1, ::System::UInt32 a2, ::RPG::GameCore::Match3::BombType a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYPOWERCOUNTER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoEnergyFadeEffect(::UnityEngine::RectTransform* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOENERGYFADEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoSkillTriggerEffect(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSKILLTRIGGEREFFECT_OFFSET))(this, a1);
		}

		::System::Void DoSetBoardEnvTag(::RPG::Client::MatchThreeBoardEnvTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOSETBOARDENVTAG_OFFSET))(this, a1);
		}

		::System::Void SetSelectionStateVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATEVISIBLE_OFFSET))(this, a1);
		}

		::System::Void OnInputStateChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ONINPUTSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Boolean IsSelectionStateSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ISSELECTIONSTATESELECTED_OFFSET))(this);
		}

		::System::Boolean IsPropUseOrPropSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ISPROPUSEORPROPSELECTION_OFFSET))(this);
		}

		::System::Void SetSelectionStateSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SETSELECTIONSTATESELECTED_OFFSET))(this, a1);
		}

		::System::Void SetMotionTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SETMOTIONTIMESCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Index2Position(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Index2Position_1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2POSITION_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Index2WorldPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Index2WorldPosition_1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_INDEX2WORLDPOSITION_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetPieceSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GETPIECESIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEffectScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GETEFFECTSCALE_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetLocalPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETLOCALPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreePiece* _GetPieceByLocalPoint(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYLOCALPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreePiece* _SpawnPiece(::UnityEngine::Vector2Int a1, ::Class_1_1D65C84443DC695F* a2)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MatchThreePiece* _SpawnTempPiece(::UnityEngine::Vector2Int a1, ::Class_1_1D65C84443DC695F* a2)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2Int, ::Class_1_1D65C84443DC695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SPAWNTEMPPIECE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MatchThreeLoopEffect* _SpawnPieceLoopEffect(::UnityEngine::Vector2Int a1, ::RPG::GameCore::Match3::PieceTag a2)
		{
			return ((::RPG::Client::MatchThreeLoopEffect*(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SPAWNPIECELOOPEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _MovePiecePath(::RPG::Client::MatchThreePiece* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__MOVEPIECEPATH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayMatchedEffect(::UnityEngine::Vector2Int a1, ::System::UInt32 a2, ::RPG::GameCore::Match3::BombType a3, ::RPG::GameCore::Match3::PieceTag a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHEDEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _PlayMatchAudio(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYMATCHAUDIO_OFFSET))(this, a1);
		}

		::System::Void _PlayGridBreakEffect(::UnityEngine::Vector2Int a1, ::RPG::GameCore::Match3::GridTag a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::GridTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYGRIDBREAKEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayBombMatchedEffect(::UnityEngine::Vector2Int a1, ::RPG::GameCore::Match3::BombType a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::BombType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBMATCHEDEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayBoardShakeAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYBOARDSHAKEANIM_OFFSET))(this);
		}

		::System::Void _PlayBombCreateEffect(::UnityEngine::Vector2Int a1, ::RPG::GameCore::Match3::BombType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__PLAYBOMBCREATEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveLoopEffect(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__REMOVELOOPEFFECT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int _LocalPoint2Index(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__LOCALPOINT2INDEX_OFFSET))(this, a1);
		}

		::System::Void _AssertEmptyPiece(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ASSERTEMPTYPIECE_OFFSET))(this, a1);
		}

		::System::Void _AssetEmptyGrid(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ASSETEMPTYGRID_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreePiece* _GetPieceByIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPIECEBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeGrid* _GetGridByIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::MatchThreeGrid*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeLoopEffect* _GetLoopEffectByIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::MatchThreeLoopEffect*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETLOOPEFFECTBYINDEX_OFFSET))(this, a1);
		}

		::System::Void _ChangePiecePosTo(::RPG::Client::MatchThreePiece* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CHANGEPIECEPOSTO_OFFSET))(this, a1, a2);
		}

		::System::Void _SwapPiecePos(::RPG::Client::MatchThreePiece* a1, ::RPG::Client::MatchThreePiece* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SWAPPIECEPOS_OFFSET))(this, a1, a2);
		}

		::System::Void _SetState(::RPG::Client::MatchThreeBoard_GameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard_GameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SETSTATE_OFFSET))(this, a1);
		}

		::System::Void _CreateSelectionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CREATESELECTIONSTATE_OFFSET))(this);
		}

		::System::Void _SelectPiece(::RPG::Client::MatchThreePiece* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPIECE_OFFSET))(this, a1);
		}

		::System::Void _ResetSelectionPieceState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTIONPIECESTATE_OFFSET))(this);
		}

		::System::Void _ResetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__RESETSELECTSTATE_OFFSET))(this);
		}

		::System::Boolean _IsNeighbors(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ISNEIGHBORS_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsPieceSelectable(::RPG::Client::MatchThreePiece* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ISPIECESELECTABLE_OFFSET))(this, a1);
		}

		::System::Boolean _CanMoveSelectionState(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CANMOVESELECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _MoveSelectionState(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__MOVESELECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _SetSelectionStatePieceHover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SETSELECTIONSTATEPIECEHOVER_OFFSET))(this, a1);
		}

		::System::Void _OnDragTutorial(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONDRAGTUTORIAL_OFFSET))(this, a1);
		}

		::System::Void _BeginDragTutorial(::Class_1_DC01FF708B3C70CD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DC01FF708B3C70CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__BEGINDRAGTUTORIAL_OFFSET))(this, a1);
		}

		::System::Void _EndDragTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ENDDRAGTUTORIAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int _DetermineDir(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__DETERMINEDIR_OFFSET))(this, a1);
		}

		::System::Boolean _TrySwitch(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__TRYSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CanSwitch(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CANSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsDragable(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ISDRAGABLE_OFFSET))(this, a1);
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

		::RPG::Client::MatchThreeFlashEffect* _GetGemPouchFlyEffect(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETGEMPOUCHFLYEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetMatchEffect(::System::UInt32 a1, ::RPG::GameCore::Match3::BombType a2, ::RPG::GameCore::Match3::PieceTag a3)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETMATCHEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetGridBreakEffect(::RPG::GameCore::Match3::GridTag a1)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::RPG::GameCore::Match3::GridTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETGRIDBREAKEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetBombCreateEffect(::RPG::GameCore::Match3::BombType a1)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETBOMBCREATEEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetFlashEffect(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETFLASHEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeFlashEffect* _GetMultiStyleBombFlashEffect()
		{
			return ((::RPG::Client::MatchThreeFlashEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETMULTISTYLEBOMBFLASHEFFECT_OFFSET))(this);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetBombEffect(::RPG::GameCore::Match3::BombType a1)
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETBOMBEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreePowerCounter* _GetPowerCounter()
		{
			return ((::RPG::Client::MatchThreePowerCounter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTER_OFFSET))(this);
		}

		::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig _GetPowerCounterSizeConfig(::RPG::GameCore::Match3::BombType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig(*)(::PVOID, ::RPG::GameCore::Match3::BombType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETPOWERCOUNTERSIZECONFIG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MatchThreeTimedEffect* _GetRefreshEffect()
		{
			return ((::RPG::Client::MatchThreeTimedEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__GETREFRESHEFFECT_OFFSET))(this);
		}

		::System::Void DoPlayStepBonusText(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPLAYSTEPBONUSTEXT_OFFSET))(this, a1);
		}

		::System::Void DoPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPAUSE_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreePiece* get_SelectionPiece()
		{
			return ((::RPG::Client::MatchThreePiece*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_SELECTIONPIECE_OFFSET))(this);
		}

		::System::Void set_SelectionPiece(::RPG::Client::MatchThreePiece* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePiece*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_SELECTIONPIECE_OFFSET))(this, a1);
		}

		::System::Void add_OnSwitch(::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONSWITCH_OFFSET))(this, a1);
		}

		::System::Void remove_OnSwitch(::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONSWITCH_OFFSET))(this, a1);
		}

		::System::Void add_OnBoardDestroy(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONBOARDDESTROY_OFFSET))(this, a1);
		}

		::System::Void remove_OnBoardDestroy(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONBOARDDESTROY_OFFSET))(this, a1);
		}

		::System::Void add_OnPause(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPAUSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPause(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPAUSE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_IsPaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_ISPAUSED_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_EmptySkillIconRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_EmptySkillIconRectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_EmptySkillIconRectTransformEnemy()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET))(this);
		}

		::System::Void set_EmptySkillIconRectTransformEnemy(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_EMPTYSKILLICONRECTTRANSFORMENEMY_OFFSET))(this, a1);
		}

		::System::Void _InitPropPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__INITPROPPANEL_OFFSET))(this);
		}

		::System::Void _DestroyPropPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__DESTROYPROPPANEL_OFFSET))(this);
		}

		::System::Void _OnOneOnOneDataChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONONEONONEDATACHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnPropInputConsumed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTCONSUMED_OFFSET))(this, a1);
		}

		::System::Void _OnPropInputDiscarded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPINPUTDISCARDED_OFFSET))(this, a1);
		}

		::System::Void _OnChessBoardInputStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONCHESSBOARDINPUTSTATECHANGE_OFFSET))(this);
		}

		::System::Void _ClearPropInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CLEARPROPINPUT_OFFSET))(this);
		}

		::System::Boolean _OnPropButtonOK(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONOK_OFFSET))(this, a1);
		}

		::System::Boolean DoPropCancel(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPROPCANCEL_OFFSET))(this, a1);
		}

		::System::Boolean _OnPropButtonCancel(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPBUTTONCANCEL_OFFSET))(this, a1);
		}

		::System::Boolean _TryNotifyRightButtonDownOnPropUse(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__TRYNOTIFYRIGHTBUTTONDOWNONPROPUSE_OFFSET))(this, a1);
		}

		::System::Boolean DoPropUse(::RPG::Client::LittleGame::Match3::OpponentRole a1, ::RPG::Client::MatchThreeGameProp* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole, ::RPG::Client::MatchThreeGameProp*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_DOPROPUSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _OnPropUse(::RPG::Client::LittleGame::Match3::OpponentRole a1, ::RPG::Client::MatchThreeGameProp* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole, ::RPG::Client::MatchThreeGameProp*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__ONPROPUSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ClearActiveProp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__CLEARACTIVEPROP_OFFSET))(this);
		}

		::System::Void _SelectPropTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_OFFSET))(this);
		}

		::System::Void _SelectPropTarget_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_1_OFFSET))(this, a1);
		}

		::System::Void _SelectPropTarget_2(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD__SELECTPROPTARGET_2_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnPropInput(::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_ADD_ONPROPINPUT_OFFSET))(this, a1);
		}

		::System::Void remove_OnPropInput(::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_REMOVE_ONPROPINPUT_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Match3::OpponentRole get_CurrentActionRole()
		{
			return ((::RPG::Client::LittleGame::Match3::OpponentRole(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET_CURRENTACTIONROLE_OFFSET))(this);
		}

		::System::Void set_CurrentActionRole(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_SET_CURRENTACTIONROLE_OFFSET))(this, a1);
		}

		::System::Boolean get__CanInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_GET__CANINPUT_OFFSET))(this);
		}
	};
}
