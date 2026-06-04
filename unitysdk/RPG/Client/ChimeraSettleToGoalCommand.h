#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

namespace System { class String; }

#define RPG_CLIENT_CHIMERASETTLETOGOALCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B6700)
#define RPG_CLIENT_CHIMERASETTLETOGOALCOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9ED0)
#define RPG_CLIENT_CHIMERASETTLETOGOALCOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToGoalCommand_TypeDefinitionIndex = 59402;

	class ChimeraSettleToGoalCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _GOAL_STATE_MAIN_PUZLLE_CUSTOM_STRING; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOGOALCOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOGOALCOMMAND__EXECUTEIMPL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOGOALCOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET))(this);
		}
	};
}
