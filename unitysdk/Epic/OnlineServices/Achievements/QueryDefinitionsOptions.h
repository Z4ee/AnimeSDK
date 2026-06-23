#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_EPICUSERID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1BEE9030)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1BEE9050)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BEE9010)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_EPICUSERID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1BEE9040)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1BEE9060)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BEE9020)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE9070)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int QueryDefinitionsOptions_TypeDefinitionIndex = 36419;

	class QueryDefinitionsOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _HiddenAchievementIds_DEPRECATED_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _EpicUserId_DEPRECATED_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20

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
