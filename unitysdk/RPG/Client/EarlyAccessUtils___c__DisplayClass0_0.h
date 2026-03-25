#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_EARLYACCESSUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x952CE90)
#define RPG_CLIENT_EARLYACCESSUTILS___C__DISPLAYCLASS0_0__SHOWEARLYACCESSSWITCHDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x952D0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessUtils___c__DisplayClass0_0_TypeDefinitionIndex = 51699;

	class EarlyAccessUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEarlyAccessSwitchDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS___C__DISPLAYCLASS0_0__SHOWEARLYACCESSSWITCHDIALOG_B__0_OFFSET))(this);
		}
	};
}
