#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class EvolveBuildGearManager; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B885980)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_0__SORTACCESSORYLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1B889030)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass3_0_TypeDefinitionIndex = 63882;

	class EvolveBuildUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager* evolveBuildGearManager; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortAccessoryList_b__0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_0__SORTACCESSORYLIST_B__0_OFFSET))(this, a1, a2);
		}
	};
}
