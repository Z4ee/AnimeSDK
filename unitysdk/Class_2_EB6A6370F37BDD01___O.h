#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int Class_2_EB6A6370F37BDD01___O_TypeDefinitionIndex = 59232;

class Class_2_EB6A6370F37BDD01___O : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet__0____IsModifierUnitHalo()
	{
		return (::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EB6A6370F37BDD01___O_TypeDefinitionIndex)->GetStaticField(0x45DD0);
	}
};
