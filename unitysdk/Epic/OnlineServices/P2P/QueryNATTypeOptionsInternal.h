#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class QueryNATTypeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5E550)
#define EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EB0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int QueryNATTypeOptionsInternal_TypeDefinitionIndex = 42550;

	struct alignas(4) QueryNATTypeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::P2P::QueryNATTypeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::QueryNATTypeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
