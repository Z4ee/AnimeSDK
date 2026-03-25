#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class RogueDLCRayModule; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CB38D1CC30518745_CLASS_1_AEB398135389F96A__CTOR_OFFSET UNITYSDK_OFFSET(0x882CC50)

inline static constexpr unsigned int Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A_TypeDefinitionIndex = 47145;

class Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A : public ::System::Object
{
public:
	::RPG::Client::MonoEffect* Field_1_3; // 0x10
	::RPG::GameCore::AnchorInfo* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::RPG::Client::Prop::RogueDLCRayModule* Field_1_1; // 0x28
	::RPG::GameCore::GameEntity* Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_CLASS_1_AEB398135389F96A__CTOR_OFFSET))(this);
	}
};
