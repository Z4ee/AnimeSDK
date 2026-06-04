#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_D50913C0AC7A262A;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_6C1010345A89A766_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1360B3A0)
#define CLASS_2_6C1010345A89A766_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1360B440)
#define CLASS_2_6C1010345A89A766_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1360B4A0)
#define CLASS_2_6C1010345A89A766__CTOR_OFFSET UNITYSDK_OFFSET(0x1360B350)
#define CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1360B510)
#define CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1360B520)
#define CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1360B530)

inline static constexpr unsigned int Class_2_6C1010345A89A766_TypeDefinitionIndex = 64923;

class Class_2_6C1010345A89A766 : public ::Class_1_A696AB4980B3D7B5
{
public:
	::Class_1_D50913C0AC7A262A* Field_2_0; // 0x98
	::System::Int32 Field_2_1; // 0xA0

	::System::Void _ctor(::Class_1_D50913C0AC7A262A* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D50913C0AC7A262A*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
