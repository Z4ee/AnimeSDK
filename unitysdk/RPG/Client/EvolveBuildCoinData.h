#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_EVOLVEBUILDCOINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19940360)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x19940830)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_GEARTYPE_OFFSET UNITYSDK_OFFSET(0x19940620)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19940690)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19940400)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0x199409D0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x19940910)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19940990)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_MAZEBUFF_OFFSET UNITYSDK_OFFSET(0x199408D0)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19940420)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x19940670)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_TAGIDS_OFFSET UNITYSDK_OFFSET(0x19940880)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0x19940950)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_GET__ITEMDATA_OFFSET UNITYSDK_OFFSET(0x19940590)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19940410)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x19940680)
#define RPG_CLIENT_EVOLVEBUILDCOINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x199403F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildCoinData_TypeDefinitionIndex = 63851;

	class EvolveBuildCoinData : public ::System::Object
	{
	public:
		::System::String* _CustomIconPath; // 0x10
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildCoinData* Create(::System::UInt32 a1, ::RPG::GameCore::EvolveBuildSeason a2, ::System::String* a3)
		{
			return ((::RPG::Client::EvolveBuildCoinData*(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_GearType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_GEARTYPE_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_SET_SEASON_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_Elements()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ELEMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TagIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_TAGIDS_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_MAZEBUFF_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_UNLOCKQUEST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsBroadcastForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET_ISBROADCASTFORGE_OFFSET))(this);
		}

		::RPG::Client::ItemData* get__ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOINDATA_GET__ITEMDATA_OFFSET))(this);
		}
	};
}
