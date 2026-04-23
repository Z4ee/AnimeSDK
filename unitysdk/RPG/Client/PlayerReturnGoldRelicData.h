#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xAD683C0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAD67FF0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xAD68490)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_INNERSETID_OFFSET UNITYSDK_OFFSET(0xAD68450)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_OUTERSETID_OFFSET UNITYSDK_OFFSET(0xAD68470)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_RELICITEMLIST_OFFSET UNITYSDK_OFFSET(0xAD684B0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xAD684A0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_INNERSETID_OFFSET UNITYSDK_OFFSET(0xAD68460)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_OUTERSETID_OFFSET UNITYSDK_OFFSET(0xAD68480)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_RELICITEMLIST_OFFSET UNITYSDK_OFFSET(0xAD684C0)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD68090)
#define RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__INIT_OFFSET UNITYSDK_OFFSET(0xAD680A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnGoldRelicData_TypeDefinitionIndex = 57077;

	class PlayerReturnGoldRelicData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* _AvatarData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* _RelicItemList_k__BackingField; // 0x18
		::System::UInt32 _OuterSetID_k__BackingField; // 0x20
		::System::UInt32 _InnerSetID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnGoldRelicData* Create(::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::PlayerReturnGoldRelicData*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_OFFSET))(avatarData);
		}

		static ::RPG::Client::PlayerReturnGoldRelicData* Create_1(::RPG::Client::AvatarData* avatarData, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* relicItemDataList)
		{
			return ((::RPG::Client::PlayerReturnGoldRelicData*(*)(::RPG::Client::AvatarData*, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_CREATE_1_OFFSET))(avatarData, relicItemDataList);
		}

		::System::Boolean _Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_InnerSetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_INNERSETID_OFFSET))(this);
		}

		::System::Void set_InnerSetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_INNERSETID_OFFSET))(this, value);
		}

		::System::UInt32 get_OuterSetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_OUTERSETID_OFFSET))(this);
		}

		::System::Void set_OuterSetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_OUTERSETID_OFFSET))(this, value);
		}

		::RPG::Client::AvatarData* get_AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Void set_AvatarData(::RPG::Client::AvatarData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_AVATARDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* get_RelicItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_GET_RELICITEMLIST_OFFSET))(this);
		}

		::System::Void set_RelicItemList(::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNGOLDRELICDATA_SET_RELICITEMLIST_OFFSET))(this, value);
		}
	};
}
