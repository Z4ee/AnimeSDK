#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageResult.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageSource.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseWeaponData; }
namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ATTACKERPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1C818B10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ATTACKERPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1C818B30)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ATTACKERPLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x1C818B50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C818CD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGERESULT_OFFSET UNITYSDK_OFFSET(0x1C818C70)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x1C818C30)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGETAKEN_OFFSET UNITYSDK_OFFSET(0x1C818BF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1C818C50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_HASLINEOFSIGHT_OFFSET UNITYSDK_OFFSET(0x1C818B90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_HEALTHREMAINING_OFFSET UNITYSDK_OFFSET(0x1C818C10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_HITBONEID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C818BD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ISCRITICALHIT_OFFSET UNITYSDK_OFFSET(0x1C818BB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ISHITSCANATTACK_OFFSET UNITYSDK_OFFSET(0x1C818B70)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_PLAYERUSEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x1C818C90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_TIMESINCEPLAYERUSEWEAPONMS_OFFSET UNITYSDK_OFFSET(0x1C818CB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_VICTIMPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1C818AB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_VICTIMPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1C818AD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_VICTIMPLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x1C818AF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ATTACKERPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1C818B20)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ATTACKERPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1C818B40)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ATTACKERPLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x1C818B60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C818CE0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGERESULT_OFFSET UNITYSDK_OFFSET(0x1C818C80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x1C818C40)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGETAKEN_OFFSET UNITYSDK_OFFSET(0x1C818C00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1C818C60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_HASLINEOFSIGHT_OFFSET UNITYSDK_OFFSET(0x1C818BA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_HEALTHREMAINING_OFFSET UNITYSDK_OFFSET(0x1C818C20)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_HITBONEID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C818BE0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ISCRITICALHIT_OFFSET UNITYSDK_OFFSET(0x1C818BC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ISHITSCANATTACK_OFFSET UNITYSDK_OFFSET(0x1C818B80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_PLAYERUSEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x1C818CA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_TIMESINCEPLAYERUSEWEAPONMS_OFFSET UNITYSDK_OFFSET(0x1C818CC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_VICTIMPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1C818AC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_VICTIMPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1C818AE0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_VICTIMPLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x1C818B00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C818CF0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerTakeDamageOptions_TypeDefinitionIndex = 36268;

	class LogPlayerTakeDamageOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::AntiCheatCommon::Quat* _AttackerPlayerViewRotation_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::Vec3f* _AttackerPlayerPosition_k__BackingField; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::Vec3f* _DamagePosition_k__BackingField; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* _PlayerUseWeaponData_k__BackingField; // 0x28
		::Epic::OnlineServices::AntiCheatCommon::Quat* _VictimPlayerViewRotation_k__BackingField; // 0x30
		::Epic::OnlineServices::AntiCheatCommon::Vec3f* _VictimPlayerPosition_k__BackingField; // 0x38
		::System::IntPtr _AttackerPlayerHandle_k__BackingField; // 0x40
		::System::IntPtr _VictimPlayerHandle_k__BackingField; // 0x48
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType _DamageType_k__BackingField; // 0x50
		::System::Single _DamageTaken_k__BackingField; // 0x54
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource _DamageSource_k__BackingField; // 0x58
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult _DamageResult_k__BackingField; // 0x5C
		::System::UInt32 _HitBoneId_DEPRECATED_k__BackingField; // 0x60
		::System::Single _HealthRemaining_k__BackingField; // 0x64
		::System::UInt32 _TimeSincePlayerUseWeaponMs_k__BackingField; // 0x68
		::System::Boolean _IsCriticalHit_k__BackingField; // 0x6C
		::System::Boolean _HasLineOfSight_k__BackingField; // 0x6D
		::System::Boolean _IsHitscanAttack_k__BackingField; // 0x6E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_VictimPlayerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_VICTIMPLAYERHANDLE_OFFSET))(this);
		}

		::System::Void set_VictimPlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_VICTIMPLAYERHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Vec3f* get_VictimPlayerPosition()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Vec3f*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_VICTIMPLAYERPOSITION_OFFSET))(this);
		}

		::System::Void set_VictimPlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_VICTIMPLAYERPOSITION_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Quat* get_VictimPlayerViewRotation()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Quat*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_VICTIMPLAYERVIEWROTATION_OFFSET))(this);
		}

		::System::Void set_VictimPlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_VICTIMPLAYERVIEWROTATION_OFFSET))(this, value);
		}

		::System::IntPtr get_AttackerPlayerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ATTACKERPLAYERHANDLE_OFFSET))(this);
		}

		::System::Void set_AttackerPlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ATTACKERPLAYERHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Vec3f* get_AttackerPlayerPosition()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Vec3f*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ATTACKERPLAYERPOSITION_OFFSET))(this);
		}

		::System::Void set_AttackerPlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ATTACKERPLAYERPOSITION_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Quat* get_AttackerPlayerViewRotation()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Quat*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ATTACKERPLAYERVIEWROTATION_OFFSET))(this);
		}

		::System::Void set_AttackerPlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ATTACKERPLAYERVIEWROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsHitscanAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ISHITSCANATTACK_OFFSET))(this);
		}

		::System::Void set_IsHitscanAttack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ISHITSCANATTACK_OFFSET))(this, value);
		}

		::System::Boolean get_HasLineOfSight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_HASLINEOFSIGHT_OFFSET))(this);
		}

		::System::Void set_HasLineOfSight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_HASLINEOFSIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCriticalHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_ISCRITICALHIT_OFFSET))(this);
		}

		::System::Void set_IsCriticalHit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_ISCRITICALHIT_OFFSET))(this, value);
		}

		::System::UInt32 get_HitBoneId_DEPRECATED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_HITBONEID_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_HitBoneId_DEPRECATED(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_HITBONEID_DEPRECATED_OFFSET))(this, value);
		}

		::System::Single get_DamageTaken()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGETAKEN_OFFSET))(this);
		}

		::System::Void set_DamageTaken(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGETAKEN_OFFSET))(this, value);
		}

		::System::Single get_HealthRemaining()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_HEALTHREMAINING_OFFSET))(this);
		}

		::System::Void set_HealthRemaining(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_HEALTHREMAINING_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource get_DamageSource()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGESOURCE_OFFSET))(this);
		}

		::System::Void set_DamageSource(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGESOURCE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType get_DamageType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGETYPE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult get_DamageResult()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGERESULT_OFFSET))(this);
		}

		::System::Void set_DamageResult(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGERESULT_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* get_PlayerUseWeaponData()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_PLAYERUSEWEAPONDATA_OFFSET))(this);
		}

		::System::Void set_PlayerUseWeaponData(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_PLAYERUSEWEAPONDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_TimeSincePlayerUseWeaponMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_TIMESINCEPLAYERUSEWEAPONMS_OFFSET))(this);
		}

		::System::Void set_TimeSincePlayerUseWeaponMs(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_TIMESINCEPLAYERUSEWEAPONMS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Vec3f* get_DamagePosition()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Vec3f*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_GET_DAMAGEPOSITION_OFFSET))(this);
		}

		::System::Void set_DamagePosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONS_SET_DAMAGEPOSITION_OFFSET))(this, value);
		}
	};
}
