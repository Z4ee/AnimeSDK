#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_98CDFE7105C45880_OFFSET UNITYSDK_OFFSET(0x16F4EED0)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_EA0B0880329D30AE_OFFSET UNITYSDK_OFFSET(0x16F4EFA0)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4EF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPlayerCurrentSkillType_TypeDefinitionIndex = 19931;

	class AdventureByPlayerCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98CDFE7105C45880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_98CDFE7105C45880_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA0B0880329D30AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_METHOD_4_EA0B0880329D30AE_OFFSET))(a1, a2);
		}
	};
}
