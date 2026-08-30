#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CurveEdgePointSetting.h"
#include "unitysdk/RPG/Client/ECurveMoveDirection.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3B175A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager_StateInfo_TypeDefinitionIndex = 68513;

	struct alignas(8) MonoCurveMovementManager_StateInfo
	{
		::RPG::Client::CurveEdgePointSetting fromSetting; // 0x10
		::RPG::Client::CurveEdgePointSetting toSetting; // 0x20
		::System::Single percent; // 0x30
		::System::Boolean isMoving; // 0x34
		::RPG::Client::ECurveMoveDirection direction; // 0x38

		::System::Void _ctor(::RPG::Client::CurveEdgePointSetting a1, ::RPG::Client::CurveEdgePointSetting a2, ::System::Single a3, ::System::Boolean a4, ::RPG::Client::ECurveMoveDirection a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveEdgePointSetting, ::RPG::Client::CurveEdgePointSetting, ::System::Single, ::System::Boolean, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATEINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
