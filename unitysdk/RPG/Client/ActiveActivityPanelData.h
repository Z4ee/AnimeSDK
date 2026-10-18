#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA_GET_ACTIVEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xC3B4D70)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xC3B4D20)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC3B4EA0)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B4D10)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA__ISNEEDSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xC3B4E60)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA__ONACTIVITYOPENEDCUSTOM_OFFSET UNITYSDK_OFFSET(0xC3B5040)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityPanelData_TypeDefinitionIndex = 61575;

	class ActiveActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Boolean _IsRenownUnlock; // 0xA0
		::System::Boolean _IsActivityUnlock; // 0xA1

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean _IsNeedShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA__ISNEEDSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _OnActivityOpenedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA__ONACTIVITYOPENEDCUSTOM_OFFSET))(this);
		}

		::RPG::Client::ActiveActivityData* get_ActiveActivityData()
		{
			return ((::RPG::Client::ActiveActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA_GET_ACTIVEACTIVITYDATA_OFFSET))(this);
		}
	};
}
