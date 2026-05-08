#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A9D3F00)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A9D3EE0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A9D3F10)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A9D3EF0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D3F20)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int GetFriendAtIndexOptions_TypeDefinitionIndex = 34323;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONS_SET_INDEX_OFFSET))(this, value);
		}
	};
}
