#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_REFRESHMAINCITYCLOCKMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11650C90)
#define MOLEMOLE_REFRESHMAINCITYCLOCKMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x11650C60)

namespace MoleMole
{
	inline static constexpr unsigned int RefreshMainCityClockMessage_TypeDefinitionIndex = 64687;

	class RefreshMainCityClockMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFRESHMAINCITYCLOCKMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFRESHMAINCITYCLOCKMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
