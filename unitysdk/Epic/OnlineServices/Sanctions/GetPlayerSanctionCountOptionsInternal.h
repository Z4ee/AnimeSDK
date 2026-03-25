#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sanctions { class GetPlayerSanctionCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x705C0)
#define EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x70490)
#define EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x703C0)
#define EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x70300)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int GetPlayerSanctionCountOptionsInternal_TypeDefinitionIndex = 35573;

	struct alignas(8) GetPlayerSanctionCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
