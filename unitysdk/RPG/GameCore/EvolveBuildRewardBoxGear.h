#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }
namespace RPG::Client { class EvolveBuildGearDetail; }
namespace RPG::GameCore { class ActivityEvolveGearForgeMaterialRow; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATECOPY_OFFSET UNITYSDK_OFFSET(0xB685190)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATEMIX_OFFSET UNITYSDK_OFFSET(0xB6841D0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATE_OFFSET UNITYSDK_OFFSET(0xB681C80)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GETGEARLVTOFORGE_OFFSET UNITYSDK_OFFSET(0xB684270)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB685210)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEGEAR_OFFSET UNITYSDK_OFFSET(0xB685290)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEROW_OFFSET UNITYSDK_OFFSET(0xB6825F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDATA_OFFSET UNITYSDK_OFFSET(0xB685230)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0xB6852B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_ISMIX_OFFSET UNITYSDK_OFFSET(0xB683550)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_MIXFORGETYPE_OFFSET UNITYSDK_OFFSET(0xB683670)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_NEXTGEAR_OFFSET UNITYSDK_OFFSET(0xB685270)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVGEAR_OFFSET UNITYSDK_OFFSET(0xB685250)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0xB6851F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETNEXTGEAR_OFFSET UNITYSDK_OFFSET(0xB6843F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETPREVGEAR_OFFSET UNITYSDK_OFFSET(0xB684440)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_FORGEGEAR_OFFSET UNITYSDK_OFFSET(0xB6852A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDATA_OFFSET UNITYSDK_OFFSET(0xB685240)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0xB6852C0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_NEXTGEAR_OFFSET UNITYSDK_OFFSET(0xB685280)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVGEAR_OFFSET UNITYSDK_OFFSET(0xB685260)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0xB685200)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR__CTOR_OFFSET UNITYSDK_OFFSET(0xB685180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBoxGear_TypeDefinitionIndex = 49353;

	class EvolveBuildRewardBoxGear : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardBoxGear* _NextGear_k__BackingField; // 0x10
		::RPG::Client::EvolveBuildGearDetail* _GearDetail_k__BackingField; // 0x18
		::RPG::GameCore::EvolveBuildRewardBoxGear* _ForgeGear_k__BackingField; // 0x20
		::RPG::GameCore::EvolveBuildRewardBoxGear* _PrevGear_k__BackingField; // 0x28
		::RPG::Client::EvolveBuildCollectionGearDisplayData* _GearData_k__BackingField; // 0x30
		::System::UInt32 ID; // 0x38
		::System::UInt32 _PrevLevel_k__BackingField; // 0x3C

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
