#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B09F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0A060)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCombatPauseGetCurrentContextRating_TypeDefinitionIndex = 64970;

	class LDCombatPauseGetCurrentContextRating : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::Level::RatingType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING__CTOR_OFFSET))(this);
		}

		::MoleMole::Level::RatingType Invoke()
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING_INVOKE_OFFSET))(this);
		}
	};
}
