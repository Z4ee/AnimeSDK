#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraModifierType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM_METHOD_2_B97CD17491174947_OFFSET UNITYSDK_OFFSET(0x170926B0)
#define RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17092810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityModifierParam_TypeDefinitionIndex = 14537;

	class ChimeraAbilityModifierParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraModifierType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* Params; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B97CD17491174947(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityModifierParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityModifierParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM_METHOD_2_B97CD17491174947_OFFSET))(a1, a2);
		}
	};
}
