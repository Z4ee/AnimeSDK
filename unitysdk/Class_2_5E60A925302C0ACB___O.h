#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int Class_2_5E60A925302C0ACB___O_TypeDefinitionIndex = 67565;

class Class_2_5E60A925302C0ACB___O : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet__0____IsModifierUnitHalo()
	{
		return (::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5E60A925302C0ACB___O_TypeDefinitionIndex)->GetStaticField(0x58960);
	}
};
