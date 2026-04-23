#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/System/Object.h"

class Class_1_065C3F7CC6C5F3AA;
class Class_2_4AD6CFDC15993F44;
class Class_2_A48F3719AA1CF200_7;
class Class_2_A48F3719AA1CF200_8;
class Class_2_D5F03C2010D71B1B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET UNITYSDK_OFFSET(0xB788790)
#define RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET UNITYSDK_OFFSET(0xB786830)
#define RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET UNITYSDK_OFFSET(0xB785BF0)
#define RPG_GAMECORE_TRACKNPCMODULE_DISABLE_OFFSET UNITYSDK_OFFSET(0xB788040)
#define RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB785BA0)
#define RPG_GAMECORE_TRACKNPCMODULE_ENABLE_OFFSET UNITYSDK_OFFSET(0xB787FF0)
#define RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET UNITYSDK_OFFSET(0xB788800)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET UNITYSDK_OFFSET(0xB7888B0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_CURRENTALERTVALUE_OFFSET UNITYSDK_OFFSET(0xB788950)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xB7888D0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET UNITYSDK_OFFSET(0xB788850)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISPERCEIVED_OFFSET UNITYSDK_OFFSET(0xB788A60)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0xB788930)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_MAXALERTVALUE_OFFSET UNITYSDK_OFFSET(0xB788A10)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_NPCINCAMERA_OFFSET UNITYSDK_OFFSET(0xB7888F0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET UNITYSDK_OFFSET(0xB7888A0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERHIDE_OFFSET UNITYSDK_OFFSET(0xB7888E0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOTION_OFFSET UNITYSDK_OFFSET(0xB788920)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOVING_OFFSET UNITYSDK_OFFSET(0xB788910)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_SEEPLAYER_OFFSET UNITYSDK_OFFSET(0xB788900)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET UNITYSDK_OFFSET(0xB7888C0)
#define RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET UNITYSDK_OFFSET(0xB785630)
#define RPG_GAMECORE_TRACKNPCMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0xB787900)
#define RPG_GAMECORE_TRACKNPCMODULE_ONRESET_OFFSET UNITYSDK_OFFSET(0xB787CF0)
#define RPG_GAMECORE_TRACKNPCMODULE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB787A80)
#define RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET UNITYSDK_OFFSET(0xB788460)
#define RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET UNITYSDK_OFFSET(0xB788090)
#define RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0xB788940)
#define RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET UNITYSDK_OFFSET(0xB785DF0)
#define RPG_GAMECORE_TRACKNPCMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB788AB0)
#define RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET UNITYSDK_OFFSET(0xB788740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcModule_TypeDefinitionIndex = 49333;

	class TrackNpcModule : public ::System::Object
	{
	public:
		// static const ::System::String* GameKeyHide; // 0x0
		// static const ::System::String* GameKeyAlert; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_4AD6CFDC15993F44*>* _Visions; // 0x10
		::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* _ZoneConfigs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AlertData; // 0x20
		::Il2CppArray<::System::String*>* _CheckVisionPoints; // 0x28
		::Class_2_4AD6CFDC15993F44* _LastDetectVision; // 0x30
		::RPG::GameCore::GameEntity* _Target; // 0x38
		::Class_2_A48F3719AA1CF200_7* _PerceiveValueMod; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _HideData; // 0x48
		::Class_2_D5F03C2010D71B1B* _AlertValueMod; // 0x50
		::Class_1_065C3F7CC6C5F3AA* _LastDetectionSingleResult; // 0x58
		::Class_2_A48F3719AA1CF200_8* _TrackValueMod; // 0x60
		::System::Boolean _SeePlayer; // 0x68
		::System::Boolean _PlayerMoving; // 0x69
		::System::Boolean _NpcInCamera; // 0x6A
		::System::Single _LostTargetTime_k__BackingField; // 0x6C
		::System::Single _AlertProtectDuration; // 0x70
		::RPG::GameCore::CharacterMotionFlag _PlayerMotion; // 0x74
		::System::Single _PerceiveTrigger; // 0x78
		::System::UInt32 ControllerGroupId; // 0x7C
		::RPG::GameCore::CharacterMotionFlag _LastMoveMotion; // 0x80
		::System::Single _CheckVisionRadius; // 0x84
		::System::Int32 _StartTime; // 0x88
		::System::Single _AlertProtectTimer; // 0x8C
		::System::Boolean _Enable; // 0x90
		::System::Boolean _PlayerHide; // 0x91

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE__CTOR_OFFSET))(this);
		}

		::System::Void InitParams(::RPG::GameCore::GameEntity* target, ::System::Single maxPerceiveValue, ::System::Single maxAlertValue, ::System::Single maxTrackValue, ::Il2CppArray<::System::String*>* visions, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* zoneConfigs, ::Il2CppArray<::System::String*>* checkPoints, ::System::Single checkRadius, ::System::Single alertProtectTime, ::System::Single lostTargetTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>*, ::Il2CppArray<::System::String*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET))(this, target, maxPerceiveValue, maxAlertValue, maxTrackValue, visions, zoneConfigs, checkPoints, checkRadius, alertProtectTime, lostTargetTime);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Detect(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET))(this, target);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONINIT_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONSTART_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONRESET_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DISABLE_OFFSET))(this);
		}

		::System::Void SetPlayerHide(::System::Boolean flag, ::RPG::GameCore::GameEntity* relateProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET))(this, flag, relateProp);
		}

		::System::Void ReportAlertData(::System::Boolean alertReachMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET))(this, alertReachMax);
		}

		::System::Void _OnPerceiveValueReachMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET))(this);
		}

		::System::Void AddPerceiveTrigger(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET))(this, value);
		}

		static ::System::Boolean CheckEntityOnScreen(::RPG::GameCore::GameEntity* target, ::Il2CppArray<::System::String*>* attachPoints, ::System::Single unitRadius)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET))(target, attachPoints, unitRadius);
		}

		::RPG::GameCore::VisionZoneTag GetDetectVisionZoneTag()
		{
			return ((::RPG::GameCore::VisionZoneTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET))(this);
		}

		::System::Boolean get_IsLosingTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET))(this);
		}

		::Class_2_A48F3719AA1CF200_7* get_PerceiveValueMod()
		{
			return ((::Class_2_A48F3719AA1CF200_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET))(this);
		}

		::Class_2_D5F03C2010D71B1B* get_AlertValueMod()
		{
			return ((::Class_2_D5F03C2010D71B1B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET))(this);
		}

		::Class_2_A48F3719AA1CF200_8* get_TrackValueMod()
		{
			return ((::Class_2_A48F3719AA1CF200_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISENABLE_OFFSET))(this);
		}

		::System::Boolean get_PlayerHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERHIDE_OFFSET))(this);
		}

		::System::Boolean get_NpcInCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_NPCINCAMERA_OFFSET))(this);
		}

		::System::Boolean get_SeePlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_SEEPLAYER_OFFSET))(this);
		}

		::System::Boolean get_PlayerMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOVING_OFFSET))(this);
		}

		::RPG::GameCore::CharacterMotionFlag get_PlayerMotion()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOTION_OFFSET))(this);
		}

		::System::Single get_LostTargetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_LOSTTARGETTIME_OFFSET))(this);
		}

		::System::Void set_LostTargetTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET))(this, value);
		}

		::System::Single get_CurrentAlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_CURRENTALERTVALUE_OFFSET))(this);
		}

		::System::Single get_MaxAlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_MAXALERTVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPerceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISPERCEIVED_OFFSET))(this);
		}
	};
}
