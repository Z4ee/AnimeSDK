#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_004034A1FAAF468A;
class Class_1_D27BF54F25500E5F;
class Class_2_510E2A3B742BC0DC;
namespace RPG::Client { class Effect_OracleOutlineMonoPlugin; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class OraclePuzzleCommonConfig; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace RPG::Client::Prop { class OraclePuzzlePanel; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANCELCURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0xC5C3670)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC5BED10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CLEAROUTLINE_OFFSET UNITYSDK_OFFSET(0xC5BFFB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5BEDA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_EXECUTECURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0xC5C35A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_FINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5C2BF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xC5BC200)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDORIGIN_OFFSET UNITYSDK_OFFSET(0xC5C4780)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDSCREENRADIUS_OFFSET UNITYSDK_OFFSET(0xC5BC340)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCELLSIZE_OFFSET UNITYSDK_OFFSET(0xC5C46C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCURRENTPANELINDEX_OFFSET UNITYSDK_OFFSET(0xC5C3500)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETDYNAMICRADTIO_OFFSET UNITYSDK_OFFSET(0xC5C4720)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPERFORMCELLSIZE_OFFSET UNITYSDK_OFFSET(0xC5C29D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPUZZLEPANELSCOUNT_OFFSET UNITYSDK_OFFSET(0xC5C3550)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETSELECTITEMCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xC5BC6E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GET_ISHELPERAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC5C4570)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GRIDPOS2LOCALPOS_OFFSET UNITYSDK_OFFSET(0xC5C28E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC5BC140)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC5BC1A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5BD150)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5BED50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5BEA00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOADORACLECONFIGIFNOT_OFFSET UNITYSDK_OFFSET(0xC5C45D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOCALPOS2GRIDPOS_OFFSET UNITYSDK_OFFSET(0xC5C2390)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xC5C12C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC5BFCA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xC5BFD10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xC5BFDB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xC5BFD70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xC5BFDF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xC5C1330)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xC5C1510)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xC5C2A30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC5BE9B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC5BFE30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xC5C3920)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0xC5C36D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONQUIT_OFFSET UNITYSDK_OFFSET(0xC5BE8A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC5C11A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC5C0860)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0xC5BD240)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0xC5BE660)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONHOVER_OFFSET UNITYSDK_OFFSET(0xC5C0110)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONSELECT_OFFSET UNITYSDK_OFFSET(0xC5C0A70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5BE3A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SWITCHPUZZLEPANEL_OFFSET UNITYSDK_OFFSET(0xC5C3110)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYDRAGITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0xC5BCDD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYHOVERITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0xC5BC8D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0xC5BCCB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYUNSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0xC5BCD20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ADDIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0xC5C42D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5C4870)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CLEARCURRENTINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0xC5BFBE0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC5C47F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARDV2_OFFSET UNITYSDK_OFFSET(0xC5C19C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARD_OFFSET UNITYSDK_OFFSET(0xC5C20E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xC5C3AF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONCHECKFINISH_OFFSET UNITYSDK_OFFSET(0xC5C1F00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONENDINTERACTION_OFFSET UNITYSDK_OFFSET(0xC5BE8F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0xC5BF700)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONFINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5C2060)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONGPCHANGE_OFFSET UNITYSDK_OFFSET(0xC5BFA80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0xC5BFB90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xC5BF780)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONSTARTINTERACTION_OFFSET UNITYSDK_OFFSET(0xC5BE5A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0xC5C3D70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0xC5C3FA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REFRESHMOVEITEMSCOLLIDERORDER_OFFSET UNITYSDK_OFFSET(0xC5C0620)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REMOVEIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0xC5C4420)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__22_0_OFFSET UNITYSDK_OFFSET(0xC5C4AA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETATTACHEDERAENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0xC5BF8D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0xC5BF5F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETFINISHPERFORM_OFFSET UNITYSDK_OFFSET(0xC5C2C30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET UNITYSDK_OFFSET(0xC5C04E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETPROPFLOATVALUE_OFFSET UNITYSDK_OFFSET(0xC5C32F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEINPERFORM_OFFSET UNITYSDK_OFFSET(0xC5BF270)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0xC5BF430)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTPUZZLEPANELTRANSITION_OFFSET UNITYSDK_OFFSET(0xC5C3200)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITIONBOARDROOT_OFFSET UNITYSDK_OFFSET(0xC5BEBE0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITITEMTOTOP_OFFSET UNITYSDK_OFFSET(0xC5C0330)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xC5C3B80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__UPDATEBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0xC5BF650)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC5C4EA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5C5000)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5C4D60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5C4F20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5C4E10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xC5C5330)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC5C5010)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xC5C5020)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xC5C50F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xC5C5080)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xC5C5150)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xC5C5390)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xC5C5470)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xC5C5550)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC5C4E00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC5C51B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONQUIT_OFFSET UNITYSDK_OFFSET(0xC5C4DF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC5C5290)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC5C5210)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5C4D70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_0_OFFSET UNITYSDK_OFFSET(0xC5C4AE0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_1_OFFSET UNITYSDK_OFFSET(0xC5C4CF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__26_0_OFFSET UNITYSDK_OFFSET(0xC5C4D00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleBoard_TypeDefinitionIndex = 73241;

	class OraclePuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A40);
		}
		static ::System::String** StaticGet__GroupEventStartLinePerform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A48);
		}
		static ::System::String** StaticGet_Oracle_Event_Drop()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A50);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet__AttachedPropIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A58);
		}
		static ::System::String** StaticGet__OraclePuzzleInitGroupEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A60);
		}
		static ::System::String** StaticGet_Oracle_Event_Pick()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A68);
		}
		static ::RPG::Client::OraclePuzzleCommonConfig** StaticGet_OracleConfig()
		{
			return (::RPG::Client::OraclePuzzleCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A70);
		}
		static ::RPG::Client::Prop::OraclePuzzleBoard** StaticGet_CurrentActivePuzzleBoard()
		{
			return (::RPG::Client::Prop::OraclePuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A78);
		}
		static ::System::String** StaticGet__CurrentPuzzleIndexDynamicValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A80);
		}
		static ::System::String** StaticGet_Oracle_StateGroup_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A88);
		}
		static ::System::String** StaticGet_Oracle_GroupProperty_PuzzleStateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A90);
		}
		static ::System::String** StaticGet_Oracle_Event_Finish()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18A98);
		}
		static ::System::String** StaticGet__GroupEventEndLinePerform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18AA0);
		}
		static ::System::String** StaticGet_Oracle_StateExit_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18AA8);
		}
		static ::System::String** StaticGet_Oracle_StateEnter_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18AB0);
		}
		static ::System::String** StaticGet_ORACLE_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x18AB8);
		}
		static ::System::Int32* StaticGet__ItemState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8420);
		}
		static ::System::Int32* StaticGet_GridSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8424);
		}
		static ::System::Int32* StaticGet_MainColorPropertID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8428);
		}
		static ::System::Int32* StaticGet_DitherAlphaPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x842C);
		}
		static ::System::Single* StaticGet_PinZGap()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8430);
		}
		static ::System::Int32* StaticGet__Complete()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8434);
		}
		static ::System::Int32* StaticGet_DitherOnpRropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8438);
		}
		static ::System::Single* StaticGet_GridRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x843C);
		}
		static ::System::Int32* StaticGet__IsHover()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8440);
		}
		static ::System::Single* StaticGet_HoverZGap()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8444);
		}
		static ::System::Int32* StaticGet_PerformGridSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8448);
		}
		::System::Boolean _IsInInteraction; // 0xB0
		::System::Boolean _IsGameStart; // 0xB1
		::System::Boolean _IsReportStart; // 0xB2
		::System::UInt32 _SerializeNumber; // 0xB4
		::System::Single _ContinueTime; // 0xB8
		::System::Int32 _ResetCount; // 0xBC
		::System::Int32 _HelperCount; // 0xC0
		::UnityEngine::Transform* PuzzleRoot; // 0xC8
		::System::Single PreviewScale; // 0xD0
		::System::Single BoardScale; // 0xD4
		::UnityEngine::GameObject* ItemPrefab; // 0xD8
		::UnityEngine::Vector2 ValidRegionCenter; // 0xE0
		::System::Single PreviewValidRegionRadius; // 0xE8
		::System::Single ValidRegionRadius; // 0xEC
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzlePanel*>* OraclePanels; // 0xF0
		::System::Single FadeDuration; // 0xF8
		::System::Boolean IsHelperSelectMode; // 0xFC
		::System::UInt32 _GroupID; // 0x100
		::System::UInt32 _InstacneID; // 0x104
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x108
		::RPG::GameCore::PropComponent* _PropCompt; // 0x110
		::RPG::GameCore::GameEntity* _GroupEntityRef; // 0x118
		::Class_2_510E2A3B742BC0DC* _MapGroupDef; // 0x120
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x128
		::RPG::Client::MonoEffectManager* _MonoEffectManagerRef; // 0x130
		::RPG::Client::Prop::OraclePuzzlePanel* _CurActivePanel; // 0x138
		::System::Int32 _CurPanelIndex; // 0x140
		::RPG::Client::Prop::OraclePuzzleItem* _CurHoverItem; // 0x148
		::RPG::Client::Prop::OraclePuzzleItem* _CurDragItem; // 0x150
		::RPG::Client::Prop::OraclePuzzleItem* _CurSelectItem; // 0x158
		::Class_1_004034A1FAAF468A* _ItemOutlinePrefab; // 0x160
		::RPG::Client::Effect_OracleOutlineMonoPlugin* _OutlinePlugin; // 0x168
		::UnityEngine::Animator* _OutlineAnimator; // 0x170
		::Class_1_D27BF54F25500E5F* _TransmitFade; // 0x178
		::UnityEngine::Transform* _BoardRootHintPic; // 0x180
		::System::Boolean _IsPuzzleUnlock; // 0x188
		::UnityEngine::Color _HintInitColor; // 0x18C
		::System::Boolean _IsGameFinish; // 0x19C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Boolean HasHoverItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASHOVERITEM_OFFSET))(this);
		}

		::System::Boolean HasSelectItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASSELECTITEM_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetBoardCenterScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDCENTERSCREENPOSITION_OFFSET))(this);
		}

		::System::Single GetBoardScreenRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDSCREENRADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetSelectItemCenterScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETSELECTITEMCENTERSCREENPOSITION_OFFSET))(this);
		}

		::System::Void TryHoverItemByVirtualCursor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYHOVERITEMBYVIRTUALCURSOR_OFFSET))(this, a1);
		}

		::System::Void TrySelectItemByVirtualCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYSELECTITEMBYVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void TryUnselectItemByVirtualCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYUNSELECTITEMBYVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void TryDragItemByVirtualCursor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYDRAGITEMBYVIRTUALCURSOR_OFFSET))(this, a1);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONQUIT_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONFINISH_OFFSET))(this);
		}

		::System::Void _OnStartInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONSTARTINTERACTION_OFFSET))(this);
		}

		::System::Void _OnEndInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONENDINTERACTION_OFFSET))(this);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void RuntimeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMEINIT_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _StartFadeinPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEINPERFORM_OFFSET))(this);
		}

		::System::Void _TransitionBoardRoot(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITIONBOARDROOT_OFFSET))(this, a1);
		}

		::System::Void _StartFadeoutPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEOUTPERFORM_OFFSET))(this);
		}

		::System::Void _SetBoardRootHintPicActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETBOARDROOTHINTPICACTIVE_OFFSET))(this, a1);
		}

		::System::Void _UpdateBoardRootHintPicActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__UPDATEBOARDROOTHINTPICACTIVE_OFFSET))(this);
		}

		::System::Void _OnEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnOwnerEntityVisibleChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnGPChange(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONGPCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnNotifySwitchToJoyStick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _TransitItemToTop(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITITEMTOTOP_OFFSET))(this, a1);
		}

		::System::Void _SetMoveableItemOrder2Top(::RPG::Client::Prop::OraclePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET))(this, a1);
		}

		::System::Void _RefreshMoveItemsColliderOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REFRESHMOVEITEMSCOLLIDERORDER_OFFSET))(this);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCheckFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONCHECKFINISH_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetClippedPosInBoard(::RPG::Client::Prop::OraclePuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _GetClippedPosInBoardV2(::RPG::Client::Prop::OraclePuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARDV2_OFFSET))(this, a1);
		}

		::System::Void OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_FINISHPUZZLE_OFFSET))(this);
		}

		::System::Void _OnFinishPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONFINISHPUZZLE_OFFSET))(this);
		}

		::System::Void _SetFinishPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETFINISHPERFORM_OFFSET))(this);
		}

		::System::Void SwitchPuzzlePanel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SWITCHPUZZLEPANEL_OFFSET))(this, a1);
		}

		::System::Int32 GetCurrentPanelIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCURRENTPANELINDEX_OFFSET))(this);
		}

		::System::Int32 GetPuzzlePanelsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPUZZLEPANELSCOUNT_OFFSET))(this);
		}

		::System::Void ExecuteCurrentPuzzleHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_EXECUTECURRENTPUZZLEHELPER_OFFSET))(this);
		}

		::System::Void CancelCurrentPuzzleHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANCELCURRENTPUZZLEHELPER_OFFSET))(this);
		}

		::System::Void SetTargetOnHover(::RPG::Client::Prop::OraclePuzzleItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONHOVER_OFFSET))(this, a1, a2);
		}

		::System::Void SetTargetOnSelect(::RPG::Client::Prop::OraclePuzzleItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CLEAROUTLINE_OFFSET))(this);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnBackBtnClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONBACKBTNCLICK_OFFSET))(this, a1);
		}

		::System::Void _ClearCurrentInteractState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CLEARCURRENTINTERACTSTATE_OFFSET))(this);
		}

		::System::Void _TriggerGroupEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRIGGERGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void _SetPropFloatValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETPROPFLOATVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void _StartPuzzlePanelTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTPUZZLEPANELTRANSITION_OFFSET))(this, a1);
		}

		::System::Void _OraclePuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _OraclePuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEENDDATAREPORT_OFFSET))(this);
		}

		::System::Void _AddIgnoreAttachedEraEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ADDIGNOREATTACHEDERAENTITY_OFFSET))(this);
		}

		::System::Void _RemoveIgnoreAttachedEraEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REMOVEIGNOREATTACHEDERAENTITY_OFFSET))(this);
		}

		::System::Void _SetAttachedEraEntityVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETATTACHEDERAENTITYVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHelperAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GET_ISHELPERAVAILABLE_OFFSET))(this);
		}

		static ::System::Void LoadOracleConfigIfNot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOADORACLECONFIGIFNOT_OFFSET))();
		}

		static ::System::Single GetPerformCellSize()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPERFORMCELLSIZE_OFFSET))();
		}

		static ::System::Single GetCellSize()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCELLSIZE_OFFSET))();
		}

		static ::System::Single GetDynamicRadtio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETDYNAMICRADTIO_OFFSET))();
		}

		static ::UnityEngine::Vector2 GetBoardOrigin()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDORIGIN_OFFSET))();
		}

		static ::UnityEngine::Vector2Int LocalPos2GridPos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOCALPOS2GRIDPOS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GridPos2LocalPos(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GRIDPOS2LOCALPOS_OFFSET))(a1);
		}

		::System::Void _RuntimeInit_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__22_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_1_OFFSET))(this);
		}

		::System::Void __StartFadeoutPerform_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__26_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONQUIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET))(this, a1, a2, a3);
		}
	};
}
