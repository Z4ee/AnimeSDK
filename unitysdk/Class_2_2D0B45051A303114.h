#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/GarbageBinState.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"

class Class_1_321489CFFF7B18E7;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_2D0B45051A303114_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F7A470)
#define CLASS_2_2D0B45051A303114_METHOD_2_3DD510D7670D6602_OFFSET UNITYSDK_OFFSET(0x17F7A1F0)
#define CLASS_2_2D0B45051A303114_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x17F7A4F0)
#define CLASS_2_2D0B45051A303114__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7A5C0)

inline static constexpr unsigned int Class_2_2D0B45051A303114_TypeDefinitionIndex = 73160;

class Class_2_2D0B45051A303114 : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::Client::LittleGame::FiveDim::GarbageBinState, ::Class_1_321489CFFF7B18E7*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_2_0; // 0x28
	::Class_2_B9E8C2EEAA5C96EC* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D0B45051A303114__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3DD510D7670D6602(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_2D0B45051A303114_METHOD_2_3DD510D7670D6602_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D0B45051A303114_CLEAR_OFFSET))(this);
	}

	::System::Boolean SwitchState(::RPG::Client::LittleGame::FiveDim::GarbageBinState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::GarbageBinState))((::PBYTE)hIl2Cpp + CLASS_2_2D0B45051A303114_SWITCHSTATE_OFFSET))(this, a1);
	}
};
