#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELMASTERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93A85A0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x93A3770)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GETORDEREDMASTER_OFFSET UNITYSDK_OFFSET(0x93ABC60)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x93ABC50)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GET_ISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x93AC2D0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GET_MASTERMONEY_OFFSET UNITYSDK_OFFSET(0x93AC2C0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SET_ISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x93AC2E0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SET_MASTERMONEY_OFFSET UNITYSDK_OFFSET(0x93ABE70)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERMONEY_OFFSET UNITYSDK_OFFSET(0x93ABE20)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_1_OFFSET UNITYSDK_OFFSET(0x93AC220)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_OFFSET UNITYSDK_OFFSET(0x93ABF20)
#define RPG_CLIENT_CHIMERADUELMASTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93A71A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelMasterInfo_TypeDefinitionIndex = 51443;

	class ChimeraDuelMasterInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterData*>* _DataDict; // 0x10
		::System::UInt32 _MasterMoney; // 0x18
		::System::Boolean _IsSkipConfirmDialog_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterData*>* get_DataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GET_DATADICT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* GetData(::System::UInt32 id)
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GETDATA_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterData*>* GetOrderedMaster()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GETORDEREDMASTER_OFFSET))(this);
		}

		::System::Void SyncMasterMoney(::System::UInt32 money)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERMONEY_OFFSET))(this, money);
		}

		::System::Void SyncMasterPurchased(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_OFFSET))(this, ids);
		}

		::System::Void SyncMasterPurchased_1(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_1_OFFSET))(this, id);
		}

		::System::UInt32 get_MasterMoney()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GET_MASTERMONEY_OFFSET))(this);
		}

		::System::Void set_MasterMoney(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SET_MASTERMONEY_OFFSET))(this, value);
		}

		::System::Boolean get_IsSkipConfirmDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GET_ISSKIPCONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void set_IsSkipConfirmDialog(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SET_ISSKIPCONFIRMDIALOG_OFFSET))(this, value);
		}
	};
}
