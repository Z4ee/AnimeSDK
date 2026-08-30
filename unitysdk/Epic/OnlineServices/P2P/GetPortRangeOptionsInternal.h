#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class GetPortRangeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5F660)
#define EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EC0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetPortRangeOptionsInternal_TypeDefinitionIndex = 45564;

	struct alignas(4) GetPortRangeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::P2P::GetPortRangeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::GetPortRangeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
