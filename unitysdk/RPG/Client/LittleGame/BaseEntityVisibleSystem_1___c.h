#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { template <typename T> class BaseEntityVisibleSystem_1; }
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityVisibleSystem_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityVisibleSystem_1___c_TypeDefinitionIndex = 42088;

	template <typename TEntity>
	class BaseEntityVisibleSystem_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1___c<TEntity>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::BaseEntityVisibleSystem_1___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(BaseEntityVisibleSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<TEntity>*, ::System::String*>** StaticGet___9__11_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<TEntity>*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BaseEntityVisibleSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_3<::System::Single, ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<TEntity>*, ::System::Int32>** StaticGet___9__12_0()
		{
			return (::System::Action_3<::System::Single, ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<TEntity>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BaseEntityVisibleSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
