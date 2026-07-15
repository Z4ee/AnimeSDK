#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BAAD960)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAAD940)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BAAD970)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BAAD950)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAD980)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int GetFriendAtIndexOptions_TypeDefinitionIndex = 43768;

	class GetFriendAtIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::Int32 _Index_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_INDEX_OFFSET))(this, a1);
		}
	};
}
