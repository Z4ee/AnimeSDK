#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class EvolveBuildDamageTagWithConnect; }
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATEFROMCOLLECTIONGEAR_OFFSET UNITYSDK_OFFSET(0xCED1780)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCED16E0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETALLTAGS_OFFSET UNITYSDK_OFFSET(0xCED19F0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETTAGSWITHDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xCED1C60)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0xCED1F40)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_GEARTYPE_OFFSET UNITYSDK_OFFSET(0xCED1EA0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCED24B0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCED2370)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0xCED26A0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xCED2660)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCED2680)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCED2710)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_MAZEBUFF_OFFSET UNITYSDK_OFFSET(0xCED2550)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCED2390)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xCED22D0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SHOWCONNECTTAG_OFFSET UNITYSDK_OFFSET(0xCED2730)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_TAGIDS_OFFSET UNITYSDK_OFFSET(0xCED2230)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0xCED25C0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCED2450)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETCOLLECTED_OFFSET UNITYSDK_OFFSET(0xCED1950)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCED19A0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCED2380)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xCED2670)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCED2690)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCED2720)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_SHOWCONNECTTAG_OFFSET UNITYSDK_OFFSET(0xCED2740)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCED1770)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA__GETALLTAGS_OFFSET UNITYSDK_OFFSET(0xCED1A50)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildCollectionGearDisplayData_TypeDefinitionIndex = 63850;

	class EvolveBuildCollectionGearDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _Tags; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _TagsWithDamageType; // 0x18
		::System::Boolean _IsCollected_k__BackingField; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x21
		::System::Boolean _ShowConnectTag_k__BackingField; // 0x22
		::System::UInt32 _Level_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildCollectionGearDisplayData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EvolveBuildCollectionGearDisplayData* CreateFromCollectionGear(::RPG::Client::EvolveBuildCollectionGear* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::RPG::Client::EvolveBuildCollectionGear*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATEFROMCOLLECTIONGEAR_OFFSET))(a1, a2, a3);
		}

		::System::Void SetCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETCOLLECTED_OFFSET))(this, a1);
		}

		::System::Void SetUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* GetAllTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETALLTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* GetTagsWithDamageType()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETTAGSWITHDAMAGETYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _GetAllTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA__GETALLTAGS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_GearType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_GEARTYPE_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SEASON_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_Elements()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ELEMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TagIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_TAGIDS_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_MAZEBUFF_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_UNLOCKQUEST_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISCOLLECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBroadcastForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISBROADCASTFORGE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowConnectTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SHOWCONNECTTAG_OFFSET))(this);
		}

		::System::Void set_ShowConnectTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_SHOWCONNECTTAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* get__Row()
		{
			return ((::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET__ROW_OFFSET))(this);
		}
	};
}
