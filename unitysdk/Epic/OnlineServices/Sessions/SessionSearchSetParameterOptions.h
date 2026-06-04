#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0xA0ED100)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0xA0ED0E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0xA0ED110)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0xA0ED0F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0ED120)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetParameterOptions_TypeDefinitionIndex = 42178;

	class SessionSearchSetParameterOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Sessions::AttributeData* _Parameter_k__BackingField; // 0x10
		::Epic::OnlineServices::ComparisonOp _ComparisonOp_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Sessions::AttributeData* get_Parameter()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_GET_PARAMETER_OFFSET))(this);
		}

		::System::Void set_Parameter(::Epic::OnlineServices::Sessions::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_PARAMETER_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ComparisonOp get_ComparisonOp()
		{
			return ((::Epic::OnlineServices::ComparisonOp(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET))(this);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET))(this, a1);
		}
	};
}
