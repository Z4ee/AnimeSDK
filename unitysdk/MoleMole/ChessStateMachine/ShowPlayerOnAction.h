#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"

class Class_1_43BD383C98B4C0C5_24;
class Class_2_9E53935807C1819B;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION_RUN_OFFSET UNITYSDK_OFFSET(0x11083F70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11083FC0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x11083FD0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowPlayerOnAction_TypeDefinitionIndex = 86606;

	class ShowPlayerOnAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Class_2_9E53935807C1819B* _actionContext; // 0x28
		::System::Boolean ForceDefault; // 0x30
		::System::Boolean NoFixedPlayerOnState; // 0x31
		::MoleMole::PlayerOnViewState PlayerOnState; // 0x32
		::System::Boolean PrevNode; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_24* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
