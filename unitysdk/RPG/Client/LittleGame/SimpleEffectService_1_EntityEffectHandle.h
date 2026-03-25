#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleEffectService_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEffectService_1_EntityEffectHandle_TypeDefinitionIndex = 62245;

	template <typename TEntity>
	class SimpleEffectService_1_EntityEffectHandle : public ::System::Object
	{
	public:
		::System::String* _ID_k__BackingField; // 0x0
		::System::Boolean _IsLoaded_k__BackingField; // 0x0
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* _CompleteCallback_k__BackingField; // 0x0
		::RPG::Client::LittleGame::SimpleEffectService_1<TEntity>* _Service; // 0x0
		TEntity _Entity; // 0x0
		::RPG::Client::TriggerEffectParamsRef _Handle; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* _ParamNames; // 0x0
		::RPG::PoolDictionary_2<::System::Int32, ::Struct_2_16F410D309DC331F>* _PendingCrossFadeInfo; // 0x0
		::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* _OnEffectLoaded; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectHideReason>* _PendingHideReasons; // 0x0
	};
}
