#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC6D7C50)
#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC6D7B50)
#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D7B40)
#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC6D7D50)
#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC6D7CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicBoxActivityPanelData_TypeDefinitionIndex = 62495;

	class RelicBoxActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}
	};
}
