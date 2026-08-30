#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlayerPersonalCardRow; }
namespace System { class String; }

#define RPG_CLIENT_PERSONALIZECARDDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xDA5E8E0)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0xDA5F540)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_CARDPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDA5EF20)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_CHATPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDA5F010)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_FRIENDPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDA5EF70)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDA5EEE0)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_ISDEFAULTCARD_OFFSET UNITYSDK_OFFSET(0xDA5F390)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_ISEQUIPPED_OFFSET UNITYSDK_OFFSET(0xDA5ED30)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xDA5F080)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xDA5EF00)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_PERSONALCARDROW_OFFSET UNITYSDK_OFFSET(0xDA5F060)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_SUPPORTPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDA5EFC0)
#define RPG_CLIENT_PERSONALIZECARDDATA_GET_UNLOCKED_OFFSET UNITYSDK_OFFSET(0xDA5EE10)
#define RPG_CLIENT_PERSONALIZECARDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xDA5EEF0)
#define RPG_CLIENT_PERSONALIZECARDDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xDA5F3E0)
#define RPG_CLIENT_PERSONALIZECARDDATA_SET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xDA5EF10)
#define RPG_CLIENT_PERSONALIZECARDDATA_SET_PERSONALCARDROW_OFFSET UNITYSDK_OFFSET(0xDA5F070)
#define RPG_CLIENT_PERSONALIZECARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDA5E700)

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeCardData_TypeDefinitionIndex = 66479;

	class PersonalizeCardData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerPersonalCardRow* _PersonalCardRow_k__BackingField; // 0x10
		::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _DefaultEquippedCardID; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::PersonalizeCardData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PersonalizeCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_Unlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_UNLOCKED_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_ITEMDATA_OFFSET))(this);
		}

		::System::Void set_ItemData(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_SET_ITEMDATA_OFFSET))(this, a1);
		}

		::System::String* get_CardPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_CARDPREFABPATH_OFFSET))(this);
		}

		::System::String* get_FriendPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_FRIENDPREFABPATH_OFFSET))(this);
		}

		::System::String* get_SupportPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_SUPPORTPREFABPATH_OFFSET))(this);
		}

		::System::String* get_ChatPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_CHATPREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::PlayerPersonalCardRow* get_PersonalCardRow()
		{
			return ((::RPG::GameCore::PlayerPersonalCardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_PERSONALCARDROW_OFFSET))(this);
		}

		::System::Void set_PersonalCardRow(::RPG::GameCore::PlayerPersonalCardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerPersonalCardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_SET_PERSONALCARDROW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean get_CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_CANSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_ISEQUIPPED_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATA_GET_ISDEFAULTCARD_OFFSET))(this);
		}
	};
}
