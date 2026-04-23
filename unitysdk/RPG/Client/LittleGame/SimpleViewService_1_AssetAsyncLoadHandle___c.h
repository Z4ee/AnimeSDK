#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { template <typename T> class SimpleViewService_1_AssetAsyncLoadHandle; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleViewService_1_AssetAsyncLoadHandle___c; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleViewService_1_AssetAsyncLoadHandle___c_TypeDefinitionIndex = 70287;

	template <typename TEntity>
	class SimpleViewService_1_AssetAsyncLoadHandle___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::SimpleViewService_1_AssetAsyncLoadHandle___c<TEntity>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::SimpleViewService_1_AssetAsyncLoadHandle___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(SimpleViewService_1_AssetAsyncLoadHandle___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::RPG::Client::LittleGame::SimpleViewService_1_AssetAsyncLoadHandle<TEntity>*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::RPG::Client::LittleGame::SimpleViewService_1_AssetAsyncLoadHandle<TEntity>*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleViewService_1_AssetAsyncLoadHandle___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
