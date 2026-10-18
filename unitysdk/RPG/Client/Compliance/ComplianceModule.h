#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/PayProductResult.h"

namespace RPG::Client { class PayModule; }
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchaseRepository; }
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class IFtcDirectPurchaseEntry; }
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class IFtcDirectPurchaseRepository; }
namespace RPG::Client::Compliance::Ftc::DropLink { class FtcDropLinkRepository; }
namespace RPG::Client::Compliance::Ftc::DropLink { class IFtcDropLinkRepository; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_DOFTCDIRECTPURCHASE_OFFSET UNITYSDK_OFFSET(0xCBAC530)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_GET_FTCDIRECTPURCHASES_OFFSET UNITYSDK_OFFSET(0xCBACE50)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_GET_FTCDROPLINKS_OFFSET UNITYSDK_OFFSET(0xCBACE10)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_HASFTCDIRECTPURCHASE_OFFSET UNITYSDK_OFFSET(0xCBAC390)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_HASFTCDROPLINK_OFFSET UNITYSDK_OFFSET(0xCBAC1A0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCBACEB0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__ADDFTCNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCBACD40)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCBACF00)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCBACE90)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__INITFTC_OFFSET UNITYSDK_OFFSET(0xCBAC8F0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__ONGETRECHARGEITEM_OFFSET UNITYSDK_OFFSET(0xCBAC880)

namespace RPG::Client::Compliance
{
	inline static constexpr unsigned int ComplianceModule_TypeDefinitionIndex = 74810;

	class ComplianceModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Compliance::Ftc::DropLink::FtcDropLinkRepository* _FtcDropLinkRepository; // 0x10
		::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchaseRepository* _FtcDirectPurchaseRepository; // 0x18
		::RPG::Client::PayModule* _PayModule; // 0x20
		::System::Boolean _HasPendingFtcDirectPurchase; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean HasFtcDropLink(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_HASFTCDROPLINK_OFFSET))(this, a1);
		}

		::System::Boolean HasFtcDirectPurchase(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_HASFTCDIRECTPURCHASE_OFFSET))(this, a1);
		}

		::System::Void DoFtcDirectPurchase(::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchaseEntry* a1, ::System::Action_1<::RPG::Client::PayProductResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchaseEntry*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_DOFTCDIRECTPURCHASE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetRechargeItem(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__ONGETRECHARGEITEM_OFFSET))(this, a1);
		}

		::System::Void _InitFtc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__INITFTC_OFFSET))(this);
		}

		::System::Void _AddFtcNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__ADDFTCNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkRepository* get_FtcDropLinks()
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_GET_FTCDROPLINKS_OFFSET))(this);
		}

		::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchaseRepository* get_FtcDirectPurchases()
		{
			return ((::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchaseRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_GET_FTCDIRECTPURCHASES_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
