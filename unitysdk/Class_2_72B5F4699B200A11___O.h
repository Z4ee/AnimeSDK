#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_2_72B5F4699B200A11___O_TypeDefinitionIndex = 55146;

class Class_2_72B5F4699B200A11___O : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Int32>** StaticGet__0____GetEntitySortKey()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_72B5F4699B200A11___O_TypeDefinitionIndex)->GetStaticField(0x65100);
	}
};
