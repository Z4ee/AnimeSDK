#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRowData.h"

class Class_2_23F9D0182A641C7D;
namespace RPG::GameCore { class AetherDivideMonsterRow; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class StageRow; }

#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x195B4940)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_MONSTERTYPE_OFFSET UNITYSDK_OFFSET(0x195B4950)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x195B49B0)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x195B48E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMonsterRowData_TypeDefinitionIndex = 54384;

	class AetherDivideMonsterRowData : public ::RPG::GameCore::MonsterRowData
	{
	public:
		::RPG::GameCore::AetherDivideMonsterRow* _AetherDivideExpandRow; // 0x120
		::System::Boolean _ExpandValid; // 0x128

		::System::Void _ctor(::RPG::GameCore::MonsterRow* a1, ::Class_2_23F9D0182A641C7D* a2, ::RPG::GameCore::StageRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*, ::Class_2_23F9D0182A641C7D*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::RPG::GameCore::AetherSpiritType get_MonsterType()
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_MONSTERTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_SPNEED_OFFSET))(this);
		}
	};
}
