#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8700980)
#define EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8700990)
#define EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x87009A0)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int GetPlayerSanctionCountOptions_TypeDefinitionIndex = 35572;

	class GetPlayerSanctionCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_GETPLAYERSANCTIONCOUNTOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
