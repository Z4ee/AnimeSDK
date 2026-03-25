#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERRESISTENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17451B70)
#define RPG_GAMECORE_MONSTERRESISTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17451CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterResistEntry_TypeDefinitionIndex = 12968;

	class MonsterResistEntry : public ::System::Object
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag Key; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESISTENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterResistEntry*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterResistEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESISTENTRY_FROMBINARY_OFFSET))(array, val);
		}
	};
}
