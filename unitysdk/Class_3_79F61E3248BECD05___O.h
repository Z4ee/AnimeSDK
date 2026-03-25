#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int Class_3_79F61E3248BECD05___O_TypeDefinitionIndex = 46707;

class Class_3_79F61E3248BECD05___O : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__0___IsFakeAvatar()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_79F61E3248BECD05___O_TypeDefinitionIndex)->GetStaticField(0x46B60);
	}
};
