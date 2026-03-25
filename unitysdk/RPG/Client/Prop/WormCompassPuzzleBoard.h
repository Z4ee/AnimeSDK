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

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CANCELSELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xA1919F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA18E3C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xA189A10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETFINISHTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xA190CA0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xA1907C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIBLOCK_OFFSET UNITYSDK_OFFSET(0xA190A80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIITEM_OFFSET UNITYSDK_OFFSET(0xA190920)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETROUTEFINISH_OFFSET UNITYSDK_OFFSET(0xA190C50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETSELECTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xA188D10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xA18EA20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_HIDEALLSHOWITEMS_OFFSET UNITYSDK_OFFSET(0xA18DED0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA188D70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xA190BE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA18F1B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xA18E9B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0xA189DB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1BBB005414AEB64F_OFFSET UNITYSDK_OFFSET(0xA190770)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA190E60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_3D89D6893A434AE8_OFFSET UNITYSDK_OFFSET(0xA18E4E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xA18DAA0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_648B18622A9B054A_OFFSET UNITYSDK_OFFSET(0xA18DD20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0xA191510)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xA18BF70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA192660)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_88AA25DE39CF5532_OFFSET UNITYSDK_OFFSET(0xA190CF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0xA18D2B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_C58796335AE5B43E_OFFSET UNITYSDK_OFFSET(0xA191B20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA1929B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0xA18C0B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xA189430)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xA1924C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xA191880)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA1926E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONLEFT_OFFSET UNITYSDK_OFFSET(0xA190EC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONRIGHT_OFFSET UNITYSDK_OFFSET(0xA191100)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONLEFTROTATION_OFFSET UNITYSDK_OFFSET(0xA191340)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRESETCLICK_OFFSET UNITYSDK_OFFSET(0xA192410)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRIGHTROTATION_OFFSET UNITYSDK_OFFSET(0xA1913F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONSTARTBTN_OFFSET UNITYSDK_OFFSET(0xA1914A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA18F0B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ROTATERING_OFFSET UNITYSDK_OFFSET(0xA190180)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_SELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xA192230)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA18C060)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA18F200)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA192CD0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA192B50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__INITPUZZLE_B__47_0_OFFSET UNITYSDK_OFFSET(0xA192EF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA192FD0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA192F60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA193040)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA192FE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA192F70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA1930E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard_TypeDefinitionIndex = 64375;

	class WormCompassPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_6_56()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC100);
		}
		static ::RPG::Client::Prop::WormCompassPuzzleWormAvatar** StaticGet_GlobalAvatar()
		{
			return (::RPG::Client::Prop::WormCompassPuzzleWormAvatar**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC108);
		}
		static ::System::String** StaticGet__RouteStopSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC110);
		}
		static ::System::String** StaticGet__PuzzleFinishSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC118);
		}
		static ::System::String** StaticGet__RouteStartSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC120);
		}
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC128);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__SelectRingSoundEvent()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xC130);
		}
		static ::System::Int32* StaticGet_Field_6_47()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x47D0);
		}
		static ::System::Int32* StaticGet_Field_6_43()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x47D4);
		}
		static ::System::Int32* StaticGet_Field_6_46()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x47D8);
		}
		static ::System::UInt32* StaticGet_ACHIEVEMENT_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x47DC);
		}
		static ::System::Int32* StaticGet_Field_6_58()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x47E0);
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

		::System::Void Method_6_655DDB722F1FDE73()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_655DDB722F1FDE73_OFFSET))(this);
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
