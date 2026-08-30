#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityBase.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAbilityPassiveType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAABILITYPASSIVE_METHOD_3_487956D6B30CD75C_OFFSET UNITYSDK_OFFSET(0x1CFBAF60)
#define RPG_GAMECORE_CHIMERAABILITYPASSIVE_METHOD_3_A32CAFFC3BEFCD3C_OFFSET UNITYSDK_OFFSET(0x1CFBC550)
#define RPG_GAMECORE_CHIMERAABILITYPASSIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBAF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityPassive_TypeDefinitionIndex = 15669;

	class ChimeraAbilityPassive : public ::RPG::GameCore::ChimeraAbilityBase
	{
	public:
		::System::String* PerformanceJsonPath; // 0x20
		::RPG::GameCore::ChimeraBattleAbilityPassiveType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPASSIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A32CAFFC3BEFCD3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityPassive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityPassive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPASSIVE_METHOD_3_A32CAFFC3BEFCD3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_487956D6B30CD75C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityPassive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityPassive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPASSIVE_METHOD_3_487956D6B30CD75C_OFFSET))(a1, a2);
		}
	};
}
