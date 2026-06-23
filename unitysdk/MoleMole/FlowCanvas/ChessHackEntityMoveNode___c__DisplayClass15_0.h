#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessHackEntityMoveNode_MoveInfoEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B16010)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE___C__DISPLAYCLASS15_0__SOLVECOLLISION_B__0_OFFSET UNITYSDK_OFFSET(0x18B16020)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHackEntityMoveNode___c__DisplayClass15_0_TypeDefinitionIndex = 78983;

	class ChessHackEntityMoveNode___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::FlowCanvas::ChessHackEntityMoveNode_MoveInfoEntry> pair; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SolveCollision_b__0(::System::UInt32 item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE___C__DISPLAYCLASS15_0__SOLVECOLLISION_B__0_OFFSET))(this, item);
		}
	};
}
