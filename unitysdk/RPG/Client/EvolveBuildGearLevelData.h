#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }

#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMAUTOCOLLECTEDGEARID_OFFSET UNITYSDK_OFFSET(0xA2B8B30)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMGEARID_OFFSET UNITYSDK_OFFSET(0xA2B9110)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2B9070)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GETISPREADDGEAR_OFFSET UNITYSDK_OFFSET(0xA2B9480)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xA2B9710)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_GEARDATA_OFFSET UNITYSDK_OFFSET(0xA2B9630)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASGEAR_OFFSET UNITYSDK_OFFSET(0xA2B9750)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASLOST_OFFSET UNITYSDK_OFFSET(0xA2B9770)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0xA2B96B0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xA2B9650)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA2B9620)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA2B9730)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETCOLLECTED_OFFSET UNITYSDK_OFFSET(0xA2B9350)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETHASLOST_OFFSET UNITYSDK_OFFSET(0xA2B9430)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA2B93C0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_GEARDATA_OFFSET UNITYSDK_OFFSET(0xA2B9640)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_HASLOST_OFFSET UNITYSDK_OFFSET(0xA2B9780)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA2B9740)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B9100)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearLevelData_TypeDefinitionIndex = 58767;

	class EvolveBuildGearLevelData : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildCollectionGearDisplayData* _GearData_k__BackingField; // 0x10
		::System::Boolean _HasLost_k__BackingField; // 0x18
		::System::UInt32 _MaxLevel_k__BackingField; // 0x1C

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
