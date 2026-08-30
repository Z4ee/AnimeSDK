#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int Class_2_44E46407C2A1CEEE___O_TypeDefinitionIndex = 56461;

class Class_2_44E46407C2A1CEEE___O : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__0____IsInTeamFormationAndOperable()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_44E46407C2A1CEEE___O_TypeDefinitionIndex)->GetStaticField(0x402C0);
	}
};
