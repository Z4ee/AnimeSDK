#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1_AssetAsyncLoadHandle_State.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_103;
namespace RPG::Client::LittleGame { template <typename T> class SimpleViewService_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleViewService_1_AssetAsyncLoadHandle_TypeDefinitionIndex = 71101;

	template <typename TEntity>
	class SimpleViewService_1_AssetAsyncLoadHandle : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::SimpleViewService_1<TEntity>* ViewService; // 0x0
		TEntity Entity; // 0x0
		::System::String* AssetName; // 0x0
		::Struct_2_9BF8902D61AE1796 Callback; // 0x0
		::UnityEngine::GameObject* _LoadedObject; // 0x0
		::Class_0_16E4307DCC419505_103* _PostLoadInterface; // 0x0
		::RPG::Client::LittleGame::SimpleViewService_1_AssetAsyncLoadHandle_State<TEntity> _State; // 0x0
	};
}
