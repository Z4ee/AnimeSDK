#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/GarbageBinState.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"

class Class_1_321489CFFF7B18E7;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_AC13015D9230225C_CLEAR_OFFSET UNITYSDK_OFFSET(0x113C26C0)
#define CLASS_2_AC13015D9230225C_METHOD_2_FEC5C1CEB96D71F7_OFFSET UNITYSDK_OFFSET(0x113C24F0)
#define CLASS_2_AC13015D9230225C_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x113C2720)
#define CLASS_2_AC13015D9230225C__CTOR_OFFSET UNITYSDK_OFFSET(0x113C2840)
#define CLASS_2_AC13015D9230225C___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x113C2860)

inline static constexpr unsigned int Class_2_AC13015D9230225C_TypeDefinitionIndex = 62778;

class Class_2_AC13015D9230225C : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::Client::LittleGame::FiveDim::GarbageBinState, ::Class_1_321489CFFF7B18E7*>
{
public:
	::Class_2_9DD8A46984F1AFFD* Field_2_0; // 0x28
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC13015D9230225C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FEC5C1CEB96D71F7(::Class_2_9DD8A46984F1AFFD* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_AC13015D9230225C_METHOD_2_FEC5C1CEB96D71F7_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC13015D9230225C_CLEAR_OFFSET))(this);
	}

	::System::Boolean SwitchState(::RPG::Client::LittleGame::FiveDim::GarbageBinState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::GarbageBinState))((::PBYTE)hIl2Cpp + CLASS_2_AC13015D9230225C_SWITCHSTATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC13015D9230225C___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
