#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/DefinitionInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Achievements { class StatThresholds; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1D378730)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_COMPLETIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D3787F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D378770)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D378750)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D3787D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x1D378850)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D3787B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D378790)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_LOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x1D378830)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x1D378870)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_UNLOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x1D378810)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_1_OFFSET UNITYSDK_OFFSET(0x1D379580)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1D378740)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_COMPLETIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D378800)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D378780)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D378760)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_HIDDENDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D3787E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x1D378860)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D3787C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D3787A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_LOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x1D378840)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_OFFSET UNITYSDK_OFFSET(0x1D378890)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x1D378880)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_UNLOCKEDICONID_OFFSET UNITYSDK_OFFSET(0x1D378820)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D379700)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int Definition_TypeDefinitionIndex = 37044;

	class Definition : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* _StatThresholds_k__BackingField; // 0x10
		::System::String* _DisplayName_k__BackingField; // 0x18
		::System::String* _LockedDescription_k__BackingField; // 0x20
		::System::String* _Description_k__BackingField; // 0x28
		::System::String* _UnlockedIconId_k__BackingField; // 0x30
		::System::String* _AchievementId_k__BackingField; // 0x38
		::System::String* _LockedIconId_k__BackingField; // 0x40
		::System::String* _CompletionDescription_k__BackingField; // 0x48
		::System::String* _HiddenDescription_k__BackingField; // 0x50
		::System::String* _LockedDisplayName_k__BackingField; // 0x58
		::System::Boolean _IsHidden_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION__CTOR_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_LockedDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_LOCKEDDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_LockedDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_LOCKEDDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_LockedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_LOCKEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LockedDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_LOCKEDDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_HiddenDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_HIDDENDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_HiddenDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_HIDDENDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_CompletionDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_COMPLETIONDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_CompletionDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_COMPLETIONDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_UnlockedIconId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_UNLOCKEDICONID_OFFSET))(this);
		}

		::System::Void set_UnlockedIconId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_UNLOCKEDICONID_OFFSET))(this, value);
		}

		::System::String* get_LockedIconId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_LOCKEDICONID_OFFSET))(this);
		}

		::System::Void set_LockedIconId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_LOCKEDICONID_OFFSET))(this, value);
		}

		::System::Boolean get_IsHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_ISHIDDEN_OFFSET))(this);
		}

		::System::Void set_IsHidden(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_ISHIDDEN_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* get_StatThresholds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_GET_STATTHRESHOLDS_OFFSET))(this);
		}

		::System::Void set_StatThresholds(::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_STATTHRESHOLDS_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITION_SET_1_OFFSET))(this, other);
		}
	};
}
