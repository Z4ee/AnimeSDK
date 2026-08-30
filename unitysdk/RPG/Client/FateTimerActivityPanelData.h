#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_FATETIMERACTIVITYPANELDATA_CHECKANDMARKMISSINGVIDEO_OFFSET UNITYSDK_OFFSET(0xD03ED30)
#define RPG_CLIENT_FATETIMERACTIVITYPANELDATA_GETVIDEOIDCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xD03E910)
#define RPG_CLIENT_FATETIMERACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD03E900)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTimerActivityPanelData_TypeDefinitionIndex = 61717;

	class FateTimerActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETIMERACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetVideoIDCurrentLanguage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETIMERACTIVITYPANELDATA_GETVIDEOIDCURRENTLANGUAGE_OFFSET))(this);
		}

		::System::Boolean CheckAndMarkMissingVideo(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETIMERACTIVITYPANELDATA_CHECKANDMARKMISSINGVIDEO_OFFSET))(this, a1);
		}
	};
}
