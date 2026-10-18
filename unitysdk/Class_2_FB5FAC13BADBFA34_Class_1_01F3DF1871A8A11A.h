#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1213;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FB5FAC13BADBFA34_CLASS_1_01F3DF1871A8A11A__CTOR_OFFSET UNITYSDK_OFFSET(0xE23EF10)

inline static constexpr unsigned int Class_2_FB5FAC13BADBFA34_Class_1_01F3DF1871A8A11A_TypeDefinitionIndex = 71680;

class Class_2_FB5FAC13BADBFA34_Class_1_01F3DF1871A8A11A : public ::System::Object
{
public:
	::UnityEngine::Transform* DHIPFJBEJPI; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::Class_0_16E4307DCC419505_1213* ALFPNBPHAPK; // 0x20
	::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType OPDIIFPICPB; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_1213* a1, ::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1213*, ::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FB5FAC13BADBFA34_CLASS_1_01F3DF1871A8A11A__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
