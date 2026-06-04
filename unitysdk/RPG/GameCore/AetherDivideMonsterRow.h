#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1945CA80)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1945D140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMonsterRow_TypeDefinitionIndex = 10519;

	class AetherDivideMonsterRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillCutInPrefabPath; // 0x10
		::RPG::GameCore::FixPoint SPMax; // 0x18
		::RPG::GameCore::AetherSpiritType MonsterType; // 0x20
		::System::UInt32 MonsterID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideMonsterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideMonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
