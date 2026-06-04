#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class DeleteCacheOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x62610)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x62600)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x62470)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x62530)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DeleteCacheOptionsInternal_TypeDefinitionIndex = 42437;

	struct alignas(8) DeleteCacheOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
