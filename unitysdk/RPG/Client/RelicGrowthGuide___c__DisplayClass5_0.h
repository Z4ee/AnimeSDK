#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_RELICGROWTHGUIDE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A1B50)
#define RPG_CLIENT_RELICGROWTHGUIDE___C__DISPLAYCLASS5_0__REQUESTRECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA2A1BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuide___c__DisplayClass5_0_TypeDefinitionIndex = 53228;

	class RelicGrowthGuide___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRecommendData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__DISPLAYCLASS5_0__REQUESTRECOMMENDDATA_B__0_OFFSET))(this);
		}
	};
}
