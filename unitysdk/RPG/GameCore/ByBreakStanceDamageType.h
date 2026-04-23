#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_METHOD_4_B39AF4EDFE23280D_OFFSET UNITYSDK_OFFSET(0x1871FCB0)
#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_METHOD_4_C920B0F6F11B0221_OFFSET UNITYSDK_OFFSET(0x1871FBE0)
#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1871FC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBreakStanceDamageType_TypeDefinitionIndex = 22488;

	class ByBreakStanceDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C920B0F6F11B0221(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBreakStanceDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBreakStanceDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_METHOD_4_C920B0F6F11B0221_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B39AF4EDFE23280D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_METHOD_4_B39AF4EDFE23280D_OFFSET))(a1, a2);
		}
	};
}
