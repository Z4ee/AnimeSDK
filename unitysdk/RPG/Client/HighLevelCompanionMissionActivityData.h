#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xBD1D8F0)
#define RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD1D8D0)
#define RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xBD1DA40)

namespace RPG::Client
{
	inline static constexpr unsigned int HighLevelCompanionMissionActivityData_TypeDefinitionIndex = 57627;

	class HighLevelCompanionMissionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 CompanionMissionID; // 0xA0
		::System::UInt32 _CurLastMissionID; // 0xA4
		::System::Boolean _Asked; // 0xA8

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET))(this);
		}
	};
}
