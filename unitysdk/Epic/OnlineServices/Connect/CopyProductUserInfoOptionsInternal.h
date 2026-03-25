#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class CopyProductUserInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x304E0)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x303B0)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x302E0)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x30220)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyProductUserInfoOptionsInternal_TypeDefinitionIndex = 36445;

	struct alignas(8) CopyProductUserInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::CopyProductUserInfoOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
