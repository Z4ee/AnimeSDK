#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class Class_1_5A6771CD0CA2718D;
class Class_4_AC6D98911872E0CE;
namespace MoleMole::ChessStateMachine { class SubStateFadeOutEntityAction; }

#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14359440)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x14359450)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__2_OFFSET UNITYSDK_OFFSET(0x143595F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_G____CLOSESUBSTATE_1_OFFSET UNITYSDK_OFFSET(0x14359480)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SubStateFadeOutEntityAction___c__DisplayClass3_0_TypeDefinitionIndex = 58250;

	class SubStateFadeOutEntityAction___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Class_4_AC6D98911872E0CE* chessPieceProxy; // 0x10
		::MoleMole::ChessStateMachine::SubStateFadeOutEntityAction* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET))(this);
		}

		::System::Void _Run_b__2(::Class_1_5A6771CD0CA2718D* p, ::MoleMole::HollowPieceBlendMode m)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__2_OFFSET))(this, p, m);
		}

		::System::Void _Run_g____closeSubState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_G____CLOSESUBSTATE_1_OFFSET))(this);
		}
	};
}
