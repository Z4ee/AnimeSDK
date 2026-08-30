#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudDragBrain_DragIntent.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputBrainBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1348;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputSource; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA3A520)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA390F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__GETDRAGINTENTANGLE_OFFSET UNITYSDK_OFFSET(0x1CA38F70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__GETDRAGINTENTDISTANCETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1CA38EF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__GETUSEINTENTVERTICALDISTANCE_OFFSET UNITYSDK_OFFSET(0x1CA39050)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__HANDLEPOINTERDRAG_OFFSET UNITYSDK_OFFSET(0x1CA39930)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__HANDLEPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x1CA39630)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__HANDLEPOINTERRELEASE_OFFSET UNITYSDK_OFFSET(0x1CA3A210)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__ONINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x1CA3A490)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__PROCESSDRAGONFINDINGTARGET_OFFSET UNITYSDK_OFFSET(0x1CA39CE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__PROCESSDRAGONSELECTING_OFFSET UNITYSDK_OFFSET(0x1CA39A10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__RESETDRAGINTENT_OFFSET UNITYSDK_OFFSET(0x1CA398E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__SUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA391F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__UNSUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA39410)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__UPDATEDRAGINTENT_OFFSET UNITYSDK_OFFSET(0x1CA39E00)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudDragBrain_TypeDefinitionIndex = 79574;

	class FateRinBattleHudDragBrain : public ::RPG::Client::FateRin::Battle::FateRinBattleHudInputBrainBase
	{
	public:
		static ::System::Single* StaticGet_DragIntentDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudDragBrain_TypeDefinitionIndex)->GetStaticField(0xEF60);
		}
		static ::System::Boolean* StaticGet_UseIntentAllowDownward()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudDragBrain_TypeDefinitionIndex)->GetStaticField(0xEF64);
		}
		static ::System::Single* StaticGet_IntentReEvaluateAngleThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudDragBrain_TypeDefinitionIndex)->GetStaticField(0xEF68);
		}
		static ::System::Single* StaticGet_UseIntentMinUpDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudDragBrain_TypeDefinitionIndex)->GetStaticField(0xEF6C);
		}
		static ::System::Single* StaticGet_UseIntentAngleThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudDragBrain_TypeDefinitionIndex)->GetStaticField(0xEF70);
		}
		::UnityEngine::Vector2 _DragOrigin; // 0x40
		::RPG::Client::FateRin::Battle::FateRinBattleHudDragBrain_DragIntent _DragIntent; // 0x48
		::System::Nullable_1<::System::Single> _DecidedDragAngle; // 0x4C
		::UnityEngine::Vector2 _LastPointerPos; // 0x54

		::System::Void _ctor(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_0_16E4307DCC419505_1348* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1348*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__CCTOR_OFFSET))();
		}

		static ::System::Single _GetDragIntentDistanceThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__GETDRAGINTENTDISTANCETHRESHOLD_OFFSET))();
		}

		static ::System::Single _GetDragIntentAngle(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__GETDRAGINTENTANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single _GetUseIntentVerticalDistance(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__GETUSEINTENTVERTICALDISTANCE_OFFSET))(a1);
		}

		::System::Void _SubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__SUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__UNSUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerPress(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__HANDLEPOINTERPRESS_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerDrag(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__HANDLEPOINTERDRAG_OFFSET))(this, a1);
		}

		::System::Void _ProcessDragOnSelecting(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__PROCESSDRAGONSELECTING_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessDragOnFindingTarget(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__PROCESSDRAGONFINDINGTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void _HandlePointerRelease(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__HANDLEPOINTERRELEASE_OFFSET))(this, a1);
		}

		::System::Void _OnInputInterrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__ONINPUTINTERRUPTED_OFFSET))(this);
		}

		::System::Void _ResetDragIntent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__RESETDRAGINTENT_OFFSET))(this);
		}

		::System::Void _UpdateDragIntent(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDDRAGBRAIN__UPDATEDRAGINTENT_OFFSET))(this, a1, a2);
		}
	};
}
