#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseCameraSystem_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseCameraSystem_1___c; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseCameraSystem_1___c_TypeDefinitionIndex = 76433;

	template <typename T>
	class BaseCameraSystem_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1___c<T>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(BaseCameraSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>** StaticGet___9__18_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(BaseCameraSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>** StaticGet___9__18_1()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(BaseCameraSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
