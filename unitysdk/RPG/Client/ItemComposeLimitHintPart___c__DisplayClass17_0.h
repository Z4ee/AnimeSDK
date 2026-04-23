#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemComposeLimitHintPart; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6576C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS17_0___SETUPLISTENEROFHINTTOCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xA6577C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart___c__DisplayClass17_0_TypeDefinitionIndex = 60531;

	class ItemComposeLimitHintPart___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::ItemComposeLimitHintPart* __4__this; // 0x10
		::System::UInt32 composeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void __SetupListenerOfHintToCheck_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS17_0___SETUPLISTENEROFHINTTOCHECK_B__0_OFFSET))(this);
		}
	};
}
