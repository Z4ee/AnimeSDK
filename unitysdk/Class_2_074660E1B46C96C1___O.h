#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

inline static constexpr unsigned int Class_2_074660E1B46C96C1___O_TypeDefinitionIndex = 50828;

class Class_2_074660E1B46C96C1___O : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet__0___AIUltraSkillPriorityComp()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_074660E1B46C96C1___O_TypeDefinitionIndex)->GetStaticField(0x47690);
	}
};
