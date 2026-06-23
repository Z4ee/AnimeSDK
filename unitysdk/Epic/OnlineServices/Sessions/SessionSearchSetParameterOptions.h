#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x1C724C40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1C724C20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x1C724C50)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1C724C30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C724C60)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetParameterOptions_TypeDefinitionIndex = 35157;

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

		::System::Void set_Parameter(::Epic::OnlineServices::Sessions::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_PARAMETER_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ComparisonOp get_ComparisonOp()
		{
			return ((::Epic::OnlineServices::ComparisonOp(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET))(this);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET))(this, value);
		}
	};
}
