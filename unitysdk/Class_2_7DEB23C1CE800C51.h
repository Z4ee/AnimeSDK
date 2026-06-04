#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/GarbageBinState.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"

class Class_1_321489CFFF7B18E7_1;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_7DEB23C1CE800C51_CLEAR_OFFSET UNITYSDK_OFFSET(0xA6A2390)
#define CLASS_2_7DEB23C1CE800C51_METHOD_2_B156C85CB0B77276_OFFSET UNITYSDK_OFFSET(0xA6A21A0)
#define CLASS_2_7DEB23C1CE800C51_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0xA6A2410)
#define CLASS_2_7DEB23C1CE800C51__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A24E0)
#define CLASS_2_7DEB23C1CE800C51___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA6A2500)

inline static constexpr unsigned int Class_2_7DEB23C1CE800C51_TypeDefinitionIndex = 71634;

class Class_2_7DEB23C1CE800C51 : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::Client::LittleGame::FiveDim::GarbageBinState, ::Class_1_321489CFFF7B18E7_1*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_2_0; // 0x28
	::Class_2_B9E8C2EEAA5C96EC* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DEB23C1CE800C51__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B156C85CB0B77276(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_7DEB23C1CE800C51_METHOD_2_B156C85CB0B77276_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DEB23C1CE800C51_CLEAR_OFFSET))(this);
	}

	::System::Boolean SwitchState(::RPG::Client::LittleGame::FiveDim::GarbageBinState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::GarbageBinState))((::PBYTE)hIl2Cpp + CLASS_2_7DEB23C1CE800C51_SWITCHSTATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DEB23C1CE800C51___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
