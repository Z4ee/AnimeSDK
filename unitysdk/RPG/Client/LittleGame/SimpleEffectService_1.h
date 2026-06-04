#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/EffectHideReason.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/Struct_2_21F06CB8E00E232D.h"
#include "unitysdk/Struct_2_3AE9C8BBD33462A9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_89;
class Class_1_1257637E4CB15DE5_1;
class Class_1_BEC7DE0942A57F8C;
namespace Entitas { class IEntity; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleEffectService_1_EntityEffectHandle; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameFireEffectParams; }
namespace RPG::GameCore { class LittleGameKillEffectParams; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEffectService_1_TypeDefinitionIndex = 71055;

	template <typename TEntity>
	class SimpleEffectService_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _GameInstanceEntity; // 0x0
		::System::Action_1<::System::String*>* _LogErrorAction; // 0x0
	};
}
