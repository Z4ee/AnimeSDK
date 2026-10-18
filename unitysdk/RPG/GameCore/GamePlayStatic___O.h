#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic___O_TypeDefinitionIndex = 59014;

	class GamePlayStatic___O : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__0___IsBackendRoleBE()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic___O_TypeDefinitionIndex)->GetStaticField(0x60420);
		}
	};
}
