#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONMONSTERDATA_METHOD_2_886FBAA8BB9B68B5_OFFSET UNITYSDK_OFFSET(0x1778C7D0)
#define RPG_GAMECORE_SUMMONMONSTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1778D4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonMonsterData_TypeDefinitionIndex = 20836;

	class SummonMonsterData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x10
		::RPG::GameCore::StringHash MonsterIDFromCustomValue; // 0x18
		::RPG::GameCore::DynamicFloat* RowIndex; // 0x20
		::RPG::GameCore::TeamLocationType LocationType; // 0x28
		::System::String* InitAnimStateName; // 0x30
		::System::String* UniqueName; // 0x38
		::RPG::GameCore::DynamicFloat* OverrideEliteGroup; // 0x40
		::RPG::GameCore::DynamicFloat* MonsterSlot; // 0x48
		::RPG::GameCore::TargetEvaluator* GroupLeader; // 0x50
		::System::Int32 TeamLocationOffset; // 0x58
		::System::Single SkillFormationVirtualOffset; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_886FBAA8BB9B68B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonMonsterData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonMonsterData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERDATA_METHOD_2_886FBAA8BB9B68B5_OFFSET))(a1, a2);
		}
	};
}
