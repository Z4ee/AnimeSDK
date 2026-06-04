#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class Definition; }
namespace Epic::OnlineServices::Achievements { class StatThresholds; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x41E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x32B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_COMPLETIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3AF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3570)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3410)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3990)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x3F10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3830)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x36D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x3DB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x4070)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_UNLOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x3C50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4160)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x3360)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_COMPLETIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3BA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3620)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x34C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3A40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x3FC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x38E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3780)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x3E60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4150)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x40E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_UNLOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x3D00)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int DefinitionInternal_TypeDefinitionIndex = 43407;

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

		::System::Void set_AchievementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_LockedDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_LockedDisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* get_LockedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LockedDescription(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDDESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_HiddenDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_HIDDENDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_HiddenDescription(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_HIDDENDESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_CompletionDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_COMPLETIONDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_CompletionDescription(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_COMPLETIONDESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_UnlockedIconId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_UNLOCKEDICONID_OFFSET))(this);
		}

		::System::Void set_UnlockedIconId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_UNLOCKEDICONID_OFFSET))(this, a1);
		}

		::System::String* get_LockedIconId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_LOCKEDICONID_OFFSET))(this);
		}

		::System::Void set_LockedIconId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_LOCKEDICONID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_ISHIDDEN_OFFSET))(this);
		}

		::System::Void set_IsHidden(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_ISHIDDEN_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* get_StatThresholds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_GET_STATTHRESHOLDS_OFFSET))(this);
		}

		::System::Void set_StatThresholds(::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_STATTHRESHOLDS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::Definition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::Definition*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
