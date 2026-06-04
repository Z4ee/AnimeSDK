#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

#define RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B66B0)
#define RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9F80)
#define RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xB6B9FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToMazeCommand_TypeDefinitionIndex = 59403;

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

		::System::Void __iFixBaseProxy__ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOMAZECOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET))(this);
		}
	};
}
