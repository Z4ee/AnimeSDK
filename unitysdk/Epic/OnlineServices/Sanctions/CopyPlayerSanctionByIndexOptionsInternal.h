#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sanctions { class CopyPlayerSanctionByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA32B10)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA32B00)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA32A20)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_SANCTIONINDEX_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA32960)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int CopyPlayerSanctionByIndexOptionsInternal_TypeDefinitionIndex = 35838;

	struct alignas(8) CopyPlayerSanctionByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::UInt32 m_SanctionIndex; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_SanctionIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_SANCTIONINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
