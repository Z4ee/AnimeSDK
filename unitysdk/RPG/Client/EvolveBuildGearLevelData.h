#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }

#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMAUTOCOLLECTEDGEARID_OFFSET UNITYSDK_OFFSET(0x9631990)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMGEARID_OFFSET UNITYSDK_OFFSET(0x9631F60)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9631EC0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GETISPREADDGEAR_OFFSET UNITYSDK_OFFSET(0x9632250)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x96324E0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_GEARDATA_OFFSET UNITYSDK_OFFSET(0x9632400)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASGEAR_OFFSET UNITYSDK_OFFSET(0x9632520)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASLOST_OFFSET UNITYSDK_OFFSET(0x9632540)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0x9632480)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x9632420)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x96323F0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9632500)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETCOLLECTED_OFFSET UNITYSDK_OFFSET(0x9632120)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETHASLOST_OFFSET UNITYSDK_OFFSET(0x9632200)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9632190)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_GEARDATA_OFFSET UNITYSDK_OFFSET(0x9632410)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_HASLOST_OFFSET UNITYSDK_OFFSET(0x9632550)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9632510)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9631F50)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearLevelData_TypeDefinitionIndex = 51819;

	class EvolveBuildGearLevelData : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildCollectionGearDisplayData* _GearData_k__BackingField; // 0x10
		::System::UInt32 _MaxLevel_k__BackingField; // 0x18
		::System::Boolean _HasLost_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildGearLevelData* Create(::RPG::Client::EvolveBuildCollectionGearDisplayData* displayData, ::System::UInt32 maxLevel, ::System::Boolean hasLost)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::RPG::Client::EvolveBuildCollectionGearDisplayData*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATE_OFFSET))(displayData, maxLevel, hasLost);
		}

		static ::RPG::Client::EvolveBuildGearLevelData* CreateFromGearID(::System::UInt32 gearID, ::System::UInt32 level)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMGEARID_OFFSET))(gearID, level);
		}

		static ::RPG::Client::EvolveBuildGearLevelData* CreateFromAutoCollectedGearID(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMAUTOCOLLECTEDGEARID_OFFSET))(gearID);
		}

		::System::Void SetCollected(::System::Boolean isCollected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETCOLLECTED_OFFSET))(this, isCollected);
		}

		::System::Void SetUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::Void SetHasLost(::System::Boolean hasLost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETHASLOST_OFFSET))(this, hasLost);
		}

		::System::Boolean GetIsPreAddGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GETISPREADDGEAR_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGearDisplayData* get_GearData()
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_GEARDATA_OFFSET))(this);
		}

		::System::Void set_GearData(::RPG::Client::EvolveBuildCollectionGearDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGearDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_GEARDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Boolean get_IsBroadcastForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISBROADCASTFORGE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_CURRENTLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_HasGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASGEAR_OFFSET))(this);
		}

		::System::Boolean get_HasLost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASLOST_OFFSET))(this);
		}

		::System::Void set_HasLost(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_HASLOST_OFFSET))(this, value);
		}
	};
}
