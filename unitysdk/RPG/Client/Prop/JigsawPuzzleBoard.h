#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
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

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_BLOCKCOORD2LOCALPOS_OFFSET UNITYSDK_OFFSET(0xC57F590)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_CLEARALLMOVEALBEITEMS_OFFSET UNITYSDK_OFFSET(0xC57F790)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_CREATEMOVEABLEITEMFROMUI_OFFSET UNITYSDK_OFFSET(0xC57E490)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5794D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_FRAMEPOS2LOCALPOS_OFFSET UNITYSDK_OFFSET(0xC582A90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETACTIVEITEM_OFFSET UNITYSDK_OFFSET(0xC57E440)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETCLAMPEDPOINT_OFFSET UNITYSDK_OFFSET(0xC57CE40)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETINBOXITEMSCOUNT_OFFSET UNITYSDK_OFFSET(0xC57FB10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETINBOXITEMS_OFFSET UNITYSDK_OFFSET(0xC57F830)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC575460)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISCURSORACTIVE_OFFSET UNITYSDK_OFFSET(0xC5786C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC579480)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISVERTICALMODE_OFFSET UNITYSDK_OFFSET(0xC57E3F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC576A30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOADJIGSAWCONFIG_OFFSET UNITYSDK_OFFSET(0xC575A50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2BLOCKCOORD_OFFSET UNITYSDK_OFFSET(0xC57F4C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2FRAMEPOS_OFFSET UNITYSDK_OFFSET(0xC582A00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC57A9B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xC57AD90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xC57B410)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xC57ADF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xC57BA60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xC57B640)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xC57C780)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xC57A550)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xC57D130)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC57BD80)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xC5772E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONQUIT_OFFSET UNITYSDK_OFFSET(0xC578B30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC57C3F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC57C2C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REFRESHBOARD_OFFSET UNITYSDK_OFFSET(0xC57D710)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xC57D9D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_REGENBOARD_OFFSET UNITYSDK_OFFSET(0xC57D6D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RELEASELASTACTIVEITEM_OFFSET UNITYSDK_OFFSET(0xC57C710)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xC575B40)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ROTATEONCE_OFFSET UNITYSDK_OFFSET(0xC57F7E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETACTIVEITEM_OFFSET UNITYSDK_OFFSET(0xC57B070)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETANIMATORSENABLE_OFFSET UNITYSDK_OFFSET(0xC575D90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORACTIVE_OFFSET UNITYSDK_OFFSET(0xC57A2F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORVISIBLE_OFFSET UNITYSDK_OFFSET(0xC57D5F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xC579DF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINNERUIRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC57FC50)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINTERACTON_OFFSET UNITYSDK_OFFSET(0xC578EE0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETUIRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC57FC00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SHOWDEFAULTCURSOR_OFFSET UNITYSDK_OFFSET(0xC57A010)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SHOWJOYSTICKCURSOR_OFFSET UNITYSDK_OFFSET(0xC57F640)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC575F40)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_TRYAUTOABSORBITEM_OFFSET UNITYSDK_OFFSET(0xC57CA30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_TRYHIGHLIGHTCURSOR_OFFSET UNITYSDK_OFFSET(0xC578730)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC582CF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CHECKISGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xC580CB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CONFIGBOARDITEM_OFFSET UNITYSDK_OFFSET(0xC57FEC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC582B20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__FOLLOWATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xC577030)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETBOARDITEM_OFFSET UNITYSDK_OFFSET(0xC580200)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETMOVEABLEITEM_OFFSET UNITYSDK_OFFSET(0xC580590)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETSUCCESSITEM_OFFSET UNITYSDK_OFFSET(0xC5802F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HASFULLNEIGHBOURBOARDITEM_OFFSET UNITYSDK_OFFSET(0xC580930)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0xC581D90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xC5767A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTROATETIP_OFFSET UNITYSDK_OFFSET(0xC57F400)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITBACKGROUNDHINT_OFFSET UNITYSDK_OFFSET(0xC57DD00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITDISSOLVEPARAMS_OFFSET UNITYSDK_OFFSET(0xC581420)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITFRAMERECTS_OFFSET UNITYSDK_OFFSET(0xC576330)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISFULLBOARDITEM_OFFSET UNITYSDK_OFFSET(0xC580830)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINAUTOABSORBAREA_OFFSET UNITYSDK_OFFSET(0xC578170)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINBOARDAREA_OFFSET UNITYSDK_OFFSET(0xC578630)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISMOVEABLEITEMALREADYCREATED_OFFSET UNITYSDK_OFFSET(0xC57ED20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISSHAPEMATCH_OFFSET UNITYSDK_OFFSET(0xC580BB0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISTARGETFULL_OFFSET UNITYSDK_OFFSET(0xC5808C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__JIGSAWPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0xC5768F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__JIGSAWPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0xC579140)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADBOARDEFFECT_OFFSET UNITYSDK_OFFSET(0xC576410)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADCURSORITEM_OFFSET UNITYSDK_OFFSET(0xC57D340)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADSUCCESSEFFECT_OFFSET UNITYSDK_OFFSET(0xC580EE0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2SCREENPOS_OFFSET UNITYSDK_OFFSET(0xC57B140)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2WORLDPOS_OFFSET UNITYSDK_OFFSET(0xC582850)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELLOAD_OFFSET UNITYSDK_OFFSET(0xC57FD60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELUNLOAD_OFFSET UNITYSDK_OFFSET(0xC57FE10)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONCONTROLLERPRESSX_B__14_0_OFFSET UNITYSDK_OFFSET(0xC582DA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0xC5799C0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xC580DC0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0xC579E30)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONSETFINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0xC579D70)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__OVERRIDEARTMODELPOSEANIMATION_OFFSET UNITYSDK_OFFSET(0xC57DE90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYDISSOLVECURVEANIMATION_OFFSET UNITYSDK_OFFSET(0xC5822E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYOUTLINEFADEANIAMTION_OFFSET UNITYSDK_OFFSET(0xC579BD0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__REFRESHMOVEITEMSRENDERORDER_OFFSET UNITYSDK_OFFSET(0xC581210)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RESETARTMODELPOSEANIMATION_OFFSET UNITYSDK_OFFSET(0xC579860)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNALLITEMSTOUIBOX_OFFSET UNITYSDK_OFFSET(0xC57BB20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNCURSORTOUIBOX_OFFSET UNITYSDK_OFFSET(0xC57B5E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNITEMTOUIBOX_OFFSET UNITYSDK_OFFSET(0xC578010)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDDISSOLVERATE_OFFSET UNITYSDK_OFFSET(0xC581F60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDOUTLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xC582500)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETDISSOLVEPROGRESS_OFFSET UNITYSDK_OFFSET(0xC576D90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETFRAMEDISSOLVERATE_OFFSET UNITYSDK_OFFSET(0xC582150)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET UNITYSDK_OFFSET(0xC57C1A0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SHOWJOYSTICKCURSOR_OFFSET UNITYSDK_OFFSET(0xC57B280)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRIGGEROUTLINEFADEPERFORM_OFFSET UNITYSDK_OFFSET(0xC5826F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYAUTOABSORBPENDINGITEMS_OFFSET UNITYSDK_OFFSET(0xC57FCA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYGETBOARDLOCALPOS_OFFSET UNITYSDK_OFFSET(0xC57EF20)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYUPDATECURLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xC57ACD0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__WORLDPOS2SCREENPOS_OFFSET UNITYSDK_OFFSET(0xC582920)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC582F80)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC582DF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC582EF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC582E60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC582F90)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xC582FA0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xC583050)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xC582FF0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xC5830D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xC583090)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xC583280)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xC583360)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xC583440)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC583110)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xC582EE0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC5831E0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC583170)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC582E00)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___ONEVENT_B__7_0_OFFSET UNITYSDK_OFFSET(0xC582D20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard_TypeDefinitionIndex = 73168;

	class JigsawPuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x17720);
		}
		static ::System::String** StaticGet_JIGSAW_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x17728);
		}
		static ::RPG::Client::JigsawCommonConfig** StaticGet_JigsawConfig()
		{
			return (::RPG::Client::JigsawCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x17730);
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

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Void OnPuzzleInteractUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET))(this, a1);
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

		::System::Void _OnEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnSetFinishPuzzle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONSETFINISHPUZZLE_OFFSET))(this, a1);
		}

		::System::Void _OnNotifySwitchToJoyStick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
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

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ONDRAGGINGITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetInteractOn(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINTERACTON_OFFSET))(this, a1, a2);
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

		::System::Void SetAnimatorsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETANIMATORSENABLE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RESET_OFFSET))(this);
		}

		::System::Boolean IsVerticalMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISVERTICALMODE_OFFSET))(this);
		}

		::System::Void SetActiveItem(::RPG::Client::Prop::JigsawPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETACTIVEITEM_OFFSET))(this, a1);
		}

		::System::Void ReleaseLastActiveItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_RELEASELASTACTIVEITEM_OFFSET))(this);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* GetActiveItem()
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETACTIVEITEM_OFFSET))(this);
		}

		::System::Boolean CreateMoveableItemFromUI(::RPG::Client::Prop::JigsawItemData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_CREATEMOVEABLEITEMFROMUI_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAutoAbsorbItem(::RPG::Client::Prop::JigsawPuzzleItem* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_TRYAUTOABSORBITEM_OFFSET))(this, a1, a2);
		}

		::System::Void SetCursorActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean IsCursorActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_ISCURSORACTIVE_OFFSET))(this);
		}

		::System::Void SetCursorVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETCURSORVISIBLE_OFFSET))(this, a1);
		}

		::System::Void ShowJoystickCursor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SHOWJOYSTICKCURSOR_OFFSET))(this, a1);
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

		::System::Void SetUIRectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETUIRECTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void SetInnerUIRectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_SETINNERUIRECTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void _TryAutoAbsorbPendingItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYAUTOABSORBPENDINGITEMS_OFFSET))(this);
		}

		::System::Boolean _TryGetBoardLocalPos(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYGETBOARDLOCALPOS_OFFSET))(this, a1, a2);
		}

		::System::Void _OnArtModelLoad(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELLOAD_OFFSET))(this, a1);
		}

		::System::Void _OnArtModelUnload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ONARTMODELUNLOAD_OFFSET))(this, a1);
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

		::System::Void _ConfigBoardItem(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__CONFIGBOARDITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* _GetBoardItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETBOARDITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* _GetSuccessItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETSUCCESSITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::JigsawPuzzleItem* _GetMoveableItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::JigsawPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__GETMOVEABLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsMoveableItemAlreadyCreated(::RPG::Client::Prop::JigsawItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISMOVEABLEITEMALREADYCREATED_OFFSET))(this, a1);
		}

		::System::Boolean _IsFullBoardItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISFULLBOARDITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsTargetFull(::RPG::Client::Prop::JigsawPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISTARGETFULL_OFFSET))(this, a1);
		}

		::System::Boolean _HasFullNeighbourBoardItem(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HASFULLNEIGHBOURBOARDITEM_OFFSET))(this, a1);
		}

		::System::Boolean _IsShapeMatch(::RPG::Client::Prop::JigsawPuzzleItem* a1, ::RPG::Client::Prop::JigsawPuzzleItem* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISSHAPEMATCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsInAutoAbsorbArea(::RPG::Client::Prop::JigsawPuzzleItem* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINAUTOABSORBAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsInBoardArea(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__ISINBOARDAREA_OFFSET))(this, a1);
		}

		::System::Void _ReturnItemToUIBox(::RPG::Client::Prop::JigsawPuzzleItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNITEMTOUIBOX_OFFSET))(this, a1, a2);
		}

		::System::Void _ReturnCursorToUIBox(::RPG::Client::Prop::JigsawItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__RETURNCURSORTOUIBOX_OFFSET))(this, a1);
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

		::System::Void _HighlightPuzzleBoard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTPUZZLEBOARD_OFFSET))(this, a1);
		}

		::System::Void _HighlightRoateTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIGHLIGHTROATETIP_OFFSET))(this);
		}

		::System::Void _SetMoveableItemOrder2Top(::RPG::Client::Prop::JigsawPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET))(this, a1);
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

		::System::Boolean _LoadCursorItem(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOADCURSORITEM_OFFSET))(this, a1);
		}

		::System::Void _ShowJoystickCursor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SHOWJOYSTICKCURSOR_OFFSET))(this, a1);
		}

		::System::Void _InitDissolveParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__INITDISSOLVEPARAMS_OFFSET))(this);
		}

		::System::Void _HideOutline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__HIDEOUTLINE_OFFSET))(this, a1);
		}

		::System::Void _SetBoardDissolveRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDDISSOLVERATE_OFFSET))(this, a1);
		}

		::System::Void _SetFrameDissolveRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETFRAMEDISSOLVERATE_OFFSET))(this, a1);
		}

		::System::Void _SetDissolveProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETDISSOLVEPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _PlayDissolveCurveAnimation(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYDISSOLVECURVEANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void _SetBoardOutlineOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__SETBOARDOUTLINEOFFSET_OFFSET))(this, a1);
		}

		::System::Void _TriggerOutlineFadePerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRIGGEROUTLINEFADEPERFORM_OFFSET))(this);
		}

		::System::Void _PlayOutlineFadeAniamtion(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__PLAYOUTLINEFADEANIAMTION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _LocalPos2WorldPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2WORLDPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _WorldPos2ScreenPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__WORLDPOS2SCREENPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _LocalPos2ScreenPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__LOCALPOS2SCREENPOS_OFFSET))(this, a1);
		}

		::System::Boolean _TryUpdateCurLocalPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD__TRYUPDATECURLOCALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 BlockCoord2LocalPos(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_BLOCKCOORD2LOCALPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int LocalPos2BlockCoord(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2BLOCKCOORD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 LocalPos2FramePos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_LOCALPOS2FRAMEPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 FramePos2LocalPos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_FRAMEPOS2LOCALPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetClampedPoint(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD_GETCLAMPEDPOINT_OFFSET))(this, a1, a2);
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

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPuzzleInteractUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
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

		::System::Void __iFixBaseProxy_OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET))(this, a1, a2, a3);
		}
	};
}
