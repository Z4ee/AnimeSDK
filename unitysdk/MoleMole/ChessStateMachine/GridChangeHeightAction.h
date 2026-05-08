#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/GridChangeHeightAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineGeometryEntityAction_1.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"

class Class_3_5A46B9360F369125;
class Class_5_8A5B236F53009830;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_DOCHANGESTRUCTANIM_OFFSET UNITYSDK_OFFSET(0x12D13B50)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_NEEDCHANGESTRUCTBETWEENRISE_OFFSET UNITYSDK_OFFSET(0x12D13AF0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12D139F0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12D14070)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION__DOCHANGESTRUCTANIM_B__3_0_OFFSET UNITYSDK_OFFSET(0x12D14090)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridChangeHeightAction_TypeDefinitionIndex = 72593;

	class GridChangeHeightAction : public ::MoleMole::ChessStateMachine::StateMachineGeometryEntityAction_1<::MoleMole::ChessStateMachine::GridChangeHeightAction_RuntimeData>
	{
	public:
		::MoleMole::HollowChessboard::GeometryHeightType TargetHeightType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_3_5A46B9360F369125* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5A46B9360F369125*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_RUN_OFFSET))(this, context);
		}

		::System::Void DoChangeStructAnim(::Class_5_8A5B236F53009830* comp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_8A5B236F53009830*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_DOCHANGESTRUCTANIM_OFFSET))(this, comp);
		}

		::System::Boolean NeedChangeStructBetweenRise(::Class_5_8A5B236F53009830* comp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_5_8A5B236F53009830*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_NEEDCHANGESTRUCTBETWEENRISE_OFFSET))(this, comp);
		}

		::System::Void _DoChangeStructAnim_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION__DOCHANGESTRUCTANIM_B__3_0_OFFSET))(this);
		}
	};
}
