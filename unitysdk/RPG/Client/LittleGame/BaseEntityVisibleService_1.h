#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarConditionLogic.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_188;
class Class_1_46AC29DEBE45F8A8_1;
namespace RPG::Client::LittleGame { template <typename T> class IEventActionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IQueryEntityService_1; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameLevelVarCondition; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityVisibleService_1_TypeDefinitionIndex = 42092;

	template <typename TEntity>
	class BaseEntityVisibleService_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::IQueryEntityService_1<TEntity>* _QueryService; // 0x0
		::RPG::Client::LittleGame::IEventActionService_1<TEntity>* _ActionService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<TEntity>* _LevelVarService; // 0x0
		::Class_0_16E4307DCC419505_188* _LogService; // 0x0
	};
}
