#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3E93929C2887EBC6;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System { class String; }

#define CLASS_1_EEEABF1B21498A91_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x10C07FD0)
#define CLASS_1_EEEABF1B21498A91_SPAWN_OFFSET UNITYSDK_OFFSET(0x10C07F10)
#define CLASS_1_EEEABF1B21498A91__CTOR_OFFSET UNITYSDK_OFFSET(0x10C07FC0)

inline static constexpr unsigned int Class_1_EEEABF1B21498A91_TypeDefinitionIndex = 61658;

class Class_1_EEEABF1B21498A91 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEABF1B21498A91__CTOR_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateMachineBaseAction* Spawn(::Class_3_3E93929C2887EBC6* a1, ::System::Int32 a2)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::PVOID, ::Class_3_3E93929C2887EBC6*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EEEABF1B21498A91_SPAWN_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EEEABF1B21498A91_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}
};
