#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_MUSEUMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9DB39F0)
#define RPG_CLIENT_MUSEUMACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x9DB39B0)
#define RPG_CLIENT_MUSEUMACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB39A0)
#define RPG_CLIENT_MUSEUMACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9DB3B20)
#define RPG_CLIENT_MUSEUMACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x9DB3AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumActivityData_TypeDefinitionIndex = 50006;

	class MuseumActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
