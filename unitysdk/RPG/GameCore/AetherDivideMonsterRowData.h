#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRowData.h"

class Class_2_6729AC3ED949BE6A;
namespace RPG::GameCore { class AetherDivideMonsterRow; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class StageRow; }

#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0xB5AEFD0)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_MONSTERTYPE_OFFSET UNITYSDK_OFFSET(0xB5AEFE0)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xB5AF040)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AEF70)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA___IFIXBASEPROXY_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xB5AF0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMonsterRowData_TypeDefinitionIndex = 52470;

	class AetherDivideMonsterRowData : public ::RPG::GameCore::MonsterRowData
	{
	public:
		::RPG::GameCore::AetherDivideMonsterRow* _AetherDivideExpandRow; // 0x150
		::System::Boolean _ExpandValid; // 0x158

		::System::Void _ctor(::RPG::GameCore::MonsterRow* row, ::Class_2_6729AC3ED949BE6A* createaParams, ::RPG::GameCore::StageRow* stageRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*, ::Class_2_6729AC3ED949BE6A*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA__CTOR_OFFSET))(this, row, createaParams, stageRow);
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

		::RPG::GameCore::FixPoint __iFixBaseProxy_get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA___IFIXBASEPROXY_GET_SPNEED_OFFSET))(this);
		}
	};
}
