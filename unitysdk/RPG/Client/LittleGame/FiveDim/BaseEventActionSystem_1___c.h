#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseEventActionSystem_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseEventActionSystem_1___c; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseEventActionSystem_1___c_TypeDefinitionIndex = 71615;

	template <typename T>
	class BaseEventActionSystem_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1___c<T>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(BaseEventActionSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<T>*, ::System::Int32, ::RPG::GameCore::LittleGameEvent*>** StaticGet___9__14_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<T>*, ::System::Int32, ::RPG::GameCore::LittleGameEvent*>**)Il2CppClass::FromTypeDefinitionIndex(BaseEventActionSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
