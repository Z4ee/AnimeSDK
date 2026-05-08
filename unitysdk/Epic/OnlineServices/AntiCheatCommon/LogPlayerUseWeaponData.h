#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/LogPlayerUseWeaponDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_ISMELEEATTACK_OFFSET UNITYSDK_OFFSET(0x1ADE62F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_ISPLAYERVIEWZOOMED_OFFSET UNITYSDK_OFFSET(0x1ADE62D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_PLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1ADE6270)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1ADE6290)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_PLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x1ADE62B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_WEAPONNAME_OFFSET UNITYSDK_OFFSET(0x1ADE6310)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_1_OFFSET UNITYSDK_OFFSET(0x1ADE6880)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_ISMELEEATTACK_OFFSET UNITYSDK_OFFSET(0x1ADE6300)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_ISPLAYERVIEWZOOMED_OFFSET UNITYSDK_OFFSET(0x1ADE62E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_OFFSET UNITYSDK_OFFSET(0x1ADE6330)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_PLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1ADE6280)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1ADE62A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_PLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x1ADE62C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_WEAPONNAME_OFFSET UNITYSDK_OFFSET(0x1ADE6320)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE69C0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerUseWeaponData_TypeDefinitionIndex = 34711;

	class LogPlayerUseWeaponData : public ::System::Object
	{
	public:
		::Epic::OnlineServices::AntiCheatCommon::Quat* _PlayerViewRotation_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::Vec3f* _PlayerPosition_k__BackingField; // 0x18
		::System::String* _WeaponName_k__BackingField; // 0x20
		::System::IntPtr _PlayerHandle_k__BackingField; // 0x28
		::System::Boolean _IsMeleeAttack_k__BackingField; // 0x30
		::System::Boolean _IsPlayerViewZoomed_k__BackingField; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PlayerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_PLAYERHANDLE_OFFSET))(this);
		}

		::System::Void set_PlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_PLAYERHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Vec3f* get_PlayerPosition()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Vec3f*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_PLAYERPOSITION_OFFSET))(this);
		}

		::System::Void set_PlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_PLAYERPOSITION_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Quat* get_PlayerViewRotation()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Quat*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_PLAYERVIEWROTATION_OFFSET))(this);
		}

		::System::Void set_PlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_PLAYERVIEWROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayerViewZoomed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_ISPLAYERVIEWZOOMED_OFFSET))(this);
		}

		::System::Void set_IsPlayerViewZoomed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_ISPLAYERVIEWZOOMED_OFFSET))(this, value);
		}

		::System::Boolean get_IsMeleeAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_ISMELEEATTACK_OFFSET))(this);
		}

		::System::Void set_IsMeleeAttack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_ISMELEEATTACK_OFFSET))(this, value);
		}

		::System::String* get_WeaponName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_GET_WEAPONNAME_OFFSET))(this);
		}

		::System::Void set_WeaponName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_WEAPONNAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONDATA_SET_1_OFFSET))(this, other);
		}
	};
}
