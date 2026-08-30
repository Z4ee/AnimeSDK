#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::KWS { class QueryAgeGateOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C49DE0)
#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCBDF0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryAgeGateOptionsInternal_TypeDefinitionIndex = 45929;

	struct alignas(4) QueryAgeGateOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::KWS::QueryAgeGateOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryAgeGateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
