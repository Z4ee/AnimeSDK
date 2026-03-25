#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int Class_1_65301186DB244773___O_TypeDefinitionIndex = 47726;

class Class_1_65301186DB244773___O : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__0___IsBackendRoleBE()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773___O_TypeDefinitionIndex)->GetStaticField(0x473E0);
	}
};
