#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageResult.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageSource.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerTakeDamageOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseWeaponData; }
namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C3B2C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C3B240)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ATTACKERPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x3A13A80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ATTACKERPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x3C3AE10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ATTACKERPLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x3C3AE80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x3C3B1C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGERESULT_OFFSET UNITYSDK_OFFSET(0x3C019F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x3C3B120)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGETAKEN_OFFSET UNITYSDK_OFFSET(0x3C3B100)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x3C3B130)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_HASLINEOFSIGHT_OFFSET UNITYSDK_OFFSET(0x3C3AFA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_HEALTHREMAINING_OFFSET UNITYSDK_OFFSET(0x3C3B110)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_HITBONEID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x3C00B10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ISCRITICALHIT_OFFSET UNITYSDK_OFFSET(0x3C3B050)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ISHITSCANATTACK_OFFSET UNITYSDK_OFFSET(0x3C3AEF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C3B230)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_PLAYERUSEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x3C3B140)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_TIMESINCEPLAYERUSEWEAPONMS_OFFSET UNITYSDK_OFFSET(0x3C3B1B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_VICTIMPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x869800)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_VICTIMPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x3C3AD30)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_VICTIMPLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x3C3ADA0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerTakeDamageOptionsInternal_TypeDefinitionIndex = 46333;

	struct alignas(8) LogPlayerTakeDamageOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_VictimPlayerHandle; // 0x18
		::System::IntPtr m_VictimPlayerPosition; // 0x20
		::System::IntPtr m_VictimPlayerViewRotation; // 0x28
		::System::IntPtr m_AttackerPlayerHandle; // 0x30
		::System::IntPtr m_AttackerPlayerPosition; // 0x38
		::System::IntPtr m_AttackerPlayerViewRotation; // 0x40
		::System::Int32 m_IsHitscanAttack; // 0x48
		::System::Int32 m_HasLineOfSight; // 0x4C
		::System::Int32 m_IsCriticalHit; // 0x50
		::System::UInt32 m_HitBoneId_DEPRECATED; // 0x54
		::System::Single m_DamageTaken; // 0x58
		::System::Single m_HealthRemaining; // 0x5C
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource m_DamageSource; // 0x60
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType m_DamageType; // 0x64
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult m_DamageResult; // 0x68
		::System::IntPtr m_PlayerUseWeaponData; // 0x70
		::System::UInt32 m_TimeSincePlayerUseWeaponMs; // 0x78
		::System::IntPtr m_DamagePosition; // 0x80

		::System::Void set_VictimPlayerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_VICTIMPLAYERHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_VictimPlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_VICTIMPLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void set_VictimPlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_VICTIMPLAYERVIEWROTATION_OFFSET))(this, a1);
		}

		::System::Void set_AttackerPlayerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ATTACKERPLAYERHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_AttackerPlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ATTACKERPLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void set_AttackerPlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ATTACKERPLAYERVIEWROTATION_OFFSET))(this, a1);
		}

		::System::Void set_IsHitscanAttack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ISHITSCANATTACK_OFFSET))(this, a1);
		}

		::System::Void set_HasLineOfSight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_HASLINEOFSIGHT_OFFSET))(this, a1);
		}

		::System::Void set_IsCriticalHit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_ISCRITICALHIT_OFFSET))(this, a1);
		}

		::System::Void set_HitBoneId_DEPRECATED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_HITBONEID_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Void set_DamageTaken(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGETAKEN_OFFSET))(this, a1);
		}

		::System::Void set_HealthRemaining(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_HEALTHREMAINING_OFFSET))(this, a1);
		}

		::System::Void set_DamageSource(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGESOURCE_OFFSET))(this, a1);
		}

		::System::Void set_DamageType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGETYPE_OFFSET))(this, a1);
		}

		::System::Void set_DamageResult(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGERESULT_OFFSET))(this, a1);
		}

		::System::Void set_PlayerUseWeaponData(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_PLAYERUSEWEAPONDATA_OFFSET))(this, a1);
		}

		::System::Void set_TimeSincePlayerUseWeaponMs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_TIMESINCEPLAYERUSEWEAPONMS_OFFSET))(this, a1);
		}

		::System::Void set_DamagePosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_DAMAGEPOSITION_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTAKEDAMAGEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
