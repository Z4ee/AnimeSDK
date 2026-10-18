#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKDIRECTPURCHASEJUMPCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCBAE5B0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKDIRECTPURCHASEJUMPCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xCBAE5A0)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLinkDirectPurchaseJumpCommand_TypeDefinitionIndex = 74816;

	class FtcDropLinkDirectPurchaseJumpCommand : public ::System::Object
	{
	public:
		::System::UInt32 _ItemId; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKDIRECTPURCHASEJUMPCOMMAND__CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKDIRECTPURCHASEJUMPCOMMAND_EXECUTE_OFFSET))(this);
		}
	};
}
