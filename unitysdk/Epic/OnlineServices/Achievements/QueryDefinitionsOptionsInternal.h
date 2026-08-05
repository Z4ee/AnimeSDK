#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class QueryDefinitionsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95DA10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x95D9A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_EPICUSERID_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x95D7B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x95D870)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x95D6F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x95D990)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int QueryDefinitionsOptionsInternal_TypeDefinitionIndex = 37079;

	struct alignas(8) QueryDefinitionsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_EpicUserId_DEPRECATED; // 0x20
		::System::IntPtr m_HiddenAchievementIds_DEPRECATED; // 0x28
		::System::UInt32 m_HiddenAchievementsCount_DEPRECATED; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_EpicUserId_DEPRECATED(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_EPICUSERID_DEPRECATED_OFFSET))(this, value);
		}

		::System::Void set_HiddenAchievementIds_DEPRECATED(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_HIDDENACHIEVEMENTIDS_DEPRECATED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::QueryDefinitionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYDEFINITIONSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
