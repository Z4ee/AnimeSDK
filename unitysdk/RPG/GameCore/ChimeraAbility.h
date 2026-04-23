#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAABILITY_METHOD_3_A0A47EA4C0727DD9_OFFSET UNITYSDK_OFFSET(0x187EFD20)
#define RPG_GAMECORE_CHIMERAABILITY_METHOD_3_B3194E8491FD4A71_OFFSET UNITYSDK_OFFSET(0x187EFCC0)
#define RPG_GAMECORE_CHIMERAABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x187EFD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbility_TypeDefinitionIndex = 15004;

	class ChimeraAbility : public ::RPG::GameCore::ChimeraAbilityBase
	{
	public:
		::System::String* PerformanceJsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::ChimeraAbilityModifier*>* Modifiers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3194E8491FD4A71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITY_METHOD_3_B3194E8491FD4A71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0A47EA4C0727DD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITY_METHOD_3_A0A47EA4C0727DD9_OFFSET))(a1, a2);
		}
	};
}
