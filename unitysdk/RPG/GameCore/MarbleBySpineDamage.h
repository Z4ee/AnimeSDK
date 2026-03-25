#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_BC0877A8EB614198_OFFSET UNITYSDK_OFFSET(0x1738BE90)
#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_E22DE148A3A54E92_OFFSET UNITYSDK_OFFSET(0x1738BF70)
#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1738BF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBySpineDamage_TypeDefinitionIndex = 15465;

	class MarbleBySpineDamage : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC0877A8EB614198(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBySpineDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBySpineDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_BC0877A8EB614198_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E22DE148A3A54E92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBySpineDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBySpineDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_E22DE148A3A54E92_OFFSET))(a1, a2);
		}
	};
}
