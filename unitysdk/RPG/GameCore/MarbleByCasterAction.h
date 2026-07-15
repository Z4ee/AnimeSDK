#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_30282FA0470089B0_OFFSET UNITYSDK_OFFSET(0x1BD13BF0)
#define RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_E18F37C434A291A9_OFFSET UNITYSDK_OFFSET(0x1BD13B90)
#define RPG_GAMECORE_MARBLEBYCASTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD13BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCasterAction_TypeDefinitionIndex = 16204;

	class MarbleByCasterAction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E18F37C434A291A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCasterAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCasterAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_E18F37C434A291A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30282FA0470089B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCasterAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCasterAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION_METHOD_4_30282FA0470089B0_OFFSET))(a1, a2);
		}
	};
}
