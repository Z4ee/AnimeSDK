#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x1D938BD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1D938BB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x1D938BE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1D938BC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D938BF0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetParameterOptions_TypeDefinitionIndex = 36379;

	class LobbySearchSetParameterOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::AttributeData* _Parameter_k__BackingField; // 0x10
		::Epic::OnlineServices::ComparisonOp _ComparisonOp_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::AttributeData* get_Parameter()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_GET_PARAMETER_OFFSET))(this);
		}

		::System::Void set_Parameter(::Epic::OnlineServices::Lobby::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_SET_PARAMETER_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ComparisonOp get_ComparisonOp()
		{
			return ((::Epic::OnlineServices::ComparisonOp(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET))(this);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET))(this, value);
		}
	};
}
