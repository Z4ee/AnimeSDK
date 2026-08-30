#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PUNKLORDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x17B4E100)
#define RPG_CLIENT_PUNKLORDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4E0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordActivityData_TypeDefinitionIndex = 61743;

	class PunkLordActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
