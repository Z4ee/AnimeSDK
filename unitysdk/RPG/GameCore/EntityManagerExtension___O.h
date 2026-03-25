#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___O_TypeDefinitionIndex = 46581;

	class EntityManagerExtension___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet__0___IsServantsOf()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EntityManagerExtension___O_TypeDefinitionIndex)->GetStaticField(0x46350);
		}
	};
}
