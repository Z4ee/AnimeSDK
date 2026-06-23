#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONS_GET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1BEFCB60)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONS_SET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1BEFCB70)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFCB80)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CreateDeviceIdOptions_TypeDefinitionIndex = 36056;

	class CreateDeviceIdOptions : public ::System::Object
	{
	public:
		::System::String* _DeviceModel_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_DeviceModel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONS_GET_DEVICEMODEL_OFFSET))(this);
		}

		::System::Void set_DeviceModel(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONS_SET_DEVICEMODEL_OFFSET))(this, value);
		}
	};
}
