#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_40E291F340E2D9F9;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System { class String; }

#define CLASS_1_B0DA11437E1A4273_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x165877E0)
#define CLASS_1_B0DA11437E1A4273_SPAWN_OFFSET UNITYSDK_OFFSET(0x16587720)
#define CLASS_1_B0DA11437E1A4273__CTOR_OFFSET UNITYSDK_OFFSET(0x165877D0)

inline static constexpr unsigned int Class_1_B0DA11437E1A4273_TypeDefinitionIndex = 44705;

class Class_1_B0DA11437E1A4273 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0DA11437E1A4273__CTOR_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateMachineBaseAction* Spawn(::Class_3_40E291F340E2D9F9* a1, ::System::Int32 a2)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::PVOID, ::Class_3_40E291F340E2D9F9*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B0DA11437E1A4273_SPAWN_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0DA11437E1A4273_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}
};
