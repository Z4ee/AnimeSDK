#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaPoolConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB13E7E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB140590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB140B00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0xB140A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB140A50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_NEXTUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0xB140A90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_PREUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0xB140AB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB140700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB140B10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0xB140A80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_NEXTUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0xB140AA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xB13ED20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB140B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB1404E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaPoolData_TypeDefinitionIndex = 70124;

	class IdleLiveGachaPoolData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>** StaticGet__GachaConfigDic()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaPoolData_TypeDefinitionIndex)->GetStaticField(0x52E10);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__GachaNextUpgradeCountDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaPoolData_TypeDefinitionIndex)->GetStaticField(0x52E18);
		}
		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* _Config_k__BackingField; // 0x10
		::System::UInt32 _CurCount_k__BackingField; // 0x18
		::System::UInt32 _NextUpgradeCount_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>* GetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GETCONFIGLIST_OFFSET))();
		}

		::System::Boolean Update(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_UPDATE_OFFSET))(this, a1);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_INIT_OFFSET))();
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_CurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_CURCOUNT_OFFSET))(this);
		}

		::System::Void set_CurCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CURCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_NextUpgradeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_NEXTUPGRADECOUNT_OFFSET))(this);
		}

		::System::Void set_NextUpgradeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_NEXTUPGRADECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PreUpgradeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_PREUPGRADECOUNT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CONFIG_OFFSET))(this, a1);
		}
	};
}
