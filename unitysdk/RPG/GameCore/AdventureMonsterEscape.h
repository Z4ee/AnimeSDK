#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREMONSTERESCAPE_METHOD_3_7B2AAAD3405DB4BD_OFFSET UNITYSDK_OFFSET(0x18678D70)
#define RPG_GAMECORE_ADVENTUREMONSTERESCAPE_METHOD_3_CCAFF0B6DDAC0262_OFFSET UNITYSDK_OFFSET(0x18678DE0)
#define RPG_GAMECORE_ADVENTUREMONSTERESCAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18678DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMonsterEscape_TypeDefinitionIndex = 19158;

	class AdventureMonsterEscape : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERESCAPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B2AAAD3405DB4BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureMonsterEscape*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureMonsterEscape*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERESCAPE_METHOD_3_7B2AAAD3405DB4BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCAFF0B6DDAC0262(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureMonsterEscape* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureMonsterEscape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERESCAPE_METHOD_3_CCAFF0B6DDAC0262_OFFSET))(a1, a2);
		}
	};
}
