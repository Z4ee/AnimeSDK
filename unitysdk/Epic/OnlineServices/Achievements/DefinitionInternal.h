#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class Definition; }
namespace Epic::OnlineServices::Achievements { class StatThresholds; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x2EF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_COMPLETIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3730)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x31B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3050)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x35D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x3B50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3470)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3310)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x39F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x3CB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_UNLOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x3890)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3DA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x2FA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_COMPLETIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x37E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3260)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3100)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3680)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x3C00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3520)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x33C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x3AA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3D90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x3D20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_UNLOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x3940)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int DefinitionInternal_TypeDefinitionIndex = 36778;

	struct alignas(8) DefinitionInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AchievementId; // 0x18
		::System::IntPtr m_DisplayName; // 0x20
		::System::IntPtr m_Description; // 0x28
		::System::IntPtr m_LockedDisplayName; // 0x30
		::System::IntPtr m_LockedDescription; // 0x38
		::System::IntPtr m_HiddenDescription; // 0x40
		::System::IntPtr m_CompletionDescription; // 0x48
		::System::IntPtr m_UnlockedIconId; // 0x50
		::System::IntPtr m_LockedIconId; // 0x58
		::System::Int32 m_IsHidden; // 0x60
		::System::Int32 m_StatThresholdsCount; // 0x64
		::System::IntPtr m_StatThresholds; // 0x68

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_LockedDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_LockedDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_LockedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LockedDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_HiddenDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_HIDDENDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_HiddenDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_HIDDENDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_CompletionDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_COMPLETIONDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_CompletionDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_COMPLETIONDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_UnlockedIconId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_UNLOCKEDICONID_OFFSET))(this);
		}

		::System::Void set_UnlockedIconId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_UNLOCKEDICONID_OFFSET))(this, value);
		}

		::System::String* get_LockedIconId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDICONID_OFFSET))(this);
		}

		::System::Void set_LockedIconId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDICONID_OFFSET))(this, value);
		}

		::System::Boolean get_IsHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_ISHIDDEN_OFFSET))(this);
		}

		::System::Void set_IsHidden(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ISHIDDEN_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* get_StatThresholds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_STATTHRESHOLDS_OFFSET))(this);
		}

		::System::Void set_StatThresholds(::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_STATTHRESHOLDS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::Definition* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::Definition*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
