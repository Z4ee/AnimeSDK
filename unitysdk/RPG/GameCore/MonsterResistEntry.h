#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERRESISTENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2D4B80)
#define RPG_GAMECORE_MONSTERRESISTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D4CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterResistEntry_TypeDefinitionIndex = 14066;

	class MonsterResistEntry : public ::System::Object
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag Key; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESISTENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterResistEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterResistEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESISTENTRY_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
