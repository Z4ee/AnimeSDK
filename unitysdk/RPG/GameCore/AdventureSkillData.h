#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class MazeSkillRow; }

#define RPG_GAMECORE_ADVENTURESKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCCF6960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillData_TypeDefinitionIndex = 53103;

	class AdventureSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeSkillRow* SkillRow; // 0x10
		::RPG::GameCore::AdventureSkillConfig* SkillConfig; // 0x18
		::System::Int32 UseTime; // 0x20
		::System::Int32 SkillIndex; // 0x24
		::System::Single CDTimer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLDATA__CTOR_OFFSET))(this);
		}
	};
}
