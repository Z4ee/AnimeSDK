#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildDamageTagWithConnect; }
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GETALLTAGS_OFFSET UNITYSDK_OFFSET(0xA2B4BA0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0xA2B4F50)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_GEARTYPE_OFFSET UNITYSDK_OFFSET(0xA2B4F10)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA2B4F30)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2B4EC0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0xA2B53F0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xA2B52D0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA2B5310)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_MAZEBUFF_OFFSET UNITYSDK_OFFSET(0xA2B4F70)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA2B4EE0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xA2B4D70)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_TAGIDS_OFFSET UNITYSDK_OFFSET(0xA2B4D50)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0xA2B52F0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xA2B52E0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B4B90)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR__GETALLTAGS_OFFSET UNITYSDK_OFFSET(0xA2B4C00)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildCollectionGear_TypeDefinitionIndex = 58781;

	class EvolveBuildCollectionGear : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _Tags; // 0x10
		::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* _Row; // 0x18
		::System::Boolean _IsCollected_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR__CTOR_OFFSET))(this, row);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* GetAllTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GETALLTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _GetAllTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR__GETALLTAGS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_GearType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_GEARTYPE_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_SEASON_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_Elements()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ELEMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TagIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_TAGIDS_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_MAZEBUFF_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_SET_ISCOLLECTED_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_UNLOCKQUEST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsBroadcastForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEAR_GET_ISBROADCASTFORGE_OFFSET))(this);
		}
	};
}
