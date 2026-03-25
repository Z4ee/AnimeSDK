#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/Struct_2_09B45CBFDAC5DA07.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/Struct_2_BF35D09998D831A7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_212;
class Class_1_6A4548AFE753106B;
class Class_1_D3CC73B16B410533;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }
namespace RPG::Client::LittleGame { class MonoTrigger; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleTriggerService_1_TypeDefinitionIndex = 62282;

	template <typename TEntity>
	class SimpleTriggerService_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x0
		::RPG::Client::LittleGame::Services_1<TEntity>* _Services; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Boolean _MuteCallbackOnDestroy; // 0x0
		::System::Action_1<::Struct_2_BF35D09998D831A7>* _CustomButtonCallback; // 0x0
	};
}
