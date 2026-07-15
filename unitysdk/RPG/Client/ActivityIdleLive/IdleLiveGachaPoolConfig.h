#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaWorldTagConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1A662970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_CRYSTALPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1A662C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A662BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISAVATARGROUPUP_OFFSET UNITYSDK_OFFSET(0x1A662C80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISSTARUP_OFFSET UNITYSDK_OFFSET(0x1A662C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A662BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_STARPROBABILITYLIST_OFFSET UNITYSDK_OFFSET(0x1A662C20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_UPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x1A662BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_WORLDTAGLIST_OFFSET UNITYSDK_OFFSET(0x1A662C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_CRYSTALPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1A662C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A662BB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISAVATARGROUPUP_OFFSET UNITYSDK_OFFSET(0x1A662C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISSTARUP_OFFSET UNITYSDK_OFFSET(0x1A662C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A662BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_STARPROBABILITYLIST_OFFSET UNITYSDK_OFFSET(0x1A662C30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_UPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x1A662BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_WORLDTAGLIST_OFFSET UNITYSDK_OFFSET(0x1A662C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A662B90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaPoolConfig_TypeDefinitionIndex = 71645;

	class IdleLiveGachaPoolConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _StarProbabilityList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>* _WorldTagList_k__BackingField; // 0x18
		::System::UInt32 _UpgradeCount_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _CrystalProbability_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Boolean _IsStarUp_k__BackingField; // 0x34
		::System::Boolean _IsAvatarGroupUp_k__BackingField; // 0x35
		::RPG::Client::TextID _Name_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_UpgradeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_UPGRADECOUNT_OFFSET))(this);
		}

		::System::Void set_UpgradeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_UPGRADECOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CrystalProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_CRYSTALPROBABILITY_OFFSET))(this);
		}

		::System::Void set_CrystalProbability(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_CRYSTALPROBABILITY_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_StarProbabilityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_STARPROBABILITYLIST_OFFSET))(this);
		}

		::System::Void set_StarProbabilityList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_STARPROBABILITYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>* get_WorldTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_WORLDTAGLIST_OFFSET))(this);
		}

		::System::Void set_WorldTagList(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_WORLDTAGLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStarUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISSTARUP_OFFSET))(this);
		}

		::System::Void set_IsStarUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISSTARUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvatarGroupUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_GET_ISAVATARGROUPUP_OFFSET))(this);
		}

		::System::Void set_IsAvatarGroupUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG_SET_ISAVATARGROUPUP_OFFSET))(this, a1);
		}
	};
}
