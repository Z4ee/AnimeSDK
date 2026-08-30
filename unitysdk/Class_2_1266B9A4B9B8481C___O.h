#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameWorld; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int Class_2_1266B9A4B9B8481C___O_TypeDefinitionIndex = 55289;

class Class_2_1266B9A4B9B8481C___O : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameWorld*>** StaticGet__0____CheckTimeSlowValid_PlayerControl()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameWorld*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1266B9A4B9B8481C___O_TypeDefinitionIndex)->GetStaticField(0x53DD0);
	}
};
