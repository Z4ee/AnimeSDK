#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4B550)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int DeleteDeviceIdOptions_TypeDefinitionIndex = 36725;

	class DeleteDeviceIdOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
