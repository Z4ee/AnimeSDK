#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarConditionLogic.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_188;
class Class_1_71DE60ADB4655B5B;
class Class_1_936F4381B4CBAB18;
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IMissionService_1; }
namespace RPG::GameCore { class LittleGameCustomLoadConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarCondition; }
namespace RPG::GameCore { class LittleGameSubMissionCondition; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseLevelConfigService_1_TypeDefinitionIndex = 42035;

	template <typename TEntity>
	class BaseLevelConfigService_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ILevelVariableService_1<TEntity>* _LevelVarService; // 0x0
		::RPG::Client::LittleGame::IMissionService_1<TEntity>* _MissionService; // 0x0
		::Class_0_16E4307DCC419505_188* _LogService; // 0x0
	};
}
