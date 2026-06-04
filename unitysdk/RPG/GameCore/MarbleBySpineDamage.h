#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_8217F59486AC9E16_OFFSET UNITYSDK_OFFSET(0x198CD090)
#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_CC8C8E74434C2EE0_OFFSET UNITYSDK_OFFSET(0x198CD170)
#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x198CD120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBySpineDamage_TypeDefinitionIndex = 16035;

	class MarbleBySpineDamage : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8217F59486AC9E16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBySpineDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBySpineDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_8217F59486AC9E16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC8C8E74434C2EE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBySpineDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBySpineDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE_METHOD_4_CC8C8E74434C2EE0_OFFSET))(a1, a2);
		}
	};
}
