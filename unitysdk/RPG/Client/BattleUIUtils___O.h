#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___O_TypeDefinitionIndex = 72006;

	class BattleUIUtils___O : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__0___IsEntityNeedShowInViewMode()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils___O_TypeDefinitionIndex)->GetStaticField(0xF1F0);
		}
	};
}
