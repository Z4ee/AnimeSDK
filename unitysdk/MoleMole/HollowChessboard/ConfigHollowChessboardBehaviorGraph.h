#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class IConfigHollowChessboardBehavior; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A93D90)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowChessboardBehaviorGraph_TypeDefinitionIndex = 59133;

	class ConfigHollowChessboardBehaviorGraph : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::IConfigHollowChessboardBehavior* Config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDBEHAVIORGRAPH__CTOR_OFFSET))(this);
		}
	};
}
