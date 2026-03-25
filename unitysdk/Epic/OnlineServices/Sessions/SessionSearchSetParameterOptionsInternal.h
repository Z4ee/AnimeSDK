#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }
namespace Epic::OnlineServices::Sessions { class SessionSearchSetParameterOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18810)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x18800)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x18780)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x18710)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetParameterOptionsInternal_TypeDefinitionIndex = 35550;

	struct alignas(8) SessionSearchSetParameterOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Parameter; // 0x18
		::Epic::OnlineServices::ComparisonOp m_ComparisonOp; // 0x20

		::System::Void set_Parameter(::Epic::OnlineServices::Sessions::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_PARAMETER_OFFSET))(this, value);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
