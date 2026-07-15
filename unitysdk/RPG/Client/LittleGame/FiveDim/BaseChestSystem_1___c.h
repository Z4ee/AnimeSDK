#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseChestSystem_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseChestSystem_1___c; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseChestSystem_1___c_TypeDefinitionIndex = 73120;

	template <typename T>
	class BaseChestSystem_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1___c<T>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(BaseChestSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<T>*, T>** StaticGet___9__11_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<T>*, T>**)Il2CppClass::FromTypeDefinitionIndex(BaseChestSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
