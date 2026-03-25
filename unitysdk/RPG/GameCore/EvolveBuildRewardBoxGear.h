#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }
namespace RPG::Client { class EvolveBuildGearDetail; }
namespace RPG::GameCore { class ActivityEvolveGearForgeMaterialRow; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATECOPY_OFFSET UNITYSDK_OFFSET(0xA93A240)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATEMIX_OFFSET UNITYSDK_OFFSET(0xA939280)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATE_OFFSET UNITYSDK_OFFSET(0xA936D30)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GETGEARLVTOFORGE_OFFSET UNITYSDK_OFFSET(0xA939320)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xA93A2C0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEGEAR_OFFSET UNITYSDK_OFFSET(0xA93A340)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEROW_OFFSET UNITYSDK_OFFSET(0xA9376A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDATA_OFFSET UNITYSDK_OFFSET(0xA93A2E0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0xA93A360)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_ISMIX_OFFSET UNITYSDK_OFFSET(0xA938600)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_MIXFORGETYPE_OFFSET UNITYSDK_OFFSET(0xA938720)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_NEXTGEAR_OFFSET UNITYSDK_OFFSET(0xA93A320)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVGEAR_OFFSET UNITYSDK_OFFSET(0xA93A300)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0xA93A2A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETNEXTGEAR_OFFSET UNITYSDK_OFFSET(0xA9394A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETPREVGEAR_OFFSET UNITYSDK_OFFSET(0xA9394F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_FORGEGEAR_OFFSET UNITYSDK_OFFSET(0xA93A350)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDATA_OFFSET UNITYSDK_OFFSET(0xA93A2F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0xA93A370)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_NEXTGEAR_OFFSET UNITYSDK_OFFSET(0xA93A330)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVGEAR_OFFSET UNITYSDK_OFFSET(0xA93A310)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0xA93A2B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR__CTOR_OFFSET UNITYSDK_OFFSET(0xA93A230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBoxGear_TypeDefinitionIndex = 43354;

	class EvolveBuildRewardBoxGear : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardBoxGear* _ForgeGear_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildRewardBoxGear* _NextGear_k__BackingField; // 0x18
		::RPG::Client::EvolveBuildCollectionGearDisplayData* _GearData_k__BackingField; // 0x20
		::RPG::GameCore::EvolveBuildRewardBoxGear* _PrevGear_k__BackingField; // 0x28
		::RPG::Client::EvolveBuildGearDetail* _GearDetail_k__BackingField; // 0x30
		::System::UInt32 _PrevLevel_k__BackingField; // 0x38
		::System::UInt32 ID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGear* Create(::System::UInt32 id, ::System::UInt32 prevLevel, ::RPG::Client::EvolveBuildCollectionGearDisplayData* data, ::RPG::Client::EvolveBuildGearDetail* gearDetail)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::EvolveBuildCollectionGearDisplayData*, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATE_OFFSET))(id, prevLevel, data, gearDetail);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGear* CreateCopy(::RPG::GameCore::EvolveBuildRewardBoxGear* boxGear)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATECOPY_OFFSET))(boxGear);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGear* CreateMix(::RPG::GameCore::EvolveBuildRewardBoxGear* boxGear, ::RPG::GameCore::EvolveBuildRewardBoxGear* forgeGear)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATEMIX_OFFSET))(boxGear, forgeGear);
		}

		::System::Void SetNextGear(::RPG::GameCore::EvolveBuildRewardBoxGear* gear)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETNEXTGEAR_OFFSET))(this, gear);
		}

		::System::Void SetPrevGear(::RPG::GameCore::EvolveBuildRewardBoxGear* gear)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETPREVGEAR_OFFSET))(this, gear);
		}

		::System::UInt32 GetGearLvToForge(::System::UInt32 gearID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GETGEARLVTOFORGE_OFFSET))(this, gearID);
		}

		::System::UInt32 get_PrevLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVLEVEL_OFFSET))(this);
		}

		::System::Void set_PrevLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_CURRENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGearDisplayData* get_GearData()
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDATA_OFFSET))(this);
		}

		::System::Void set_GearData(::RPG::Client::EvolveBuildCollectionGearDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGearDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_PrevGear()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVGEAR_OFFSET))(this);
		}

		::System::Void set_PrevGear(::RPG::GameCore::EvolveBuildRewardBoxGear* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVGEAR_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_NextGear()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_NEXTGEAR_OFFSET))(this);
		}

		::System::Void set_NextGear(::RPG::GameCore::EvolveBuildRewardBoxGear* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_NEXTGEAR_OFFSET))(this, value);
		}

		::System::Boolean get_IsMix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_ISMIX_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_ForgeGear()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEGEAR_OFFSET))(this);
		}

		::System::Void set_ForgeGear(::RPG::GameCore::EvolveBuildRewardBoxGear* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_FORGEGEAR_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* get_ForgeRow()
		{
			return ((::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEROW_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_MixForgeType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_MIXFORGETYPE_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildGearDetail* get_GearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDETAIL_OFFSET))(this);
		}

		::System::Void set_GearDetail(::RPG::Client::EvolveBuildGearDetail* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDETAIL_OFFSET))(this, value);
		}
	};
}
