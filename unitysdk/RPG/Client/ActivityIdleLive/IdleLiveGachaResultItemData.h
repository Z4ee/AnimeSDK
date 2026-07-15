#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveGachaResultItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_C89D8D1595D8D05F_1;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultAvatarItemData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_CREATEGEMMERGEDATA_OFFSET UNITYSDK_OFFSET(0x1A663B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A663500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_AVATARITEM_OFFSET UNITYSDK_OFFSET(0x1A664700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_GEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6646E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_ISNEWAVATAR_OFFSET UNITYSDK_OFFSET(0x1A664720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A663AD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_SETISNEWAVATAR_OFFSET UNITYSDK_OFFSET(0x1A663860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_SET_AVATARITEM_OFFSET UNITYSDK_OFFSET(0x1A664710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_SET_GEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6646F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6646D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResultItemData_TypeDefinitionIndex = 71653;

	class IdleLiveGachaResultItemData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarItemData* _AvatarItem_k__BackingField; // 0x10
		::System::Boolean _isNewAvatar; // 0x18
		::System::UInt32 _GemCount_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData* Create(::Class_1_C89D8D1595D8D05F_1* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*(*)(::Class_1_C89D8D1595D8D05F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData* CreateGemMergeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_CREATEGEMMERGEDATA_OFFSET))(a1);
		}

		::System::Void SetIsNewAvatar(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_SETISNEWAVATAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_GemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_GEMCOUNT_OFFSET))(this);
		}

		::System::Void set_GemCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_SET_GEMCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarItemData* get_AvatarItem()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_AVATARITEM_OFFSET))(this);
		}

		::System::Void set_AvatarItem(::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_SET_AVATARITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemType get_Type()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsNewAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTITEMDATA_GET_ISNEWAVATAR_OFFSET))(this);
		}
	};
}
