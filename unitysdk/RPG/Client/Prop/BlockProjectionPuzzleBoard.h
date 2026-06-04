#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/Struct_2_32361ACFB28DADC0.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleCameraController; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleItem; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleProjectionBoard; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_COORD2INDEX_OFFSET UNITYSDK_OFFSET(0xC4CE460)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4CA5E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_FINDNEIGHBORBLOCKS_OFFSET UNITYSDK_OFFSET(0xC4CF490)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GETNEXTITEMBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xC4CC5F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GOBACKONEOPERATION_OFFSET UNITYSDK_OFFSET(0xC4CDDC0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4C92A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC4CA590)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCLICKEMPTYUP_OFFSET UNITYSDK_OFFSET(0xC4CDD20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC4CC370)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xC4CCBD0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xC4CCF60)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xC4CCC30)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xC4CD5D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xC4CD590)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC4CCA10)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xC4CF3E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0xC4CF140)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET UNITYSDK_OFFSET(0xC4CF1E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xC4CA520)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC4CDB60)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC4CDC90)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESETOPERATION_OFFSET UNITYSDK_OFFSET(0xC4CE0B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xC4CA170)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0xC4CA380)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCK2PROJECTIONCOORD_OFFSET UNITYSDK_OFFSET(0xC4D32D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0xC4C9F20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0xC4CB120)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CANCELSELECTBLOCKPREVIEWPERFORM_OFFSET UNITYSDK_OFFSET(0xC4CD010)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4D3D70)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CHECKTUTORIALGUIDREPORT_OFFSET UNITYSDK_OFFSET(0xC4CBF20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CLEARCURRENTITEM_OFFSET UNITYSDK_OFFSET(0xC4CABB0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC4D3BF0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FILLAVAILIABLEBLOCK_OFFSET UNITYSDK_OFFSET(0xC4CEAC0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEMJOYSTICK_OFFSET UNITYSDK_OFFSET(0xC4CC040)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEM_OFFSET UNITYSDK_OFFSET(0xC4CEDF0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULT_OFFSET UNITYSDK_OFFSET(0xC4CED70)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETPROJECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xC4D0460)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETUNFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC4D3A60)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__HIDENPCANDMONSTER_OFFSET UNITYSDK_OFFSET(0xC4CB460)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ISCOORDVALID_OFFSET UNITYSDK_OFFSET(0xC4D03E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xC4CF350)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0xC4CC1E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONGAMEFINISHPERFORM_OFFSET UNITYSDK_OFFSET(0xC4D2CA0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0xC4CC260)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__PLAYPROJECTIONBOARDSSUCCESSPERFORM_OFFSET UNITYSDK_OFFSET(0xC4D29A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEAVAILABLEITEMS_OFFSET UNITYSDK_OFFSET(0xC4CEF20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xC4CD390)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHUIINFO_OFFSET UNITYSDK_OFFSET(0xC4CBE60)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTBLOCKPREVIEWPERFORM_OFFSET UNITYSDK_OFFSET(0xC4CE4A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTITEM_OFFSET UNITYSDK_OFFSET(0xC4CCCB0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLALLOPERATIONBLOCKS_OFFSET UNITYSDK_OFFSET(0xC4CE1E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLONEOPERATIONBLOCK_OFFSET UNITYSDK_OFFSET(0xC4CDF10)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC4CEC60)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATELOOKUPBLOCKS_OFFSET UNITYSDK_OFFSET(0xC4CB820)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEPROJECTIONBOARDS_OFFSET UNITYSDK_OFFSET(0xC4CBD50)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4D4130)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_GETNEXTITEMBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xC4D4520)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4D4080)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC4D40A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTYUP_OFFSET UNITYSDK_OFFSET(0xC4D44C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC4D4140)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xC4D4150)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xC4D4220)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xC4D41B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xC4D42E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xC4D4280)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC4D4340)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xC4D4090)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC4D43A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC4D4440)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___ONGAMEFINISHPERFORM_B__39_0_OFFSET UNITYSDK_OFFSET(0xC4D3E40)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___SELECTITEM_B__24_0_OFFSET UNITYSDK_OFFSET(0xC4D3E30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleBoard_TypeDefinitionIndex = 72728;

	class BlockProjectionPuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		static ::RPG::Client::Prop::BlockProjectionPuzzleBoard** StaticGet_CurrentActivePuzzleBoard()
		{
			return (::RPG::Client::Prop::BlockProjectionPuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10720);
		}
		static ::System::String** StaticGet_BLOCK_ITEM_AVAILIABLE_CORE_EFFECT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10728);
		}
		static ::System::String** StaticGet_BLOCK_USE_UP_TOST_TEXTID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10730);
		}
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10738);
		}
		static ::System::String** StaticGet_EvBlockItemSelectEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10740);
		}
		static ::System::String** StaticGet_BLOCK_ITEM_DISSOLVE_EFFECT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10748);
		}
		static ::System::String** StaticGet_EvBlockItemNewUnFillEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10750);
		}
		static ::System::String** StaticGet_EvProjectionBoardAllMatchEndEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10758);
		}
		static ::System::String** StaticGet_EvProjectionBoardAllMatchEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10760);
		}
		static ::System::String** StaticGet_EvBlockItemNewFillEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10768);
		}
		::System::Boolean ShowPreviewArrow; // 0xB0
		::System::Single BlockSize; // 0xB4
		::System::Single BlockPadding; // 0xB8
		::System::Int32 MaxBlockNum; // 0xBC
		::System::Single CompleteEffectDuration; // 0xC0
		::UnityEngine::Transform* BoardRoot; // 0xC8
		::UnityEngine::Transform* ProjectionBoardRoot; // 0xD0
		::UnityEngine::Transform* CameraRoot; // 0xD8
		::UnityEngine::GameObject* ItemPrefab; // 0xE0
		::System::Single JoyStickDirectionWeight; // 0xE8
		::System::Single JoyStickDistanceWeight; // 0xEC
		::System::Single JoyStickVerticalHorizontalDistanceWeight; // 0xF0
		::System::Single JoyStickYPitchAngle; // 0xF4
		::System::UInt32 _GroupID; // 0xF8
		::System::UInt32 _InstacneID; // 0xFC
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x100
		::RPG::GameCore::PropComponent* _PropCompt; // 0x108
		::RPG::GameCore::GameEntity* _GroupEntityRef; // 0x110
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x118
		::RPG::Client::MonoEffectManager* _MonoEffectManagerRef; // 0x120
		::RPG::Client::Prop::BlockProjectionPuzzleItem* _CurHoverItem; // 0x128
		::System::Boolean _IsJoyStickSelectedState; // 0x130
		::System::Boolean _IsGameFinish; // 0x131
		::System::UInt32 _SerializeNumber; // 0x134
		::System::Boolean _IsReportStart; // 0x138
		::System::Int32 _ResetCount; // 0x13C
		::System::Int32 _BackCount; // 0x140
		::System::Single _ContinueTime; // 0x144
		::System::Int32 _AvailiableBlcokNum; // 0x148
		::RPG::Client::Prop::BlockProjectionPuzzleItem* _SelectBlockItem; // 0x150
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _AllItems; // 0x158
		::System::Collections::Generic::Stack_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _FillOperationBlockStack; // 0x160
		::Il2CppArray<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _LookUpItems; // 0x168
		::RPG::Client::Prop::BlockProjectionPuzzleCameraController* _CameraController; // 0x170
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleProjectionBoard*>* _ProjectionBoards; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>* _SelectableBlockItems; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>* _SelectableAvailiableItems; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _TempItems; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPuzzleInteractUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESET_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _HideNPCAndMonster(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__HIDENPCANDMONSTER_OFFSET))(this, a1);
		}

		::System::Void _CheckTutorialGuidReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CHECKTUTORIALGUIDREPORT_OFFSET))(this);
		}

		::System::Void _OnEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnNotifySwitchToJoyStick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void OnControllerPressX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSX_OFFSET))(this);
		}

		::System::Void OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void OnClickEmptyUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCLICKEMPTYUP_OFFSET))(this);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* GetNextItemByDirection(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GETNEXTITEMBYDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Void GoBackOneOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GOBACKONEOPERATION_OFFSET))(this);
		}

		::System::Void ResetOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESETOPERATION_OFFSET))(this);
		}

		static ::System::Int32 Coord2Index(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_COORD2INDEX_OFFSET))(a1);
		}

		::System::Void _SelectItem(::RPG::Client::Prop::BlockProjectionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTITEM_OFFSET))(this, a1);
		}

		::System::Void _FocusDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULT_OFFSET))(this);
		}

		::System::Void _FocusDefaultItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEM_OFFSET))(this);
		}

		::System::Void _FocusDefaultItemJoyStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEMJOYSTICK_OFFSET))(this);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickUndo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET))(this, a1);
		}

		::System::Void _OnBackBtnClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONBACKBTNCLICK_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void _RefreshUIInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHUIINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* FindNeighborBlocks(::RPG::Client::Prop::BlockProjectionPuzzleItem* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>*(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_FINDNEIGHBORBLOCKS_OFFSET))(this, a1);
		}

		::System::Boolean _IsCoordValid(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ISCOORDVALID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateLookupBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATELOOKUPBLOCKS_OFFSET))(this);
		}

		::System::Void _UpdateProjectionBoards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEPROJECTIONBOARDS_OFFSET))(this);
		}

		::System::Void _PlayProjectionBoardsSuccessPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__PLAYPROJECTIONBOARDSSUCCESSPERFORM_OFFSET))(this);
		}

		::System::Void _UpdateIsPuzzleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void _OnGameFinishPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONGAMEFINISHPERFORM_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* _GetProjectionState(::RPG::Client::Prop::RubikCubeFrameFace a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::RPG::Client::Prop::RubikCubeFrameFace))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETPROJECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _CancelSelectBlockPreviewPerform(::RPG::Client::Prop::BlockProjectionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CANCELSELECTBLOCKPREVIEWPERFORM_OFFSET))(this, a1);
		}

		::System::Boolean _SelectBlockPreviewPerform(::RPG::Client::Prop::BlockProjectionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTBLOCKPREVIEWPERFORM_OFFSET))(this, a1);
		}

		::System::Void _FillAvailiableBlock(::RPG::Client::Prop::BlockProjectionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FILLAVAILIABLEBLOCK_OFFSET))(this, a1);
		}

		::System::Boolean _UnFillOneOperationBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLONEOPERATIONBLOCK_OFFSET))(this);
		}

		::System::Void _UnFillAllOperationBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLALLOPERATIONBLOCKS_OFFSET))(this);
		}

		::System::Void _RefreshSelectableBlockItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEBLOCKITEMS_OFFSET))(this);
		}

		::System::Void _RefreshSelectableAvailableItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEAVAILABLEITEMS_OFFSET))(this);
		}

		::System::Void _ClearCurrentItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CLEARCURRENTITEM_OFFSET))(this);
		}

		::Struct_2_32361ACFB28DADC0 _Block2ProjectionCoord(::RPG::Client::Prop::RubikCubeFrameFace a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Struct_2_32361ACFB28DADC0(*)(::PVOID, ::RPG::Client::Prop::RubikCubeFrameFace, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCK2PROJECTIONCOORD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 _GetUnFinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETUNFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void _BlockProjectionPuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _BlockProjectionPuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEENDDATAREPORT_OFFSET))(this);
		}

		::System::Void __SelectItem_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___SELECTITEM_B__24_0_OFFSET))(this);
		}

		::System::Void __OnGameFinishPerform_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___ONGAMEFINISHPERFORM_B__39_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnPuzzleInteractUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSX_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnClickEmptyUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTYUP_OFFSET))(this);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* __iFixBaseProxy_GetNextItemByDirection(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_GETNEXTITEMBYDIRECTION_OFFSET))(this, a1, a2);
		}
	};
}
