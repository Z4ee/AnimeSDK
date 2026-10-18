#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOJUMPCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCBAEA00)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOJUMPCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xCBAE9F0)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLinkGotoJumpCommand_TypeDefinitionIndex = 74821;

	class FtcDropLinkGotoJumpCommand : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _GotoParams; // 0x10
		::System::UInt32 _GotoId; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOJUMPCOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOJUMPCOMMAND_EXECUTE_OFFSET))(this);
		}
	};
}
