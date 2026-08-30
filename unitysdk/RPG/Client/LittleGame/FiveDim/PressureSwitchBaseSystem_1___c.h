#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { template <typename T> class PressureSwitchBaseSystem_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class PressureSwitchBaseSystem_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PressureSwitchBaseSystem_1___c_TypeDefinitionIndex = 76674;

	template <typename T>
	class PressureSwitchBaseSystem_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1___c<T>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(PressureSwitchBaseSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<T>*, ::System::Int32, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<T>*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PressureSwitchBaseSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
