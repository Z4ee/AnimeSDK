#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaWorldTagConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9B58BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_CRYSTALPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9B58EC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B58E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISAVATARGROUPUP_OFFSET UNITYSDK_OFFSET(0x9B58F40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISSTARUP_OFFSET UNITYSDK_OFFSET(0x9B58F20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B58E80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_STARPROBABILITYLIST_OFFSET UNITYSDK_OFFSET(0x9B58EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_UPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x9B58EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_WORLDTAGLIST_OFFSET UNITYSDK_OFFSET(0x9B58F00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_CRYSTALPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9B58ED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x9B58E70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISAVATARGROUPUP_OFFSET UNITYSDK_OFFSET(0x9B58F50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISSTARUP_OFFSET UNITYSDK_OFFSET(0x9B58F30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B58E90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_STARPROBABILITYLIST_OFFSET UNITYSDK_OFFSET(0x9B58EF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_UPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x9B58EB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_WORLDTAGLIST_OFFSET UNITYSDK_OFFSET(0x9B58F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B58E50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaPoolConfig_TypeDefinitionIndex = 69310;

	class IdleLiveGachaPoolConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _StarProbabilityList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>* _WorldTagList_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Boolean _IsStarUp_k__BackingField; // 0x24
		::System::Boolean _IsAvatarGroupUp_k__BackingField; // 0x25
		::System::UInt32 _UpgradeCount_k__BackingField; // 0x28
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _CrystalProbability_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* Create(::System::UInt32 gachaId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_CREATE_OFFSET))(gachaId);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_UpgradeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_UPGRADECOUNT_OFFSET))(this);
		}

		::System::Void set_UpgradeCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_UPGRADECOUNT_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_CrystalProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_CRYSTALPROBABILITY_OFFSET))(this);
		}

		::System::Void set_CrystalProbability(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_CRYSTALPROBABILITY_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_StarProbabilityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_STARPROBABILITYLIST_OFFSET))(this);
		}

		::System::Void set_StarProbabilityList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_STARPROBABILITYLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>* get_WorldTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_WORLDTAGLIST_OFFSET))(this);
		}

		::System::Void set_WorldTagList(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_WORLDTAGLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsStarUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISSTARUP_OFFSET))(this);
		}

		::System::Void set_IsStarUp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISSTARUP_OFFSET))(this, value);
		}

		::System::Boolean get_IsAvatarGroupUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISAVATARGROUPUP_OFFSET))(this);
		}

		::System::Void set_IsAvatarGroupUp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISAVATARGROUPUP_OFFSET))(this, value);
		}
	};
}
