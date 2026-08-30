#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { template <typename T> class SimpleTriggerService_1; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleTriggerService_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleTriggerService_1___c_TypeDefinitionIndex = 76048;

	template <typename TEntity>
	class SimpleTriggerService_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::SimpleTriggerService_1___c<TEntity>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::SimpleTriggerService_1___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(SimpleTriggerService_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_3<::RPG::Client::LittleGame::SimpleTriggerService_1<TEntity>*, TEntity, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::SimpleTriggerService_1<TEntity>*, TEntity, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleTriggerService_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
