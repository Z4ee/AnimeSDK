#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Compliance::Ftc::DropLink { class FtcDropLink; }
namespace RPG::Client::Compliance::Ftc::DropLink { class IFtcDropLinkJumpCommand; }
namespace System { class Action; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY_CREATEGACHACONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xCBA7320)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCBA6740)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY_GET__GACHASHOPID_OFFSET UNITYSDK_OFFSET(0xCBA73E0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY__CREATEFORGACHANORMALTOKEN_OFFSET UNITYSDK_OFFSET(0xCBA6940)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY__CREATEFORGACHAUPTOKEN_OFFSET UNITYSDK_OFFSET(0xCBA6E30)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA4890)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int GachaFtcDropLinkFactory_TypeDefinitionIndex = 74822;

	class GachaFtcDropLinkFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY_CREATE_OFFSET))(this, a1);
		}

		::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink* CreateGachaConfirmDialog(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink*(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY_CREATEGACHACONFIRMDIALOG_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink* _CreateForGachaNormalToken(::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand* a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink*(*)(::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY__CREATEFORGACHANORMALTOKEN_OFFSET))(a1);
		}

		static ::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink* _CreateForGachaUpToken(::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand* a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink*(*)(::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkJumpCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY__CREATEFORGACHAUPTOKEN_OFFSET))(a1);
		}

		static ::System::UInt32 get__GachaShopId()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY_GET__GACHASHOPID_OFFSET))();
		}
	};
}
