#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int ParkPetDiyController___O_TypeDefinitionIndex = 74476;

	class ParkPetDiyController___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet__0___ForceSampleFirstFrame()
		{
			return (::System::Action_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(ParkPetDiyController___O_TypeDefinitionIndex)->GetStaticField(0x15AB0);
		}
	};
}
