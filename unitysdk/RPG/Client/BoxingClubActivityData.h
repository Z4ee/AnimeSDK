#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xB442FD0)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWMAPGUIDEHINT_OFFSET UNITYSDK_OFFSET(0xB442F30)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB442BA0)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xB442B60)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB442980)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPGUIDEHINT_OFFSET UNITYSDK_OFFSET(0xB4430A0)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB443040)
#define RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xB442FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubActivityData_TypeDefinitionIndex = 57595;

	class BoxingClubActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockMissionList; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMapGuideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_ISSHOWMAPGUIDEHINT_OFFSET))(this);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowMapGuideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPGUIDEHINT_OFFSET))(this);
		}
	};
}
