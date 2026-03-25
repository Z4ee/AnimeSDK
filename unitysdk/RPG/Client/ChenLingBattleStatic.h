#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGBATTLESTATIC_CLOSESOLDIERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9354320)
#define RPG_CLIENT_CHENLINGBATTLESTATIC_ENTERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x9354280)
#define RPG_CLIENT_CHENLINGBATTLESTATIC_STARTCHENLINGGAME_OFFSET UNITYSDK_OFFSET(0x9354150)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStatic_TypeDefinitionIndex = 49824;

	class ChenLingBattleStatic : public ::System::Object
	{
	public:
		static ::System::Void StartChenLingGame(::UnityEngine::Transform* battleFieldTransform, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* gameSession, ::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* ChenLingBattleGameFlow)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTATIC_STARTCHENLINGGAME_OFFSET))(battleFieldTransform, gameSession, ChenLingBattleGameFlow);
		}

		static ::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>* EnterGameFlow(::RPG::GameCore::GameFlowType type, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters, ::System::Boolean isForce)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>*(*)(::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTATIC_ENTERGAMEFLOW_OFFSET))(type, parameters, isForce);
		}

		static ::System::Void CloseSoldierCollider(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTATIC_CLOSESOLDIERCOLLIDER_OFFSET))(gameObject);
		}
	};
}
