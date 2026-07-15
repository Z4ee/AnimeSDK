#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class CreateDeviceIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A511A0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A51190)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x3A51010)
#define EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A510C0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CreateDeviceIdOptionsInternal_TypeDefinitionIndex = 43939;

	struct alignas(8) CreateDeviceIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_DeviceModel; // 0x18

		::System::Void set_DeviceModel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_DEVICEMODEL_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::CreateDeviceIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEDEVICEIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
