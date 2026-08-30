#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyUtils___O_TypeDefinitionIndex = 68163;

	class TrainPartyUtils___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet__0____OnEntityLoadFinish()
		{
			return (::System::Action_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyUtils___O_TypeDefinitionIndex)->GetStaticField(0x5B9C0);
		}
	};
}
