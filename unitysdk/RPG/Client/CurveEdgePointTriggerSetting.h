#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CURVEEDGEPOINTTRIGGERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xCC84280)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveEdgePointTriggerSetting_TypeDefinitionIndex = 68523;

	class CurveEdgePointTriggerSetting : public ::System::Object
	{
	public:
		::RPG::Client::ECurveEdgePoint edgePoint; // 0x10
		::System::String* edgeName; // 0x18
		::System::Boolean requireCompleted; // 0x20
		::System::String* triggerCustomString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINTTRIGGERSETTING__CTOR_OFFSET))(this);
		}
	};
}
