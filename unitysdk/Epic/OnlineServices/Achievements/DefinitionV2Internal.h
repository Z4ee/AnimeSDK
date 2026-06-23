#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class DefinitionV2; }
namespace Epic::OnlineServices::Achievements { class StatThresholds; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9692A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x9683B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x968A90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x968EB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x968930)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9687D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_LOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x968D50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x969010)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_UNLOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x968670)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_UNLOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x968510)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_UNLOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x968BF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x969230)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x968460)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x968B40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x968F60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9689E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x968880)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_LOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x968E00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x969220)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x969100)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_UNLOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x968720)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_UNLOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9685C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_UNLOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x968CA0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int DefinitionV2Internal_TypeDefinitionIndex = 36388;

	struct alignas(8) DefinitionV2Internal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AchievementId; // 0x18
		::System::IntPtr m_UnlockedDisplayName; // 0x20
		::System::IntPtr m_UnlockedDescription; // 0x28
		::System::IntPtr m_LockedDisplayName; // 0x30
		::System::IntPtr m_LockedDescription; // 0x38
		::System::IntPtr m_FlavorText; // 0x40
		::System::IntPtr m_UnlockedIconURL; // 0x48
		::System::IntPtr m_LockedIconURL; // 0x50
		::System::Int32 m_IsHidden; // 0x58
		::System::UInt32 m_StatThresholdsCount; // 0x5C
		::System::IntPtr m_StatThresholds; // 0x60

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::String* get_UnlockedDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_UNLOCKEDDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_UnlockedDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_UNLOCKEDDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_UnlockedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_UNLOCKEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_UnlockedDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_UNLOCKEDDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_LockedDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_LOCKEDDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_LockedDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_LOCKEDDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_LockedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_LOCKEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LockedDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_LOCKEDDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_FlavorText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_FLAVORTEXT_OFFSET))(this);
		}

		::System::Void set_FlavorText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_FLAVORTEXT_OFFSET))(this, value);
		}

		::System::String* get_UnlockedIconURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_UNLOCKEDICONURL_OFFSET))(this);
		}

		::System::Void set_UnlockedIconURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_UNLOCKEDICONURL_OFFSET))(this, value);
		}

		::System::String* get_LockedIconURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_LOCKEDICONURL_OFFSET))(this);
		}

		::System::Void set_LockedIconURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_LOCKEDICONURL_OFFSET))(this, value);
		}

		::System::Boolean get_IsHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_ISHIDDEN_OFFSET))(this);
		}

		::System::Void set_IsHidden(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_ISHIDDEN_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* get_StatThresholds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_GET_STATTHRESHOLDS_OFFSET))(this);
		}

		::System::Void set_StatThresholds(::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_STATTHRESHOLDS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::DefinitionV2* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::DefinitionV2*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2INTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
