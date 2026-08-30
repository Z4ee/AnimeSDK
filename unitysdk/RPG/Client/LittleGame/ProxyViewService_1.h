#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_1_E0103A0EA6CD0F4C;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::GameCore { class LittleGameProxyEntityConfig; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ProxyViewService_1_TypeDefinitionIndex = 76041;

	template <typename TEntity>
	class ProxyViewService_1 : public ::System::Object
	{
	public:
		::Class_1_E0103A0EA6CD0F4C* _LittleGameInstance; // 0x0
		::RPG::Client::LittleGame::Services_1<TEntity>* _Services; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::UnityEngine::Transform* _Root; // 0x0
	};
}
