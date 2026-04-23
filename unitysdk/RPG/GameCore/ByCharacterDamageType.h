#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_1F53F44815CFC985_OFFSET UNITYSDK_OFFSET(0x187203B0)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_DD0601D876C2DDD9_OFFSET UNITYSDK_OFFSET(0x187202E0)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18720360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCharacterDamageType_TypeDefinitionIndex = 19187;

	class ByCharacterDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DD0601D876C2DDD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_DD0601D876C2DDD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F53F44815CFC985(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_1F53F44815CFC985_OFFSET))(a1, a2);
		}
	};
}
