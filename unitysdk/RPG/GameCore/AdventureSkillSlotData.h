#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillSlotState.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureSkillData; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURESKILLSLOTDATA_GET_SKILLINDEX_OFFSET UNITYSDK_OFFSET(0x153FFBC0)
#define RPG_GAMECORE_ADVENTURESKILLSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1541AE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillSlotData_TypeDefinitionIndex = 54318;

	class AdventureSkillSlotData : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureSkillData* SkillData; // 0x10
		::System::String* SkillBtnPrefabPath; // 0x18
		::System::Boolean TaskInputOnly; // 0x20
		::RPG::GameCore::AdventureSkillType Slot; // 0x24
		::RPG::GameCore::AdventureSkillSlotState State; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLSLOTDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLSLOTDATA_GET_SKILLINDEX_OFFSET))(this);
		}
	};
}
