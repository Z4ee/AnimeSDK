#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LightConeRecommendData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x997AE00)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0__REQUESTRECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x997AE80)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuide___c__DisplayClass5_0_TypeDefinitionIndex = 53223;

	class LightConeGrowthGuide___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRecommendData_b__0(::RPG::Client::LightConeRecommendData* bigData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0__REQUESTRECOMMENDDATA_B__0_OFFSET))(this, bigData);
		}
	};
}
