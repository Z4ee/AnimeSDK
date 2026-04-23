#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/GarbageBinState.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"

class Class_1_321489CFFF7B18E7_1;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_3BB5F6CEDB0B0248_CLEAR_OFFSET UNITYSDK_OFFSET(0xF2DE960)
#define CLASS_2_3BB5F6CEDB0B0248_METHOD_2_18327705038C42E1_OFFSET UNITYSDK_OFFSET(0xF2DE760)
#define CLASS_2_3BB5F6CEDB0B0248_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0xF2DE9E0)
#define CLASS_2_3BB5F6CEDB0B0248__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DEB30)
#define CLASS_2_3BB5F6CEDB0B0248___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xF2DEB50)

inline static constexpr unsigned int Class_2_3BB5F6CEDB0B0248_TypeDefinitionIndex = 70815;

class Class_2_3BB5F6CEDB0B0248 : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::Client::LittleGame::FiveDim::GarbageBinState, ::Class_1_321489CFFF7B18E7_1*>
{
public:
	::Class_2_9DD8A46984F1AFFD* Field_2_0; // 0x28
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BB5F6CEDB0B0248__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_18327705038C42E1(::Class_2_9DD8A46984F1AFFD* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_3BB5F6CEDB0B0248_METHOD_2_18327705038C42E1_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BB5F6CEDB0B0248_CLEAR_OFFSET))(this);
	}

	::System::Boolean SwitchState(::RPG::Client::LittleGame::FiveDim::GarbageBinState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::GarbageBinState))((::PBYTE)hIl2Cpp + CLASS_2_3BB5F6CEDB0B0248_SWITCHSTATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BB5F6CEDB0B0248___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
