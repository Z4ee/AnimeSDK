#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { template <typename T> class BaseEntityLoadSystem_1; }
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityLoadSystem_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityLoadSystem_1___c_TypeDefinitionIndex = 42084;

	template <typename TEntity>
	class BaseEntityLoadSystem_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::BaseEntityLoadSystem_1___c<TEntity>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::BaseEntityLoadSystem_1___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(BaseEntityLoadSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::RPG::Client::LittleGame::BaseEntityLoadSystem_1<TEntity>*, ::System::String*>** StaticGet___9__23_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::BaseEntityLoadSystem_1<TEntity>*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BaseEntityLoadSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::RPG::Client::LittleGame::BaseEntityLoadSystem_1<TEntity>*, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::BaseEntityLoadSystem_1<TEntity>*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BaseEntityLoadSystem_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
