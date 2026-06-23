#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class QueryFileListOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918560)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x918430)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9182A0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x918360)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int QueryFileListOptionsInternal_TypeDefinitionIndex = 35458;

	struct alignas(8) QueryFileListOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
