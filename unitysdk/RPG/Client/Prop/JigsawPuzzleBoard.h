#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_004034A1FAAF468A;
class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class JigsawCommonConfig; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::Prop { class JigsawPuzzleItem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_BLOCKCOORD2LOCALPOS_OFFSET UNITYSDK_OFFSET(0xAE38520)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_CLEARALLMOVEALBEITEMS_OFFSET UNITYSDK_OFFSET(0xAE38720)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_CREATEMOVEABLEITEMFROMUI_OFFSET UNITYSDK_OFFSET(0xAE37520)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE32870)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_FRAMEPOS2LOCALPOS_OFFSET UNITYSDK_OFFSET(0xAE3B9A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETACTIVEITEM_OFFSET UNITYSDK_OFFSET(0xAE374D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETCLAMPEDPOINT_OFFSET UNITYSDK_OFFSET(0xAE35F50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETINBOXITEMSCOUNT_OFFSET UNITYSDK_OFFSET(0xAE38A60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETINBOXITEMS_OFFSET UNITYSDK_OFFSET(0xAE387C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE2E8C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISCURSORACTIVE_OFFSET UNITYSDK_OFFSET(0xAE31AC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAE32820)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISVERTICALMODE_OFFSET UNITYSDK_OFFSET(0xAE37480)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE2FE80)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOADJIGSAWCONFIG_OFFSET UNITYSDK_OFFSET(0xAE2EEA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2BLOCKCOORD_OFFSET UNITYSDK_OFFSET(0xAE38450)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2FRAMEPOS_OFFSET UNITYSDK_OFFSET(0xAE3B910)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xAE33BD0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xAE33FB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xAE34610)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xAE34010)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xAE34C60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xAE34850)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xAE358D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xAE33810)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xAE36220)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xAE34F60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xAE306F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONQUIT_OFFSET UNITYSDK_OFFSET(0xAE31F50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xAE35550)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xAE35430)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REFRESHBOARD_OFFSET UNITYSDK_OFFSET(0xAE367F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xAE36AD0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REGENBOARD_OFFSET UNITYSDK_OFFSET(0xAE367B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RELEASELASTACTIVEITEM_OFFSET UNITYSDK_OFFSET(0xAE35860)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xAE2EF90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ROTATEONCE_OFFSET UNITYSDK_OFFSET(0xAE38770)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETACTIVEITEM_OFFSET UNITYSDK_OFFSET(0xAE34270)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETANIMATORSENABLE_OFFSET UNITYSDK_OFFSET(0xAE2F1D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORACTIVE_OFFSET UNITYSDK_OFFSET(0xAE335B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORVISIBLE_OFFSET UNITYSDK_OFFSET(0xAE366D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xAE33100)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINNERUIRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAE38BA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINTERACTON_OFFSET UNITYSDK_OFFSET(0xAE322A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETUIRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAE38B50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SHOWDEFAULTCURSOR_OFFSET UNITYSDK_OFFSET(0xAE33320)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SHOWJOYSTICKCURSOR_OFFSET UNITYSDK_OFFSET(0xAE385D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE2F370)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_TRYAUTOABSORBITEM_OFFSET UNITYSDK_OFFSET(0xAE35B60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_TRYHIGHLIGHTCURSOR_OFFSET UNITYSDK_OFFSET(0xAE31B30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE3BC00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CHECKISGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xAE39C20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CONFIGBOARDITEM_OFFSET UNITYSDK_OFFSET(0xAE38E20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAE3BA30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__FOLLOWATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xAE30440)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETBOARDITEM_OFFSET UNITYSDK_OFFSET(0xAE39170)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETMOVEABLEITEM_OFFSET UNITYSDK_OFFSET(0xAE39500)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETSUCCESSITEM_OFFSET UNITYSDK_OFFSET(0xAE39260)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HASFULLNEIGHBOURBOARDITEM_OFFSET UNITYSDK_OFFSET(0xAE398A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0xAE3ACE0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xAE2FBF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTROATETIP_OFFSET UNITYSDK_OFFSET(0xAE38390)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITBACKGROUNDHINT_OFFSET UNITYSDK_OFFSET(0xAE36E20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITDISSOLVEPARAMS_OFFSET UNITYSDK_OFFSET(0xAE3A390)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITFRAMERECTS_OFFSET UNITYSDK_OFFSET(0xAE2F780)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISFULLBOARDITEM_OFFSET UNITYSDK_OFFSET(0xAE397A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINAUTOABSORBAREA_OFFSET UNITYSDK_OFFSET(0xAE31570)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINBOARDAREA_OFFSET UNITYSDK_OFFSET(0xAE31A30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISMOVEABLEITEMALREADYCREATED_OFFSET UNITYSDK_OFFSET(0xAE37CE0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISSHAPEMATCH_OFFSET UNITYSDK_OFFSET(0xAE39B20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISTARGETFULL_OFFSET UNITYSDK_OFFSET(0xAE39830)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__JIGSAWPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0xAE2FD40)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__JIGSAWPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0xAE324E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADBOARDEFFECT_OFFSET UNITYSDK_OFFSET(0xAE2F860)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADCURSORITEM_OFFSET UNITYSDK_OFFSET(0xAE36420)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADSUCCESSEFFECT_OFFSET UNITYSDK_OFFSET(0xAE39E70)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2SCREENPOS_OFFSET UNITYSDK_OFFSET(0xAE34340)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2WORLDPOS_OFFSET UNITYSDK_OFFSET(0xAE3B760)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELLOAD_OFFSET UNITYSDK_OFFSET(0xAE38CC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELUNLOAD_OFFSET UNITYSDK_OFFSET(0xAE38D70)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONCONTROLLERPRESSX_B__14_0_OFFSET UNITYSDK_OFFSET(0xAE3BCB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0xAE32D10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xAE39D50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0xAE33140)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONSETFINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE33080)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__OVERRIDEARTMODELPOSEANIMATION_OFFSET UNITYSDK_OFFSET(0xAE36FB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYDISSOLVECURVEANIMATION_OFFSET UNITYSDK_OFFSET(0xAE3B220)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYOUTLINEFADEANIAMTION_OFFSET UNITYSDK_OFFSET(0xAE32F10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__REFRESHMOVEITEMSRENDERORDER_OFFSET UNITYSDK_OFFSET(0xAE3A1A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RESETARTMODELPOSEANIMATION_OFFSET UNITYSDK_OFFSET(0xAE32BB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNALLITEMSTOUIBOX_OFFSET UNITYSDK_OFFSET(0xAE34D20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNCURSORTOUIBOX_OFFSET UNITYSDK_OFFSET(0xAE347F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNITEMTOUIBOX_OFFSET UNITYSDK_OFFSET(0xAE31410)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDDISSOLVERATE_OFFSET UNITYSDK_OFFSET(0xAE3AEB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDOUTLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xAE3B410)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETDISSOLVEPROGRESS_OFFSET UNITYSDK_OFFSET(0xAE30190)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETFRAMEDISSOLVERATE_OFFSET UNITYSDK_OFFSET(0xAE3B090)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET UNITYSDK_OFFSET(0xAE35370)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SHOWJOYSTICKCURSOR_OFFSET UNITYSDK_OFFSET(0xAE34480)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRIGGEROUTLINEFADEPERFORM_OFFSET UNITYSDK_OFFSET(0xAE3B5F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYAUTOABSORBPENDINGITEMS_OFFSET UNITYSDK_OFFSET(0xAE38BF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYGETBOARDLOCALPOS_OFFSET UNITYSDK_OFFSET(0xAE37EB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYUPDATECURLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xAE33EF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__WORLDPOS2SCREENPOS_OFFSET UNITYSDK_OFFSET(0xAE3B830)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE3BEA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE3BD00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAE3BE00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE3BD70)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xAE3BEB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xAE3BEC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xAE3BF70)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xAE3BF10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xAE3BFF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xAE3BFB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xAE3C1B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xAE3C290)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xAE3C370)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xAE3C030)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xAE3BDF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xAE3C100)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xAE3C090)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE3BD10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___ONEVENT_B__7_0_OFFSET UNITYSDK_OFFSET(0xAE3BC30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard_TypeDefinitionIndex = 72146;

	class JigsawPuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		static ::RPG::Client::JigsawCommonConfig** StaticGet_JigsawConfig()
		{
			return (::RPG::Client::JigsawCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xB660);
		}
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xB668);
		}
		static ::System::String** StaticGet_JIGSAW_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xB670);
		}
		::System::Int32 PuzzleWidth; // 0xB0
		::System::Int32 PuzzleHeight; // 0xB4
		::System::Single BlockSize; // 0xB8
		::System::Single BlockPadding; // 0xBC
		::UnityEngine::Vector3 InitBlockPosition; // 0xC0
		::System::Single AutoAbsorbRange; // 0xCC
		::System::String* PoseOverrideClipName; // 0xD0
		::UnityEngine::Transform* BoardRoot; // 0xD8
		::UnityEngine::Transform* MoveablesRoot; // 0xE0
		::UnityEngine::GameObject* ItemPrefab; // 0xE8
		::UnityEngine::GameObject* MoveableItemPrefab; // 0xF0
		::UnityEngine::Transform* BackGroundHintRoot; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>* PuzzleCollectItems; // 0x100
		::UnityEngine::Texture2D* JigsawMainTex; // 0x108
		::UnityEngine::Texture2D* JigsawBackgroundTex; // 0x110
		::System::Single DOFFocusDistance; // 0x118
		::System::Boolean IsDialogOpen; // 0x11C
		::System::Single DebugDissolveProgress; // 0x120
		::System::Boolean IsDebugDissolveOn; // 0x124
		::System::Single AdapterScale; // 0x128
		::System::UInt32 _GroupID; // 0x12C
		::System::UInt32 _InstacneID; // 0x130
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x138
		::RPG::GameCore::PropComponent* _PropCompt; // 0x140
		::RPG::GameCore::GameEntity* _GroupEntityRef; // 0x148
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x150
		::System::Boolean _IsReportStart; // 0x158
		::System::Boolean _IsGameStart; // 0x159
		::System::Boolean _IsGameFinish; // 0x15A
		::UnityEngine::RuntimeAnimatorController* _OriginRuntimeController; // 0x160
		::UnityEngine::RectTransform* _UIRectTransform; // 0x168
		::UnityEngine::RectTransform* _UIRectTransformInner; // 0x170
		::UnityEngine::Rect _BoardRect; // 0x178
		::UnityEngine::Rect _ScreenSpaceBoardRect; // 0x188
		::UnityEngine::Rect _BoardSafeRect; // 0x198
		::UnityEngine::Vector2 _FrameSize; // 0x1A8
		::RPG::Client::Prop::JigsawPuzzleItem* _ActiveItem; // 0x1B0
		::RPG::Client::Prop::JigsawPuzzleItem* _CurHoverItem; // 0x1B8
		::RPG::Client::VirtualCursor* _Cursor; // 0x1C0
		::UnityEngine::Vector3 _CursorLocalPosition; // 0x1C8
		::System::Boolean _IsCursorActive; // 0x1D4
		::System::Boolean _IsActiveItemInBoard; // 0x1D5
		::System::Boolean _IsDraggingItem; // 0x1D6
		::System::Single _CursorScrollRatio; // 0x1D8
		::System::String* _AttachPoint; // 0x1E0
		::System::Boolean _FollowAttach; // 0x1E8
		::Class_1_D27BF54F25500E5F* _DissolveRateTransition; // 0x1F0
		::Class_1_D27BF54F25500E5F* _OutlineFadeTransition; // 0x1F8
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x200
		::Class_1_004034A1FAAF468A* _BoardHighlightEffect; // 0x208
		::Class_1_004034A1FAAF468A* _BoardSuccessEffect; // 0x210
		::UnityEngine::Animator* _BoardHighlightEffAnimator; // 0x218
		::System::UInt32 _SerializeNumber; // 0x220
		::System::Single _ContinueTime; // 0x224
		::System::UInt32 _RotateCount; // 0x228
		::System::UInt32 _ResetCount; // 0x22C
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawPuzzleItem*>* _AllItems; // 0x230
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawPuzzleItem*>* AllBoardItems; // 0x238
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawPuzzleItem*>* AllTargetItems; // 0x240
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawPuzzleItem*>* _AllMoveableItems; // 0x248
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawPuzzleItem*>* _AllSuccessItems; // 0x250
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawPuzzleItem*>* _DelayDeleteItems; // 0x258
		::System::Single _DelayDeleteTimer; // 0x260
		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawPuzzleItem*>* _TmpItems; // 0x268

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::TaskContext* context, ::RPG::GameCore::PropInitPuzzle* puzzleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_INITPUZZLE_OFFSET))(this, owner, context, puzzleConfig);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void LateUpdatePuzzle(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void OnPuzzleInteractUpdate(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONQUIT_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnEvent(::Class_0_16E4307DCC419505_382* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _OnSetFinishPuzzle(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONSETFINISHPUZZLE_OFFSET))(this, obj);
		}

		::System::Void _OnNotifySwitchToJoyStick(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, obj);
		}

		::System::Void OnControllerJoystickInput(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, x, y);
		}

		::System::Void OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void OnControllerPressX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSX_OFFSET))(this);
		}

		::System::Void OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, item, isJoyStickSelect);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEM_OFFSET))(this, item);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEMUP_OFFSET))(this, item);
		}

		::System::Void OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEM_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void SetInteractOn(::System::Boolean isOn, ::System::Boolean isShowCursor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINTERACTON_OFFSET))(this, isOn, isShowCursor);
		}

		::System::Void SetGameFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETGAMEFINISH_OFFSET))(this);
		}

		::System::Void ReGenBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REGENBOARD_OFFSET))(this);
		}

		::System::Void RefreshBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REFRESHBOARD_OFFSET))(this);
		}

		::System::Void RefreshItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REFRESHITEMS_OFFSET))(this);
		}

		::System::Void SetAnimatorsEnable(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETANIMATORSENABLE_OFFSET))(this, isEnable);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RESET_OFFSET))(this);
		}

		::System::Boolean IsVerticalMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISVERTICALMODE_OFFSET))(this);
		}

		::System::Void SetActiveItem(::RPG::Client::Prop::JigsawPuzzleItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETACTIVEITEM_OFFSET))(this, item);
		}

		::System::Void ReleaseLastActiveItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RELEASELASTACTIVEITEM_OFFSET))(this);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* GetActiveItem()
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETACTIVEITEM_OFFSET))(this);
		}

		::System::Boolean CreateMoveableItemFromUI(::RPG::Client::Prop::JigsawItemData* itemData, ::UnityEngine::Vector3 wPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_CREATEMOVEABLEITEMFROMUI_OFFSET))(this, itemData, wPosition);
		}

		::System::Boolean TryAutoAbsorbItem(::RPG::Client::Prop::JigsawPuzzleItem* item, ::System::Boolean tryAbsorbPending)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_TRYAUTOABSORBITEM_OFFSET))(this, item, tryAbsorbPending);
		}

		::System::Void SetCursorActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORACTIVE_OFFSET))(this, isActive);
		}

		::System::Boolean IsCursorActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISCURSORACTIVE_OFFSET))(this);
		}

		::System::Void SetCursorVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORVISIBLE_OFFSET))(this, visible);
		}

		::System::Void ShowJoystickCursor(::UnityEngine::Vector3 localPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SHOWJOYSTICKCURSOR_OFFSET))(this, localPosition);
		}

		::System::Void ShowDefaultCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SHOWDEFAULTCURSOR_OFFSET))(this);
		}

		::System::Void TryHighlightCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_TRYHIGHLIGHTCURSOR_OFFSET))(this);
		}

		::System::Void ClearAllMovealbeItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_CLEARALLMOVEALBEITEMS_OFFSET))(this);
		}

		::System::Void RotateOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ROTATEONCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>* GetInBoxItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETINBOXITEMS_OFFSET))(this);
		}

		::System::Int32 GetInBoxItemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETINBOXITEMSCOUNT_OFFSET))(this);
		}

		::System::Void SetUIRectTransform(::UnityEngine::RectTransform* uiRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETUIRECTTRANSFORM_OFFSET))(this, uiRect);
		}

		::System::Void SetInnerUIRectTransform(::UnityEngine::RectTransform* uiRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINNERUIRECTTRANSFORM_OFFSET))(this, uiRect);
		}

		::System::Void _TryAutoAbsorbPendingItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYAUTOABSORBPENDINGITEMS_OFFSET))(this);
		}

		::System::Boolean _TryGetBoardLocalPos(::UnityEngine::Vector3 screenPos, ::UnityEngine::Vector3& localPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYGETBOARDLOCALPOS_OFFSET))(this, screenPos, localPos);
		}

		::System::Void _OnArtModelLoad(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELLOAD_OFFSET))(this, param);
		}

		::System::Void _OnArtModelUnload(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELUNLOAD_OFFSET))(this, param);
		}

		::System::Void _OverrideArtModelPoseAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__OVERRIDEARTMODELPOSEANIMATION_OFFSET))(this);
		}

		::System::Void _ResetArtModelPoseAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RESETARTMODELPOSEANIMATION_OFFSET))(this);
		}

		::System::Void _InitBackGroundHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITBACKGROUNDHINT_OFFSET))(this);
		}

		::System::Void _FollowAttachPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__FOLLOWATTACHPOINT_OFFSET))(this);
		}

		::System::Void _InitFrameRects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITFRAMERECTS_OFFSET))(this);
		}

		::System::Void _ConfigBoardItem(::System::Int32 index, ::System::Int32 x, ::System::Int32 y, ::System::Boolean isBoundary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CONFIGBOARDITEM_OFFSET))(this, index, x, y, isBoundary);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* _GetBoardItem(::System::Int32 x, ::System::Int32 y)
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETBOARDITEM_OFFSET))(this, x, y);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* _GetSuccessItem(::System::Int32 x, ::System::Int32 y)
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETSUCCESSITEM_OFFSET))(this, x, y);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* _GetMoveableItem(::System::Int32 x, ::System::Int32 y)
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETMOVEABLEITEM_OFFSET))(this, x, y);
		}

		::System::Boolean _IsMoveableItemAlreadyCreated(::RPG::Client::Prop::JigsawItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISMOVEABLEITEMALREADYCREATED_OFFSET))(this, itemData);
		}

		::System::Boolean _IsFullBoardItem(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISFULLBOARDITEM_OFFSET))(this, x, y);
		}

		::System::Boolean _IsTargetFull(::RPG::Client::Prop::JigsawPuzzleItem* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISTARGETFULL_OFFSET))(this, target);
		}

		::System::Boolean _HasFullNeighbourBoardItem(::UnityEngine::Vector2Int coord)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HASFULLNEIGHBOURBOARDITEM_OFFSET))(this, coord);
		}

		::System::Boolean _IsShapeMatch(::RPG::Client::Prop::JigsawPuzzleItem* board, ::RPG::Client::Prop::JigsawPuzzleItem* move)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISSHAPEMATCH_OFFSET))(this, board, move);
		}

		::System::Boolean _IsInAutoAbsorbArea(::RPG::Client::Prop::JigsawPuzzleItem* item, ::System::Single absorbRange)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINAUTOABSORBAREA_OFFSET))(this, item, absorbRange);
		}

		::System::Boolean _IsInBoardArea(::UnityEngine::Vector2 localPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINBOARDAREA_OFFSET))(this, localPosition);
		}

		::System::Void _ReturnItemToUIBox(::RPG::Client::Prop::JigsawPuzzleItem* item, ::System::Boolean uiCreateItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNITEMTOUIBOX_OFFSET))(this, item, uiCreateItem);
		}

		::System::Void _ReturnCursorToUIBox(::RPG::Client::Prop::JigsawItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNCURSORTOUIBOX_OFFSET))(this, data);
		}

		::System::Void _ReturnAllItemsToUIBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNALLITEMSTOUIBOX_OFFSET))(this);
		}

		::System::Boolean _CheckIsGameFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CHECKISGAMEFINISH_OFFSET))(this);
		}

		::System::Void _OnGameFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONGAMEFINISH_OFFSET))(this);
		}

		::System::Void _HighlightPuzzleBoard(::System::Boolean highlight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTPUZZLEBOARD_OFFSET))(this, highlight);
		}

		::System::Void _HighlightRoateTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTROATETIP_OFFSET))(this);
		}

		::System::Void _SetMoveableItemOrder2Top(::RPG::Client::Prop::JigsawPuzzleItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET))(this, item);
		}

		::System::Void _RefreshMoveItemsRenderOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__REFRESHMOVEITEMSRENDERORDER_OFFSET))(this);
		}

		::System::Void _LoadSuccessEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADSUCCESSEFFECT_OFFSET))(this);
		}

		::System::Void _LoadBoardEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADBOARDEFFECT_OFFSET))(this);
		}

		::System::Boolean _LoadCursorItem(::System::Boolean isShowCursor)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADCURSORITEM_OFFSET))(this, isShowCursor);
		}

		::System::Void _ShowJoystickCursor(::UnityEngine::Vector2 screenPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SHOWJOYSTICKCURSOR_OFFSET))(this, screenPosition);
		}

		::System::Void _InitDissolveParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITDISSOLVEPARAMS_OFFSET))(this);
		}

		::System::Void _HideOutline(::System::Boolean isHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIDEOUTLINE_OFFSET))(this, isHide);
		}

		::System::Void _SetBoardDissolveRate(::System::Single dissolveRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDDISSOLVERATE_OFFSET))(this, dissolveRate);
		}

		::System::Void _SetFrameDissolveRate(::System::Single dissolveRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETFRAMEDISSOLVERATE_OFFSET))(this, dissolveRate);
		}

		::System::Void _SetDissolveProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETDISSOLVEPROGRESS_OFFSET))(this, progress);
		}

		::System::Void _PlayDissolveCurveAnimation(::System::Single duration, ::System::Action* OnAnimDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYDISSOLVECURVEANIMATION_OFFSET))(this, duration, OnAnimDone);
		}

		::System::Void _SetBoardOutlineOffset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDOUTLINEOFFSET_OFFSET))(this, offset);
		}

		::System::Void _TriggerOutlineFadePerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRIGGEROUTLINEFADEPERFORM_OFFSET))(this);
		}

		::System::Void _PlayOutlineFadeAniamtion(::System::Single duration, ::System::Action* OnAnimDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYOUTLINEFADEANIAMTION_OFFSET))(this, duration, OnAnimDone);
		}

		::UnityEngine::Vector3 _LocalPos2WorldPos(::UnityEngine::Vector3 localPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2WORLDPOS_OFFSET))(this, localPos);
		}

		::UnityEngine::Vector2 _WorldPos2ScreenPos(::UnityEngine::Vector3 worldPos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__WORLDPOS2SCREENPOS_OFFSET))(this, worldPos);
		}

		::UnityEngine::Vector2 _LocalPos2ScreenPos(::UnityEngine::Vector3 localPosition)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2SCREENPOS_OFFSET))(this, localPosition);
		}

		::System::Boolean _TryUpdateCurLocalPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYUPDATECURLOCALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 BlockCoord2LocalPos(::UnityEngine::Vector2Int coord)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_BLOCKCOORD2LOCALPOS_OFFSET))(this, coord);
		}

		::UnityEngine::Vector2Int LocalPos2BlockCoord(::UnityEngine::Vector3 pos)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2BLOCKCOORD_OFFSET))(this, pos);
		}

		::UnityEngine::Vector2 LocalPos2FramePos(::UnityEngine::Vector2 localPos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2FRAMEPOS_OFFSET))(this, localPos);
		}

		::UnityEngine::Vector2 FramePos2LocalPos(::UnityEngine::Vector2 framePos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_FRAMEPOS2LOCALPOS_OFFSET))(this, framePos);
		}

		::UnityEngine::Vector2 GetClampedPoint(::UnityEngine::Rect rect, ::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETCLAMPEDPOINT_OFFSET))(this, rect, point);
		}

		::System::Void _JigsawPuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__JIGSAWPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _JigsawPuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__JIGSAWPUZZLEENDDATAREPORT_OFFSET))(this);
		}

		static ::System::Void LoadJigsawConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOADJIGSAWCONFIG_OFFSET))();
		}

		::System::Void __OnEvent_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___ONEVENT_B__7_0_OFFSET))(this);
		}

		::System::Void _OnControllerPressX_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONCONTROLLERPRESSX_B__14_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPuzzleInteractUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickInput(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSX_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET))(this, P0, P1, P2);
		}
	};
}
