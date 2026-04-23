#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElfProfileQuestGroupData_ElfProfileQuestGroupStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class RestaurantQuestGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA241C90)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GETQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0xA2423D0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_CHARACTERIMGPATH_OFFSET UNITYSDK_OFFSET(0xA2427E0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA242850)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xA242760)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2426C0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA2426E0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA240630)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET__QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xA2421D0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA241F70)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xA241D50)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_ITERATEQUESTID_OFFSET UNITYSDK_OFFSET(0xA242620)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA2426D0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA241DB0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__ISGROUPCLOSED_OFFSET UNITYSDK_OFFSET(0xA242240)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__ISGROUPHASREWARD_OFFSET UNITYSDK_OFFSET(0xA241FD0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__ISGROUPLOCKED_OFFSET UNITYSDK_OFFSET(0xA241DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProfileQuestGroupData_TypeDefinitionIndex = 58705;

	class ElfProfileQuestGroupData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfProfileQuestGroupData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::ElfProfileQuestGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_CREATE_OFFSET))(ID);
		}

		static ::System::Boolean IsValid(::System::UInt32 ID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_ISVALID_OFFSET))(ID);
		}

		::System::Boolean _IsGroupLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__ISGROUPLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsGroupHasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__ISGROUPHASREWARD_OFFSET))(this);
		}

		::System::Boolean _IsGroupClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA__ISGROUPCLOSED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetQuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GETQUESTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* IterateQuestID()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_ITERATEQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantQuestGroupRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantQuestGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET__ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get__QuestIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET__QUESTIDLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::String* get_CharacterIMGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_CHARACTERIMGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::ElfProfileQuestGroupData_ElfProfileQuestGroupStatus get_Status()
		{
			return ((::RPG::Client::ElfProfileQuestGroupData_ElfProfileQuestGroupStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA_GET_STATUS_OFFSET))(this);
		}
	};
}
