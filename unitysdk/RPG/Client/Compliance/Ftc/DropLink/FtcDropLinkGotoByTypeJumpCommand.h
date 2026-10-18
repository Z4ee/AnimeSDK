#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOBYTYPEJUMPCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCBA6690)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOBYTYPEJUMPCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA6680)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLinkGotoByTypeJumpCommand_TypeDefinitionIndex = 74819;

	class FtcDropLinkGotoByTypeJumpCommand : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _GotoParams; // 0x10
		::RPG::GameCore::GotoType _GotoType; // 0x18

		::System::Void _ctor(::RPG::GameCore::GotoType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GotoType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOBYTYPEJUMPCOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKGOTOBYTYPEJUMPCOMMAND_EXECUTE_OFFSET))(this);
		}
	};
}
