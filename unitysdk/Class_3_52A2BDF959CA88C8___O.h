#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

inline static constexpr unsigned int Class_3_52A2BDF959CA88C8___O_TypeDefinitionIndex = 55462;

class Class_3_52A2BDF959CA88C8___O : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet__0____CompareByLifeTime()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_52A2BDF959CA88C8___O_TypeDefinitionIndex)->GetStaticField(0x66060);
	}
};
