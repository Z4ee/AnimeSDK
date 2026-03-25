#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F636B0)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F63D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMonsterRow_TypeDefinitionIndex = 10254;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideMonsterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideMonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
