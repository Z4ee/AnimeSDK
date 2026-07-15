#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

namespace System { class String; }

#define RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x19B09E60)
#define RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x19B0CFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToEndlessHintCommand_TypeDefinitionIndex = 60670;

	class ChimeraSettleToEndlessHintCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _ENDLESS_HINT_STATE_MAIN_PUZLLE_CUSTOM_STRING; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND__EXECUTEIMPL_OFFSET))(this);
		}
	};
}
