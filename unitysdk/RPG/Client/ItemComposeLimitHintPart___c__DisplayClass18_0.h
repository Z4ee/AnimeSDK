#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class ItemComposeLimitHintPart; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194E63D0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS18_0___SETUPLISTENEROFHINTTOSEE_B__0_OFFSET UNITYSDK_OFFSET(0x194E6510)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart___c__DisplayClass18_0_TypeDefinitionIndex = 65813;

	class ItemComposeLimitHintPart___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::ComposeItemData* composeData; // 0x10
		::RPG::Client::ItemComposeLimitHintPart* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __SetupListenerOfHintToSee_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS18_0___SETUPLISTENEROFHINTTOSEE_B__0_OFFSET))(this);
		}
	};
}
