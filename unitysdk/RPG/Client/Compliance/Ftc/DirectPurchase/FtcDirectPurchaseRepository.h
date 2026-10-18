#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355B6F4012CB64BA;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class IFtcDirectPurchase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xCBA40D0)
#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA4960)

namespace RPG::Client::Compliance::Ftc::DirectPurchase
{
	inline static constexpr unsigned int FtcDirectPurchaseRepository_TypeDefinitionIndex = 74833;

	class FtcDirectPurchaseRepository : public ::System::Object
	{
	public:
		::Class_1_355B6F4012CB64BA* _Factory; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*>* _Cached; // 0x18

		::System::Void _ctor(::Class_1_355B6F4012CB64BA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355B6F4012CB64BA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchase* Get(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY_GET_OFFSET))(this, a1);
		}
	};
}
