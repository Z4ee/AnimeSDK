#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::Prop { class WormCompassBlockGridData; }
namespace RPG::Client::Prop { class WormCompassFinishRoute; }
namespace RPG::Client::Prop { class WormCompassItemGridData; }
namespace RPG::Client::Prop { class WormCompassPuzzleBlock; }
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace RPG::Client::Prop { class WormCompassPuzzleItemBase; }
namespace RPG::Client::Prop { class WormCompassPuzzleRingController; }
namespace RPG::Client::Prop { class WormCompassPuzzleTreasureBox; }
namespace RPG::Client::Prop { class WormCompassPuzzleWormAvatar; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CANCELSELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xAF14190)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF105B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xAF0B8F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETFINISHTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xAF13430)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xAF12F50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIBLOCK_OFFSET UNITYSDK_OFFSET(0xAF13210)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIITEM_OFFSET UNITYSDK_OFFSET(0xAF130B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETROUTEFINISH_OFFSET UNITYSDK_OFFSET(0xAF133E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETSELECTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xAF0ABF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xAF111B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_HIDEALLSHOWITEMS_OFFSET UNITYSDK_OFFSET(0xAF100C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF0AC50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xAF13370)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAF11940)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xAF11140)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0xAF0BD10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1BBB005414AEB64F_OFFSET UNITYSDK_OFFSET(0xAF12F00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAF135F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_3D89D6893A434AE8_OFFSET UNITYSDK_OFFSET(0xAF107C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xAF0FC90)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_648B18622A9B054A_OFFSET UNITYSDK_OFFSET(0xAF0FF10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xAF0E160)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xAF13CA0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xAF15050)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_88AA25DE39CF5532_OFFSET UNITYSDK_OFFSET(0xAF13480)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0xAF0F4A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_C58796335AE5B43E_OFFSET UNITYSDK_OFFSET(0xAF14510)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xAF153A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0xAF0E2A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xAF0B310)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xAF14EB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xAF14020)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAF150D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONLEFT_OFFSET UNITYSDK_OFFSET(0xAF13650)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONRIGHT_OFFSET UNITYSDK_OFFSET(0xAF13890)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONLEFTROTATION_OFFSET UNITYSDK_OFFSET(0xAF13AD0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRESETCLICK_OFFSET UNITYSDK_OFFSET(0xAF14E00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRIGHTROTATION_OFFSET UNITYSDK_OFFSET(0xAF13B80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONSTARTBTN_OFFSET UNITYSDK_OFFSET(0xAF13C30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF11840)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ROTATERING_OFFSET UNITYSDK_OFFSET(0xAF12910)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_SELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xAF14C20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF0E250)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF11990)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF156C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAF15540)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__INITPUZZLE_B__47_0_OFFSET UNITYSDK_OFFSET(0xAF158E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF159C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF15950)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAF15A30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF159D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF15960)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xAF15AD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard_TypeDefinitionIndex = 72422;

	class WormCompassPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet__RouteStartSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC7C0);
		}
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC7C8);
		}
		static ::System::String** StaticGet__RouteStopSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC7D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_6_56()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC7D8);
		}
		static ::RPG::Client::Prop::WormCompassPuzzleWormAvatar** StaticGet_GlobalAvatar()
		{
			return (::RPG::Client::Prop::WormCompassPuzzleWormAvatar**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC7E0);
		}
		static ::System::String** StaticGet__PuzzleFinishSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC7E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__SelectRingSoundEvent()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC7F0);
		}
		static ::System::Int32* StaticGet_Field_6_43()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4BD0);
		}
		static ::System::Int32* StaticGet_Field_6_58()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4BD4);
		}
		static ::System::Int32* StaticGet_Field_6_46()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4BD8);
		}
		static ::System::UInt32* StaticGet_ACHIEVEMENT_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4BDC);
		}
		static ::System::Int32* StaticGet_Field_6_47()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4BE0);
		}
		::System::Int32 Row; // 0x48
		::System::Int32 Col; // 0x4C
		::UnityEngine::GameObject* ItemPrefab; // 0x50
		::UnityEngine::GameObject* BlockPrefab; // 0x58
		::UnityEngine::GameObject* RingPrefab; // 0x60
		::UnityEngine::GameObject* AvatarPrefab; // 0x68
		::UnityEngine::GameObject* TreasureBoxPrefab; // 0x70
		::UnityEngine::GameObject* ConfirmButton; // 0x78
		::RPG::Client::Prop::WormCompassItemGridData* Items; // 0x80
		::RPG::Client::Prop::WormCompassBlockGridData* Blocks; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassFinishRoute*>* FinishRoutes; // 0x90
		::System::String* SavedGroupPropertyName; // 0x98
		::System::String* StartScanEffectPath; // 0xA0
		::RPG::Client::TriggerEffectParams* Field_6_13; // 0xA8
		::System::String* SelectingEffectPath; // 0xB0
		::System::String* NightSelectingEffectPath; // 0xB8
		::RPG::Client::TriggerEffectParams* Field_6_16; // 0xC0
		::RPG::Client::MonoEffect* Field_6_17; // 0xC8
		::System::Boolean IsDayPuzzle; // 0xD0
		::System::Single ItemDelayShowAfterScan; // 0xD4
		::RPG::GameCore::DynamicString* RouteReadyEvent; // 0xD8
		::System::Single RouteFinishDelay; // 0xE0
		::System::Single FadeOutDelay; // 0xE4
		::System::Single Field_6_23; // 0xE8
		::System::Boolean Field_6_24; // 0xEC
		::System::Boolean Field_6_25; // 0xED
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleRingController*>* Field_6_26; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* Field_6_27; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleBlock*>* Field_6_28; // 0x100
		::RPG::Client::Prop::WormCompassPuzzleWormAvatar* Field_6_29; // 0x108
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleTreasureBox*>* Field_6_30; // 0x110
		::System::Int32 Field_6_31; // 0x118
		::System::Boolean Field_6_32; // 0x11C
		::System::Boolean Field_6_33; // 0x11D
		::System::Boolean Field_6_34; // 0x11E
		::System::Boolean Field_6_35; // 0x11F
		::System::Boolean Field_6_36; // 0x120
		::RPG::Client::Prop::WormCompassFinishRoute* Field_6_37; // 0x128
		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* Field_6_38; // 0x130
		::UnityEngine::UI::Image* Field_6_39; // 0x138
		::RPG::Client::Prop::WormCompassPuzzleItem* StartPoint; // 0x140
		::RPG::Client::Prop::WormCompassPuzzleItem* EndPoint; // 0x148
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* Field_6_44; // 0x150
		::System::Int32 Field_6_45; // 0x158
		::System::Int32 Field_6_53; // 0x15C
		::System::Int32 Field_6_54; // 0x160
		::System::String* Field_6_55; // 0x168
		::System::Int32 Field_6_59; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::String* GetSelectEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETSELECTEFFECTPATH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_FD6692A5F6B0AC0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_FD6692A5F6B0AC0C_OFFSET))(this);
		}

		::System::Void Method_6_14014646206E49EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_14014646206E49EF_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_D89E9B7A3325AE84(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D89E9B7A3325AE84_OFFSET))(this, a1);
		}

		::System::Void Method_6_648B18622A9B054A(::RPG::Client::Prop::WormCompassPuzzleItemBase* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItemBase*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_648B18622A9B054A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HideAllShowItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_HIDEALLSHOWITEMS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_BF9C25E762BD53B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_BF9C25E762BD53B3_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void RotateRing(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ROTATERING_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1BBB005414AEB64F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1BBB005414AEB64F_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleItem* GetItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassPuzzleItem* GetOriItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassPuzzleBlock* GetOriBlock(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleBlock*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBlock(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTreasureBox(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISTREASUREBOX_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassFinishRoute* GetRouteFinish()
		{
			return ((::RPG::Client::Prop::WormCompassFinishRoute*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETROUTEFINISH_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GetFinishTreasureBox()
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleTreasureBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETFINISHTREASUREBOX_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GetTreasureBox(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleTreasureBox*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETTREASUREBOX_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* Method_6_88AA25DE39CF5532(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_88AA25DE39CF5532_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TriggerEffectParams* GetEffectParams(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::UnityEngine::Transform* a5, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a6)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Transform*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETEFFECTPARAMS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void OnDirectionLeft(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONLEFT_OFFSET))(this, a1);
		}

		::System::Void OnDirectionRight(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONRIGHT_OFFSET))(this, a1);
		}

		::System::Void OnLeftRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONLEFTROTATION_OFFSET))(this, a1);
		}

		::System::Void OnRightRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRIGHTROTATION_OFFSET))(this, a1);
		}

		::System::Void OnStartBtn(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONSTARTBTN_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCEL_OFFSET))(this, a1);
		}

		::System::Void Method_6_739DB9F245C7FAD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_739DB9F245C7FAD0_OFFSET))(this);
		}

		::System::Void Method_6_C58796335AE5B43E(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_C58796335AE5B43E_OFFSET))(this, a1);
		}

		::System::Void Method_6_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void OnResetClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRESETCLICK_OFFSET))(this, a1);
		}

		::System::Void OnCancelClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCELCLICK_OFFSET))(this);
		}

		::System::Void Method_6_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void SelectEffect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_SELECTEFFECT_OFFSET))(this, a1);
		}

		::System::Void CancelSelectEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CANCELSELECTEFFECT_OFFSET))(this);
		}

		::System::Void Method_6_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_5176DC743E478510_OFFSET))(this);
		}

		::System::Void Method_6_3D89D6893A434AE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_3D89D6893A434AE8_OFFSET))(this);
		}

		::System::Void _InitPuzzle_b__47_0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__INITPUZZLE_B__47_0_OFFSET))(this, effect, param);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}
	};
}
