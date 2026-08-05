#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_31;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x12EE58A0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_GETSTATEEFFECT_OFFSET UNITYSDK_OFFSET(0x12EE5850)
#define MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x12EE5920)
#define MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_RUN_OFFSET UNITYSDK_OFFSET(0x12EE5510)
#define MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_STOP_OFFSET UNITYSDK_OFFSET(0x12EE58E0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE5930)
#define MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE__RUN_B__4_0_OFFSET UNITYSDK_OFFSET(0x12EE5940)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParticleVE_TypeDefinitionIndex = 67704;

	class ParticleVE : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::String* ParticlePath; // 0x28
		::System::Boolean SkipWait; // 0x30
		::System::Boolean IsInstantParticle; // 0x31
		::System::Boolean NeedStopAll; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_RUN_OFFSET))(this, context);
		}

		::MoleMole::UIHollowChessPieceParticle* GetStateEffect(::System::String* path)
		{
			return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_GETSTATEEFFECT_OFFSET))(this, path);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void _Run_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARTICLEVE__RUN_B__4_0_OFFSET))(this);
		}
	};
}
