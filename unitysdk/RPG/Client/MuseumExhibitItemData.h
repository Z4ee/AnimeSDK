#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MuseumCollectionItemStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class MuseumSkillData; }
namespace RPG::GameCore { class EventMuseumItemConfigRow; }
namespace RPG::GameCore { class MuseumItemRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1909DA80)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1909DF20)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1909DF80)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET UNITYSDK_OFFSET(0x1909E000)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1909DFE0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x1909DDD0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1909DD90)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x1909DDB0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MUSEUMITEMROW_OFFSET UNITYSDK_OFFSET(0x1909AC90)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_SKILLS_OFFSET UNITYSDK_OFFSET(0x1909E100)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1909E0E0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x1909E070)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1909DFF0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1909DDA0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x1909DDC0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_SKILLS_OFFSET UNITYSDK_OFFSET(0x1909E110)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1909E0F0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_UPDATEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1909DD10)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1909DA40)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumExhibitItemData_TypeDefinitionIndex = 63387;

	class MuseumExhibitItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>* _Skills_k__BackingField; // 0x10
		::System::String* _MissionStartString_k__BackingField; // 0x18
		::RPG::Client::ItemData* _ItemData; // 0x20
		::RPG::GameCore::MuseumItemRow* _MuseumItemRow; // 0x28
		::System::Boolean TakenCollectReward; // 0x30
		::RPG::Client::MuseumCollectionItemStatus _Status_k__BackingField; // 0x34
		::System::UInt32 _MissionID_k__BackingField; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MuseumExhibitItemData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumExhibitItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_CREATE_OFFSET))(a1);
		}

		::System::Void UpdateEventData(::RPG::GameCore::EventMuseumItemConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventMuseumItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_UPDATEEVENTDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_MissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONID_OFFSET))(this);
		}

		::System::Void set_MissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONID_OFFSET))(this, a1);
		}

		::System::String* get_MissionStartString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONSTARTSTRING_OFFSET))(this);
		}

		::System::Void set_MissionStartString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONSTARTSTRING_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ITEMDATA_OFFSET))(this);
		}

		::RPG::GameCore::MuseumItemRow* get_MuseumItemRow()
		{
			return ((::RPG::GameCore::MuseumItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MUSEUMITEMROW_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_AREAID_OFFSET))(this);
		}

		::System::UInt32 get_DisplayOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_DISPLAYORDER_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EvidenceInfoTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STORYDESC_OFFSET))(this);
		}

		::RPG::Client::MuseumCollectionItemStatus get_Status()
		{
			return ((::RPG::Client::MuseumCollectionItemStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::MuseumCollectionItemStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumCollectionItemStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>* get_Skills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_SKILLS_OFFSET))(this);
		}

		::System::Void set_Skills(::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_SKILLS_OFFSET))(this, a1);
		}
	};
}
