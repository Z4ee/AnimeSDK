#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaPoolConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B572D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x9B590C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9B59590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x9B59500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B594E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_NEXTUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x9B59520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_PREUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x9B59540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9B59170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9B595A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x9B59510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_NEXTUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x9B59530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B57900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B595B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B59050)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaPoolData_TypeDefinitionIndex = 69312;

	class IdleLiveGachaPoolData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__GachaNextUpgradeCountDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaPoolData_TypeDefinitionIndex)->GetStaticField(0x2EFF0);
		}
		static ::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>** StaticGet__GachaConfigDic()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaPoolData_TypeDefinitionIndex)->GetStaticField(0x2EFF8);
		}
		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* _Config_k__BackingField; // 0x10
		::System::UInt32 _NextUpgradeCount_k__BackingField; // 0x18
		::System::UInt32 _CurCount_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* config, ::System::UInt32 curCount)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CTOR_OFFSET))(this, config, curCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* Create(::System::UInt32 gachaCount)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_CREATE_OFFSET))(gachaCount);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>* GetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GETCONFIGLIST_OFFSET))();
		}

		::System::Boolean Update(::System::UInt32 gachaCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_UPDATE_OFFSET))(this, gachaCount);
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

		::System::Void set_CurCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CURCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_NextUpgradeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_NEXTUPGRADECOUNT_OFFSET))(this);
		}

		::System::Void set_NextUpgradeCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_NEXTUPGRADECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_PreUpgradeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_PREUPGRADECOUNT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLDATA_SET_CONFIG_OFFSET))(this, value);
		}
	};
}
