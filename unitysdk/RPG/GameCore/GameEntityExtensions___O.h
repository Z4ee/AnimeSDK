#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions___O_TypeDefinitionIndex = 46600;

	class GameEntityExtensions___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet__1____CompareEntityViewSortPriority()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___O_TypeDefinitionIndex)->GetStaticField(0x49070);
		}
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet__0____CompareEntityRuntimeID()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___O_TypeDefinitionIndex)->GetStaticField(0x49078);
		}
	};
}
