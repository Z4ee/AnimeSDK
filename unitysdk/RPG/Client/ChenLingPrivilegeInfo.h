#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class ChenLingPrivilege; }
namespace RPG::Client { class ChenLingPrivilegeTreeNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB8B950)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_GETPERLINEPRIVILEGES_OFFSET UNITYSDK_OFFSET(0xCB8DB70)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_GETPRIVILEGE_OFFSET UNITYSDK_OFFSET(0xCB8BD00)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_ACTIVATEDCOUNT_OFFSET UNITYSDK_OFFSET(0xCB8BF80)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_CHENLINGPRIVILEGES_OFFSET UNITYSDK_OFFSET(0xCB8E050)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0xCB8E030)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xCB8C1E0)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_HASEXTRAPRIVILEGECURRENCYNOTUSED_OFFSET UNITYSDK_OFFSET(0xCB8BE20)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCB8B670)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_SET_CHENLINGPRIVILEGES_OFFSET UNITYSDK_OFFSET(0xCB8E060)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_SET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0xCB8E040)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_SYNCACTIVATED_1_OFFSET UNITYSDK_OFFSET(0xCB8BC70)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO_SYNCACTIVATED_OFFSET UNITYSDK_OFFSET(0xCB8B9E0)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO__BUILDPRIVILEGETREE_OFFSET UNITYSDK_OFFSET(0xCB8C230)
#define RPG_CLIENT_CHENLINGPRIVILEGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB8E070)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilegeInfo_TypeDefinitionIndex = 61541;

	class ChenLingPrivilegeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>* _ChenLingPrivileges_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*>* _PerLinePrivileges; // 0x18
		::System::UInt32 _CurrencyID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncActivated(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_SYNCACTIVATED_OFFSET))(this, a1);
		}

		::System::Void SyncActivated_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_SYNCACTIVATED_1_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingPrivilege* GetPrivilege(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingPrivilege*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_GETPRIVILEGE_OFFSET))(this, a1);
		}

		::System::Boolean HasExtraPrivilegeCurrencyNotUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_HASEXTRAPRIVILEGECURRENCYNOTUSED_OFFSET))(this);
		}

		::RPG::PoolDictionary_2<::RPG::Client::ChenLingPrivilege*, ::RPG::Client::ChenLingPrivilegeTreeNode*>* _BuildPrivilegeTree()
		{
			return ((::RPG::PoolDictionary_2<::RPG::Client::ChenLingPrivilege*, ::RPG::Client::ChenLingPrivilegeTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO__BUILDPRIVILEGETREE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*>* GetPerLinePrivileges()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_GETPERLINEPRIVILEGES_OFFSET))(this);
		}

		::System::UInt32 get_CurrencyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_CURRENCYID_OFFSET))(this);
		}

		::System::Void set_CurrencyID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_SET_CURRENCYID_OFFSET))(this, a1);
		}

		::System::Int32 get_ActivatedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_ACTIVATEDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>* get_ChenLingPrivileges()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_GET_CHENLINGPRIVILEGES_OFFSET))(this);
		}

		::System::Void set_ChenLingPrivileges(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGEINFO_SET_CHENLINGPRIVILEGES_OFFSET))(this, a1);
		}
	};
}
