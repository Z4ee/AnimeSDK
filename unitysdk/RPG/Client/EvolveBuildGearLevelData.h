#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }

#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMAUTOCOLLECTEDGEARID_OFFSET UNITYSDK_OFFSET(0x17CEB8A0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMGEARID_OFFSET UNITYSDK_OFFSET(0x17CEBE90)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x17CEBDF0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GETISPREADDGEAR_OFFSET UNITYSDK_OFFSET(0x17CEC2B0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x17CEC620)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_GEARDATA_OFFSET UNITYSDK_OFFSET(0x17CEC500)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASGEAR_OFFSET UNITYSDK_OFFSET(0x17CEC690)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASLOST_OFFSET UNITYSDK_OFFSET(0x17CEC710)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0x17CEC580)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x17CEC520)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x17CEC4B0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CEC670)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETCOLLECTED_OFFSET UNITYSDK_OFFSET(0x17CEC180)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETHASLOST_OFFSET UNITYSDK_OFFSET(0x17CEC260)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x17CEC1F0)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_GEARDATA_OFFSET UNITYSDK_OFFSET(0x17CEC510)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_HASLOST_OFFSET UNITYSDK_OFFSET(0x17CEC720)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CEC680)
#define RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CEBE80)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearLevelData_TypeDefinitionIndex = 60982;

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

		static ::RPG::Client::EvolveBuildGearLevelData* Create(::RPG::Client::EvolveBuildCollectionGearDisplayData* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::RPG::Client::EvolveBuildCollectionGearDisplayData*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EvolveBuildGearLevelData* CreateFromGearID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMGEARID_OFFSET))(a1, a2);
		}

		static ::RPG::Client::EvolveBuildGearLevelData* CreateFromAutoCollectedGearID(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_CREATEFROMAUTOCOLLECTEDGEARID_OFFSET))(a1);
		}

		::System::Void SetCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETCOLLECTED_OFFSET))(this, a1);
		}

		::System::Void SetUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void SetHasLost(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SETHASLOST_OFFSET))(this, a1);
		}

		::System::Boolean GetIsPreAddGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GETISPREADDGEAR_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGearDisplayData* get_GearData()
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_GEARDATA_OFFSET))(this);
		}

		::System::Void set_GearData(::RPG::Client::EvolveBuildCollectionGearDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGearDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_GEARDATA_OFFSET))(this, a1);
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

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_HasGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASGEAR_OFFSET))(this);
		}

		::System::Boolean get_HasLost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_GET_HASLOST_OFFSET))(this);
		}

		::System::Void set_HasLost(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARLEVELDATA_SET_HASLOST_OFFSET))(this, a1);
		}
	};
}
