#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E87B0)
#define RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E8660)
#define RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E84F0)
#define RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E7580)
#define RPG_CLIENT_ALLEYACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E73A0)
#define RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E8D30)
#define RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E8CD0)
#define RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E8C70)
#define RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB2E8C10)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyActivityData_TypeDefinitionIndex = 57590;

	class AlleyActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockMissionIDs; // 0xA0
		::System::Boolean _IsRenownUnlock; // 0xA8
		::System::Boolean _IsActivityUnlock; // 0xA9

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}
	};
}
