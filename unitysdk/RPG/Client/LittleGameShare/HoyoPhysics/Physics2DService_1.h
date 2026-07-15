#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;
class Class_0_16E4307DCC419505_28;
class Class_0_16E4307DCC419505_32;
class Class_1_9448CA6A22062D0F;
namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameRigidBody2DComponent; }
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DFilterConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::LittleGameShare::HoyoPhysics
{
	inline static constexpr unsigned int Physics2DService_1_TypeDefinitionIndex = 35652;

	template <typename TEntity>
	class Physics2DService_1 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_32* _Engine; // 0x0
		::System::Int32 _SubStepCnt; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_28*>* _WorldKey2World; // 0x0
		::System::Int32 _WorldKeyGenerator; // 0x0
		::Entitas::EntityComponentChanged* _CacheOnComponentRemoved; // 0x0
	};
}
