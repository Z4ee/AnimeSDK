#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CHESSSTATEMACHINE_CONNECTIONSETTING_GETTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x1B539120)
#define MOLEMOLE_CHESSSTATEMACHINE_CONNECTIONSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B539170)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ConnectionSetting_TypeDefinitionIndex = 52727;

	class ConnectionSetting : public ::System::Object
	{
	public:
		::System::Single durationTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONNECTIONSETTING__CTOR_OFFSET))(this);
		}

		::System::Single GetTransitionTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONNECTIONSETTING_GETTRANSITIONTIME_OFFSET))(this);
		}
	};
}
