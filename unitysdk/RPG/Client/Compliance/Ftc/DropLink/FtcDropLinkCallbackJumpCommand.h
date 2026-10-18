#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKCALLBACKJUMPCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCBA6230)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKCALLBACKJUMPCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA6220)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLinkCallbackJumpCommand_TypeDefinitionIndex = 74814;

	class FtcDropLinkCallbackJumpCommand : public ::System::Object
	{
	public:
		::System::Action* _Callback; // 0x10

		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKCALLBACKJUMPCOMMAND__CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKCALLBACKJUMPCOMMAND_EXECUTE_OFFSET))(this);
		}
	};
}
