#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_31;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0x14847E40)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14848110)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x14848120)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowBlockedViewAction_TypeDefinitionIndex = 71722;

	class ShowBlockedViewAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_31* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
