#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraSettleCommand; }

#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B606220)
#define RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER___C__DISPLAYCLASS3_0__IMMEDIATELYEXECUTECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B606790)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandManager___c__DisplayClass3_0_TypeDefinitionIndex = 63521;

	class ChimeraSettleCommandManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::IChimeraSettleCommand* command; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ImmediatelyExecuteCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDMANAGER___C__DISPLAYCLASS3_0__IMMEDIATELYEXECUTECOMMAND_B__0_OFFSET))(this);
		}
	};
}
