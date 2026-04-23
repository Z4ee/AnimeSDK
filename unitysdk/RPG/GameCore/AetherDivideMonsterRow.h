#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18685A10)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186860B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMonsterRow_TypeDefinitionIndex = 10479;

	class AetherDivideMonsterRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillCutInPrefabPath; // 0x10
		::System::UInt32 MonsterID; // 0x18
		::RPG::GameCore::AetherSpiritType MonsterType; // 0x1C
		::RPG::GameCore::FixPoint SPMax; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideMonsterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideMonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
