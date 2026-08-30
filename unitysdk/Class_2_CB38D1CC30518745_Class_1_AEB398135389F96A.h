#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class RogueDLCRayModule; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CB38D1CC30518745_CLASS_1_AEB398135389F96A__CTOR_OFFSET UNITYSDK_OFFSET(0xB46D150)

inline static constexpr unsigned int Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A_TypeDefinitionIndex = 58593;

class Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A : public ::System::Object
{
public:
	::RPG::GameCore::AnchorInfo* OEOOFDAGECM; // 0x10
	::UnityEngine::Transform* NIJNPFOOJLC; // 0x18
	::RPG::Client::Prop::RogueDLCRayModule* BBBFOLNCOBO; // 0x20
	::RPG::GameCore::GameEntity* GMLKHIBJJLC; // 0x28
	::RPG::Client::MonoEffect* CPKPOBMFMJI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_CLASS_1_AEB398135389F96A__CTOR_OFFSET))(this);
	}
};
