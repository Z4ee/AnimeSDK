#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class DeleteDeviceIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x35720)
#define EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EB0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int DeleteDeviceIdOptionsInternal_TypeDefinitionIndex = 43088;

	struct alignas(4) DeleteDeviceIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Connect::DeleteDeviceIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::DeleteDeviceIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_DELETEDEVICEIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
