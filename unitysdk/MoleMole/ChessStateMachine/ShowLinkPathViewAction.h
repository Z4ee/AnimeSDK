#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetConfigAction.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0xDB8BE70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDB8C900)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0xDB8C910)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowLinkPathViewAction_TypeDefinitionIndex = 44840;

	class ShowLinkPathViewAction : public ::MoleMole::ChessStateMachine::TextureSheetConfigAction
	{
	public:
		::System::Boolean IsShowPathStamina; // 0x38
		::System::Boolean IsShowPath; // 0x39
		::System::Boolean IsShowPathFinished; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
