#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_1EAFCA2C5F19CBDD_OFFSET UNITYSDK_OFFSET(0x1E0CE150)
#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_B7DBCE2D6568DC19_OFFSET UNITYSDK_OFFSET(0x1E0CE100)
#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CE140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierSeckillConfig_TypeDefinitionIndex = 19047;

	class FateModifierSeckillConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7DBCE2D6568DC19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierSeckillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierSeckillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_B7DBCE2D6568DC19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EAFCA2C5F19CBDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierSeckillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierSeckillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_1EAFCA2C5F19CBDD_OFFSET))(a1, a2);
		}
	};
}
