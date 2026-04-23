#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_92;
class Class_0_16E4307DCC419505_93;
class Class_0_16E4307DCC419505_97;
class Class_0_16E4307DCC419505_98;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace RPG::GameCore { class LittleGameAttachPointInfo; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleViewService_1_TypeDefinitionIndex = 70284;

	template <typename TEntity>
	class SimpleViewService_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x0
		::RPG::Client::LittleGame::Services_1<TEntity>* _Services; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Boolean _IsDisposed; // 0x0
		// static const ::System::String* EMPTY_ASSET_PATH; // 0x0
	};
}
