#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

namespace System { class String; }

#define RPG_CLIENT_CHIMERASETTLETOENTRANCECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x93CAB00)
#define RPG_CLIENT_CHIMERASETTLETOENTRANCECOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x93CDAF0)
#define RPG_CLIENT_CHIMERASETTLETOENTRANCECOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x93CDB60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToEntranceCommand_TypeDefinitionIndex = 51532;

	class ChimeraSettleToEntranceCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _MAIN_PUZZLE_CUSTOM_STRING; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOENTRANCECOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOENTRANCECOMMAND__EXECUTEIMPL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOENTRANCECOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET))(this);
		}
	};
}
