#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PLANETFESACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9F7D090)
#define RPG_CLIENT_PLANETFESACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x9F7CE90)
#define RPG_CLIENT_PLANETFESACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9F7CD20)
#define RPG_CLIENT_PLANETFESACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7CD00)
#define RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9F7D260)
#define RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x9F7D1E0)
#define RPG_CLIENT_PLANETFESACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9F7D170)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesActivityData_TypeDefinitionIndex = 50012;

	class PlanetFesActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _ID; // 0xA0

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVITYDATA__CTOR_OFFSET))(this, id);
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
