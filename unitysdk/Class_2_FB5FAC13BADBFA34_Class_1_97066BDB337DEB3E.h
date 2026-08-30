#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1100;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_FB5FAC13BADBFA34_CLASS_1_97066BDB337DEB3E__CTOR_OFFSET UNITYSDK_OFFSET(0xE2BEEA0)

inline static constexpr unsigned int Class_2_FB5FAC13BADBFA34_Class_1_97066BDB337DEB3E_TypeDefinitionIndex = 71628;

class Class_2_FB5FAC13BADBFA34_Class_1_97066BDB337DEB3E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1100* ALFPNBPHAPK; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType OPDIIFPICPB; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1100* a1, ::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1100*, ::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType))((::PBYTE)hIl2Cpp + CLASS_2_FB5FAC13BADBFA34_CLASS_1_97066BDB337DEB3E__CTOR_OFFSET))(this, a1, a2);
	}
};
