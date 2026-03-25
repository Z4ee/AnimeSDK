#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_ABCB8164844A5B08_OFFSET UNITYSDK_OFFSET(0x16FFF610)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_BA70D0ADAAA35062_OFFSET UNITYSDK_OFFSET(0x16FFF6E0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFF690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsInfected_TypeDefinitionIndex = 21254;

	class ByCheckModifierCallBackIsInfected : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ABCB8164844A5B08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_ABCB8164844A5B08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA70D0ADAAA35062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_BA70D0ADAAA35062_OFFSET))(a1, a2);
		}
	};
}
