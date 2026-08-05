#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_EPICUSERID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1D25AEF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1D25AF10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D25AED0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_EPICUSERID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1D25AF00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1D25AF20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D25AEE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D25AF30)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int QueryDefinitionsOptions_TypeDefinitionIndex = 37078;

	class QueryDefinitionsOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _HiddenAchievementIds_DEPRECATED_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _EpicUserId_DEPRECATED_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_EpicUserId_DEPRECATED()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_EPICUSERID_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_EpicUserId_DEPRECATED(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_EPICUSERID_DEPRECATED_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_HiddenAchievementIds_DEPRECATED()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_HiddenAchievementIds_DEPRECATED(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET))(this, value);
		}
	};
}
