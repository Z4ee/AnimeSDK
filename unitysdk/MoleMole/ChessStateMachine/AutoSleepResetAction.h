#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0xFAF2170)
#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_RUN_OFFSET UNITYSDK_OFFSET(0xFAF2180)
#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF22D0)
#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0xFAF22E0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int AutoSleepResetAction_TypeDefinitionIndex = 52701;

	class AutoSleepResetAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
