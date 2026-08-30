#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDBB2820)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDBB2440)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xDBB28F0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_INNERSETID_OFFSET UNITYSDK_OFFSET(0xDBB28B0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_OUTERSETID_OFFSET UNITYSDK_OFFSET(0xDBB28D0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_RELICITEMLIST_OFFSET UNITYSDK_OFFSET(0xDBB2910)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xDBB2900)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_INNERSETID_OFFSET UNITYSDK_OFFSET(0xDBB28C0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_OUTERSETID_OFFSET UNITYSDK_OFFSET(0xDBB28E0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_RELICITEMLIST_OFFSET UNITYSDK_OFFSET(0xDBB2920)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDBB24E0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__INIT_OFFSET UNITYSDK_OFFSET(0xDBB24F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnGoldRelicData_TypeDefinitionIndex = 61965;

	class PlayerReturnGoldRelicData : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _AvatarData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* _RelicItemList_k__BackingField; // 0x18
		::System::UInt32 _InnerSetID_k__BackingField; // 0x20
		::System::UInt32 _OuterSetID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnGoldRelicData* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::PlayerReturnGoldRelicData*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerReturnGoldRelicData* Create_1(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* a2)
		{
			return ((::RPG::Client::PlayerReturnGoldRelicData*(*)(::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Boolean _Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_InnerSetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_INNERSETID_OFFSET))(this);
		}

		::System::Void set_InnerSetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_INNERSETID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OuterSetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_OUTERSETID_OFFSET))(this);
		}

		::System::Void set_OuterSetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_OUTERSETID_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Void set_AvatarData(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_AVATARDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* get_RelicItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_RELICITEMLIST_OFFSET))(this);
		}

		::System::Void set_RelicItemList(::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_RELICITEMLIST_OFFSET))(this, a1);
		}
	};
}
