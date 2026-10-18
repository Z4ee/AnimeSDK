#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

inline static constexpr unsigned int Class_3_F7D8A34CD6E9560E___O_TypeDefinitionIndex = 55261;

class Class_3_F7D8A34CD6E9560E___O : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet__0____CompareByLifeTime()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F7D8A34CD6E9560E___O_TypeDefinitionIndex)->GetStaticField(0x592F0);
	}
};
