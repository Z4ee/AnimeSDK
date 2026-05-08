#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1100E260)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1100E310)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x1100E320)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ClearNpcBodyAction_TypeDefinitionIndex = 76299;

	class ClearNpcBodyAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Int32 ScreenIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
