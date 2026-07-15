#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9C95D0C3F09106A8;
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace UnityEngine { class Animator; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTransformAdaptor_2_TypeDefinitionIndex = 51508;

	template <typename TInitParam, typename TStartParam>
	class RtTransformAdaptor_2 : public ::System::Object
	{
	public:
		TInitParam _IntParam; // 0x0
		TStartParam _StartParam; // 0x0
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x0
		::Class_2_9C95D0C3F09106A8* _RtTrans; // 0x0
		::RPG::GameCore::TransformComponent* _Trans; // 0x0
		::RPG::Client::MockAnimator* _MockAnimator; // 0x0
		::UnityEngine::Animator* _Animator; // 0x0
		::RPG::Client::RootMotionHandler* _RootMotionHandler; // 0x0
		::System::Boolean _IsRunning; // 0x0
		::System::Boolean _AutoRecycle; // 0x0
	};
}
