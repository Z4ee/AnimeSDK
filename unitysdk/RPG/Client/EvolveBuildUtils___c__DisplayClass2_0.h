#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class EvolveBuildGearManager; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB959170)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_0__SORTWEAPONLIST_B__0_OFFSET UNITYSDK_OFFSET(0xB95BD60)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass2_0_TypeDefinitionIndex = 59741;

	class EvolveBuildUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager* evolveBuildGearManager; // 0x10
		::RPG::Client::EvolveBuildMixData* preMixData; // 0x18
		::System::Boolean preAddForge; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortWeaponList_b__0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_0__SORTWEAPONLIST_B__0_OFFSET))(this, a1, a2);
		}
	};
}
