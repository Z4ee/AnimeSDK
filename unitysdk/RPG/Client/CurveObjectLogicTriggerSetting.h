#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/RPG/GameCore/ECurveObjectLogicState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveMovementHandler; }
namespace RPG::Client { class CurveObjectLoadTrigger; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_CURVEOBJECTLOGICTRIGGERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xB728530)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveObjectLogicTriggerSetting_TypeDefinitionIndex = 64136;

	class CurveObjectLogicTriggerSetting : public ::System::Object
	{
	public:
		::RPG::GameCore::ECurveObjectLogicState modifyState; // 0x10
		::RPG::Client::ECurveEdgePoint edgePoint; // 0x14
		::System::String* edgeName; // 0x18
		::UnityEngine::Collider* trigger; // 0x20
		::RPG::Client::CurveObjectLoadTrigger* loadTrigger; // 0x28
		::RPG::Client::CurveMovementHandler* MovementHandler; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEOBJECTLOGICTRIGGERSETTING__CTOR_OFFSET))(this);
		}
	};
}
