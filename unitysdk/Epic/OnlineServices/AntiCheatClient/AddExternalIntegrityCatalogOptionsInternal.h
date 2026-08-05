#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class AddExternalIntegrityCatalogOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EAE30)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9EAD10)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9EAC40)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_SET_PATHTOBINFILE_OFFSET UNITYSDK_OFFSET(0x9EAB90)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddExternalIntegrityCatalogOptionsInternal_TypeDefinitionIndex = 36956;

	struct alignas(8) AddExternalIntegrityCatalogOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PathToBinFile; // 0x18

		::System::Void set_PathToBinFile(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_SET_PATHTOBINFILE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
