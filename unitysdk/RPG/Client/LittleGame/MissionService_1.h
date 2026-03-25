#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class IContext_1; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MissionService_1_TypeDefinitionIndex = 62267;

	template <typename TEntity>
	class MissionService_1 : public ::System::Object
	{
	public:
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::RPG::Client::LittleGame::Services_1<TEntity>* _Services; // 0x0
		::System::Action_1<::System::String*>* _LogErrorAction; // 0x0
		::System::Int32 _MissionEntityRuntimeID; // 0x0
		::System::UInt32 _MissionTalkEntityID; // 0x0
		::RPG::GameCore::LittleGameEvent* _MissionTalkFinishEvent; // 0x0
	};
}
