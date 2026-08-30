#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateSupportToastPart; }

#define RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD03E050)
#define RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS44_0___TRIGGERTRYENQUEUETOAST_B__0_OFFSET UNITYSDK_OFFSET(0xD03E620)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportToastPart___c__DisplayClass44_0_TypeDefinitionIndex = 64228;

	class FateSupportToastPart___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateSupportToastPart* __4__this; // 0x10
		::System::Boolean skipCheckAvatarReward; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void __TriggerTryEnqueueToast_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS44_0___TRIGGERTRYENQUEUETOAST_B__0_OFFSET))(this);
		}
	};
}
