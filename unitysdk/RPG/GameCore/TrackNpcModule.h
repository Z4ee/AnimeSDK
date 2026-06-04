#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/System/Object.h"

class Class_1_6C30C65EACF8D014;
class Class_2_4AD6CFDC15993F44;
class Class_2_A48F3719AA1CF200_6;
class Class_2_A48F3719AA1CF200_7;
class Class_2_D5F03C2010D71B1B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET UNITYSDK_OFFSET(0xCF2CBF0)
#define RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET UNITYSDK_OFFSET(0xCF2ACD0)
#define RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET UNITYSDK_OFFSET(0xCF2A080)
#define RPG_GAMECORE_TRACKNPCMODULE_DISABLE_OFFSET UNITYSDK_OFFSET(0xCF2C4C0)
#define RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF2A030)
#define RPG_GAMECORE_TRACKNPCMODULE_ENABLE_OFFSET UNITYSDK_OFFSET(0xCF2C480)
#define RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET UNITYSDK_OFFSET(0xCF2CC60)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET UNITYSDK_OFFSET(0xCF2CD10)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_CURRENTALERTVALUE_OFFSET UNITYSDK_OFFSET(0xCF2CDB0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xCF2CD30)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET UNITYSDK_OFFSET(0xCF2CCB0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISPERCEIVED_OFFSET UNITYSDK_OFFSET(0xCF2CEC0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0xCF2CD90)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_MAXALERTVALUE_OFFSET UNITYSDK_OFFSET(0xCF2CE70)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_NPCINCAMERA_OFFSET UNITYSDK_OFFSET(0xCF2CD50)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET UNITYSDK_OFFSET(0xCF2CD00)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERHIDE_OFFSET UNITYSDK_OFFSET(0xCF2CD40)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOTION_OFFSET UNITYSDK_OFFSET(0xCF2CD80)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOVING_OFFSET UNITYSDK_OFFSET(0xCF2CD70)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_SEEPLAYER_OFFSET UNITYSDK_OFFSET(0xCF2CD60)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET UNITYSDK_OFFSET(0xCF2CD20)
#define RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET UNITYSDK_OFFSET(0xCF29AC0)
#define RPG_GAMECORE_TRACKNPCMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0xCF2BD10)
#define RPG_GAMECORE_TRACKNPCMODULE_ONRESET_OFFSET UNITYSDK_OFFSET(0xCF2C170)
#define RPG_GAMECORE_TRACKNPCMODULE_ONSTART_OFFSET UNITYSDK_OFFSET(0xCF2BE90)
#define RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET UNITYSDK_OFFSET(0xCF2C8C0)
#define RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET UNITYSDK_OFFSET(0xCF2C500)
#define RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0xCF2CDA0)
#define RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET UNITYSDK_OFFSET(0xCF2A270)
#define RPG_GAMECORE_TRACKNPCMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF2CF10)
#define RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET UNITYSDK_OFFSET(0xCF2CBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcModule_TypeDefinitionIndex = 50000;

	class TrackNpcModule : public ::System::Object
	{
	public:
		// static const ::System::String* GameKeyHide; // 0x0
		// static const ::System::String* GameKeyAlert; // 0x0
		::Class_2_D5F03C2010D71B1B* _AlertValueMod; // 0x10
		::RPG::GameCore::GameEntity* _Target; // 0x18
		::Il2CppArray<::System::String*>* _CheckVisionPoints; // 0x20
		::Class_1_6C30C65EACF8D014* _LastDetectionSingleResult; // 0x28
		::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* _ZoneConfigs; // 0x30
		::Class_2_4AD6CFDC15993F44* _LastDetectVision; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_4AD6CFDC15993F44*>* _Visions; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AlertData; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _HideData; // 0x50
		::Class_2_A48F3719AA1CF200_7* _TrackValueMod; // 0x58
		::Class_2_A48F3719AA1CF200_6* _PerceiveValueMod; // 0x60
		::System::Single _AlertProtectDuration; // 0x68
		::System::Single _PerceiveTrigger; // 0x6C
		::RPG::GameCore::CharacterMotionFlag _PlayerMotion; // 0x70
		::System::Int32 _StartTime; // 0x74
		::System::UInt32 ControllerGroupId; // 0x78
		::System::Boolean _Enable; // 0x7C
		::System::Boolean _PlayerMoving; // 0x7D
		::RPG::GameCore::CharacterMotionFlag _LastMoveMotion; // 0x80
		::System::Boolean _SeePlayer; // 0x84
		::System::Boolean _PlayerHide; // 0x85
		::System::Boolean _NpcInCamera; // 0x86
		::System::Single _LostTargetTime_k__BackingField; // 0x88
		::System::Single _AlertProtectTimer; // 0x8C
		::System::Single _CheckVisionRadius; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE__CTOR_OFFSET))(this);
		}

		::System::Void InitParams(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::System::String*>* a5, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* a6, ::Il2CppArray<::System::String*>* a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>*, ::Il2CppArray<::System::String*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Detect(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET))(this, a1);
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

		::System::Void SetPlayerHide(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET))(this, a1, a2);
		}

		::System::Void ReportAlertData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET))(this, a1);
		}

		::System::Void _OnPerceiveValueReachMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET))(this);
		}

		::System::Void AddPerceiveTrigger(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckEntityOnScreen(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET))(a1, a2, a3);
		}

		::RPG::GameCore::VisionZoneTag GetDetectVisionZoneTag()
		{
			return ((::RPG::GameCore::VisionZoneTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET))(this);
		}

		::System::Boolean get_IsLosingTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET))(this);
		}

		::Class_2_A48F3719AA1CF200_6* get_PerceiveValueMod()
		{
			return ((::Class_2_A48F3719AA1CF200_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET))(this);
		}

		::Class_2_D5F03C2010D71B1B* get_AlertValueMod()
		{
			return ((::Class_2_D5F03C2010D71B1B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET))(this);
		}

		::Class_2_A48F3719AA1CF200_7* get_TrackValueMod()
		{
			return ((::Class_2_A48F3719AA1CF200_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET))(this);
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

		::System::Void set_LostTargetTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET))(this, a1);
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
