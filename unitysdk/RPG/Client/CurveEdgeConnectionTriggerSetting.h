#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CURVEEDGECONNECTIONTRIGGERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x94355E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveEdgeConnectionTriggerSetting_TypeDefinitionIndex = 55975;

	class CurveEdgeConnectionTriggerSetting : public ::System::Object
	{
	public:
		::RPG::Client::ECurveEdgePoint edgePoint; // 0x10
		::System::String* edgeName; // 0x18
		::UnityEngine::GameObject* root; // 0x20
		::UnityEngine::GameObject* connectObject; // 0x28
		::RPG::GameCore::OptionTriggerInfo* triggerInfo; // 0x30
		::System::UInt32 iconID; // 0x38
		::System::Single iconShowMaxDistance; // 0x3C
		::Il2CppArray<::System::Int32>* boardShowList; // 0x40
		::RPG::GameCore::GameEntity* Entity; // 0x48
		::RPG::Client::CurveUndirectedEdge* Edge; // 0x50
		::Class_2_2679F01039F3FC24* Proxy; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGECONNECTIONTRIGGERSETTING__CTOR_OFFSET))(this);
		}
	};
}
