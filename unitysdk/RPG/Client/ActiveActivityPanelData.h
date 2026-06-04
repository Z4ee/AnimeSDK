#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA_GET_ACTIVEACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xB081920)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xB0818D0)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB081A50)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0818C0)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA__ISNEEDSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xB081A10)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA__ONACTIVITYOPENEDCUSTOM_OFFSET UNITYSDK_OFFSET(0xB081BF0)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xB081EB0)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB081F20)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY__ISNEEDSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xB081F10)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY__ONACTIVITYOPENEDCUSTOM_OFFSET UNITYSDK_OFFSET(0xB081F80)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityPanelData_TypeDefinitionIndex = 57576;

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

		::System::Boolean __iFixBaseProxy_IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy__IsNeedShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY__ISNEEDSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnActivityOpenedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___IFIXBASEPROXY__ONACTIVITYOPENEDCUSTOM_OFFSET))(this);
		}
	};
}
