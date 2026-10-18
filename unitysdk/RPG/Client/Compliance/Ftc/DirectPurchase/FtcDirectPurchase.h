#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchaseEntry; }
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class IFtcDirectPurchaseEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xCBADE90)
#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE_GET_ITEM__OFFSET UNITYSDK_OFFSET(0xCBADE70)
#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE_GET_RESBARPAGEKEY_OFFSET UNITYSDK_OFFSET(0xCBADE80)
#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCBADD10)

namespace RPG::Client::Compliance::Ftc::DirectPurchase
{
	inline static constexpr unsigned int FtcDirectPurchase_TypeDefinitionIndex = 74831;

	class FtcDirectPurchase : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchaseEntry*>* _EntriesReadOnly; // 0x10
		::System::String* _ResBarPageKey_k__BackingField; // 0x18
		::Il2CppArray<::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchaseEntry*>* _Entries; // 0x20
		::RPG::Client::ItemData* _Item__k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::ItemData* a1, ::System::String* a2, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchaseEntry*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchaseEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ItemData* get_Item_()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE_GET_ITEM__OFFSET))(this);
		}

		::System::String* get_ResBarPageKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE_GET_RESBARPAGEKEY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchaseEntry*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchaseEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASE_GET_ENTRIES_OFFSET))(this);
		}
	};
}
