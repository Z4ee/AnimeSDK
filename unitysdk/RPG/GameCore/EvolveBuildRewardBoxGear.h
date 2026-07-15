#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }
namespace RPG::Client { class EvolveBuildGearDetail; }
namespace RPG::GameCore { class ActivityEvolveGearForgeMaterialRow; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x154DF760)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATEMIX_OFFSET UNITYSDK_OFFSET(0x154DE680)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATE_OFFSET UNITYSDK_OFFSET(0x154DC450)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GETGEARLVTOFORGE_OFFSET UNITYSDK_OFFSET(0x154DE720)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x154DF7E0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEGEAR_OFFSET UNITYSDK_OFFSET(0x154DF890)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEROW_OFFSET UNITYSDK_OFFSET(0x154DCCE0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDATA_OFFSET UNITYSDK_OFFSET(0x154DF830)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0x154DF8B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_ISMIX_OFFSET UNITYSDK_OFFSET(0x154DD9E0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_MIXFORGETYPE_OFFSET UNITYSDK_OFFSET(0x154DDB70)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_NEXTGEAR_OFFSET UNITYSDK_OFFSET(0x154DF870)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVGEAR_OFFSET UNITYSDK_OFFSET(0x154DF850)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0x154DF7C0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETNEXTGEAR_OFFSET UNITYSDK_OFFSET(0x154DE890)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETPREVGEAR_OFFSET UNITYSDK_OFFSET(0x154DE8E0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_FORGEGEAR_OFFSET UNITYSDK_OFFSET(0x154DF8A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDATA_OFFSET UNITYSDK_OFFSET(0x154DF840)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0x154DF8C0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_NEXTGEAR_OFFSET UNITYSDK_OFFSET(0x154DF880)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVGEAR_OFFSET UNITYSDK_OFFSET(0x154DF860)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0x154DF7D0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x154DF750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBoxGear_TypeDefinitionIndex = 51102;

	class EvolveBuildRewardBoxGear : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardBoxGear* _ForgeGear_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildRewardBoxGear* _NextGear_k__BackingField; // 0x18
		::RPG::Client::EvolveBuildCollectionGearDisplayData* _GearData_k__BackingField; // 0x20
		::RPG::GameCore::EvolveBuildRewardBoxGear* _PrevGear_k__BackingField; // 0x28
		::RPG::Client::EvolveBuildGearDetail* _GearDetail_k__BackingField; // 0x30
		::System::UInt32 ID; // 0x38
		::System::UInt32 _PrevLevel_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGear* Create(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::EvolveBuildCollectionGearDisplayData* a3, ::RPG::Client::EvolveBuildGearDetail* a4)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::EvolveBuildCollectionGearDisplayData*, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGear* CreateCopy(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATECOPY_OFFSET))(a1);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGear* CreateMix(::RPG::GameCore::EvolveBuildRewardBoxGear* a1, ::RPG::GameCore::EvolveBuildRewardBoxGear* a2)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_CREATEMIX_OFFSET))(a1, a2);
		}

		::System::Void SetNextGear(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETNEXTGEAR_OFFSET))(this, a1);
		}

		::System::Void SetPrevGear(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SETPREVGEAR_OFFSET))(this, a1);
		}

		::System::UInt32 GetGearLvToForge(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GETGEARLVTOFORGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrevLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVLEVEL_OFFSET))(this);
		}

		::System::Void set_PrevLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_CURRENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGearDisplayData* get_GearData()
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_GEARDATA_OFFSET))(this);
		}

		::System::Void set_GearData(::RPG::Client::EvolveBuildCollectionGearDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGearDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_PrevGear()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_PREVGEAR_OFFSET))(this);
		}

		::System::Void set_PrevGear(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_PREVGEAR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_NextGear()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_NEXTGEAR_OFFSET))(this);
		}

		::System::Void set_NextGear(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_NEXTGEAR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_ISMIX_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_ForgeGear()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_GET_FORGEGEAR_OFFSET))(this);
		}

		::System::Void set_ForgeGear(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_FORGEGEAR_OFFSET))(this, a1);
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

		::System::Void set_GearDetail(::RPG::Client::EvolveBuildGearDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEAR_SET_GEARDETAIL_OFFSET))(this, a1);
		}
	};
}
