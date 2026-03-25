#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x865B5D0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int AddNotifyPermissionsUpdateReceivedOptions_TypeDefinitionIndex = 36224;

	class AddNotifyPermissionsUpdateReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
