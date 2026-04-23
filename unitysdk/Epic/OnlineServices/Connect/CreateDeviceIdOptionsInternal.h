#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class CreateDeviceIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2FD70)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2FC50)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x2FAD0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2FB80)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CreateDeviceIdOptionsInternal_TypeDefinitionIndex = 42275;

	struct alignas(8) CreateDeviceIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_DeviceModel; // 0x18

		::System::Void set_DeviceModel(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_DEVICEMODEL_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::CreateDeviceIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
