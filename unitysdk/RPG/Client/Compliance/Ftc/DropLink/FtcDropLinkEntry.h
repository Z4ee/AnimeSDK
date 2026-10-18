#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Compliance::Ftc::DropLink { class IFtcDropLinkJumpCommand; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCBAE910)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_ISDISCOUNT_OFFSET UNITYSDK_OFFSET(0xCBAE920)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_JUMPCOMMAND_OFFSET UNITYSDK_OFFSET(0xCBAE930)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCBAE8B0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCBAE820)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xCBAE720)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLinkEntry_TypeDefinitionIndex = 74817;

	class FtcDropLinkEntry : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Func_1<::System::String*>* _NameProvider; // 0x18
		::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand* _JumpCommand_k__BackingField; // 0x20
		::System::Boolean _IsDiscount_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::TextID a1, ::System::String* a2, ::System::Boolean a3, ::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*, ::System::Boolean, ::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Func_1<::System::String*>* a1, ::System::String* a2, ::System::Boolean a3, ::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*, ::System::String*, ::System::Boolean, ::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsDiscount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_ISDISCOUNT_OFFSET))(this);
		}

		::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand* get_JumpCommand()
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY_GET_JUMPCOMMAND_OFFSET))(this);
		}
	};
}
