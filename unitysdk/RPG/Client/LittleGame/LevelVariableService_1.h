#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_BFC94D6B3CE54520;
namespace Entitas { template <typename T> class IContext_1; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int LevelVariableService_1_TypeDefinitionIndex = 70265;

	template <typename TEntity>
	class LevelVariableService_1 : public ::System::Object
	{
	public:
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Int32 _LevelVarEntityID; // 0x0
		::System::Action_1<::System::String*>* _LogErrorAction; // 0x0
		::System::Action_1<::System::String*>* _LogErrorActionCache; // 0x0
	};
}
