#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class PlayerAction; }

#define RPG_CLIENT_INCONTROLACTIONDATA___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA629BB0)
#define RPG_CLIENT_INCONTROLACTIONDATA___C__DISPLAYCLASS30_0__SWITCHDEFAULTSUBMITANDCANCEL_B__0_OFFSET UNITYSDK_OFFSET(0xA62B980)

namespace RPG::Client
{
	inline static constexpr unsigned int InControlActionData___c__DisplayClass30_0_TypeDefinitionIndex = 56523;

	class InControlActionData___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::InControl::PlayerAction* closePageAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchDefaultSubmitAndCancel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA___C__DISPLAYCLASS30_0__SWITCHDEFAULTSUBMITANDCANCEL_B__0_OFFSET))(this);
		}
	};
}
