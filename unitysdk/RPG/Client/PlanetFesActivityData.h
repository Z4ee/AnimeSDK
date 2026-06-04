#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PLANETFESACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC3F6620)
#define RPG_CLIENT_PLANETFESACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xC3F6420)
#define RPG_CLIENT_PLANETFESACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC3F62B0)
#define RPG_CLIENT_PLANETFESACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F6290)
#define RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC3F67D0)
#define RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xC3F6760)
#define RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC3F6700)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesActivityData_TypeDefinitionIndex = 57641;

	class PlanetFesActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _ID; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}
	};
}
