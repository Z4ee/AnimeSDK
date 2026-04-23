#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xA6197E0)
#define RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6197C0)
#define RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xA619970)

namespace RPG::Client
{
	inline static constexpr unsigned int HighLevelCompanionMissionActivityData_TypeDefinitionIndex = 56840;

	class HighLevelCompanionMissionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _CurLastMissionID; // 0xA0
		::System::Boolean _Asked; // 0xA4
		::System::UInt32 CompanionMissionID; // 0xA8

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIGHLEVELCOMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET))(this, ID);
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
