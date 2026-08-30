#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMainEntrance3DViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMainLimaoControl; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C549840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___C__DISPLAYCLASS3_0___SWITCHTOVIEWMODELWITHFADEINANDFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1C54A950)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl___c__DisplayClass3_0_TypeDefinitionIndex = 79044;

	class LimaoNewsMainLimaoControl___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* viewModel; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __SwitchToViewModelWithFadeInAndFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___C__DISPLAYCLASS3_0___SWITCHTOVIEWMODELWITHFADEINANDFADEOUT_B__0_OFFSET))(this);
		}
	};
}
