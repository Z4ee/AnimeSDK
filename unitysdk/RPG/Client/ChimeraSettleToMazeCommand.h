#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

#define RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xCC09D50)
#define RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xCC0D140)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToMazeCommand_TypeDefinitionIndex = 63527;

	class ChimeraSettleToMazeCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND__EXECUTEIMPL_OFFSET))(this);
		}
	};
}
