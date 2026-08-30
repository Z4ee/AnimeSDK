#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x17986190)
#define RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x179860B0)
#define RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x179860A0)
#define RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA__ISSHOWPHASEQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x179860F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentMuseumActivityData_TypeDefinitionIndex = 61853;

	class ResidentMuseumActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		static ::System::Boolean _IsShowPhaseQuestRewardRedDot()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSEUMACTIVITYDATA__ISSHOWPHASEQUESTREWARDREDDOT_OFFSET))();
		}
	};
}
