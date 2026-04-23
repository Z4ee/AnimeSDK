#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_B958907EBFDC8D4E;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_6C1010345A89A766_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12900290)
#define CLASS_2_6C1010345A89A766_DOONENTER_OFFSET UNITYSDK_OFFSET(0x12900330)
#define CLASS_2_6C1010345A89A766_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x12900390)
#define CLASS_2_6C1010345A89A766__CTOR_OFFSET UNITYSDK_OFFSET(0x12900240)
#define CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12900400)
#define CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x12900410)
#define CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x12900420)

inline static constexpr unsigned int Class_2_6C1010345A89A766_TypeDefinitionIndex = 64002;

class Class_2_6C1010345A89A766 : public ::Class_1_59305B446B42427E
{
public:
	::Class_1_B958907EBFDC8D4E* Field_2_1; // 0x98
	::System::Int32 Field_2_0; // 0xA0

	::System::Void _ctor(::Class_1_B958907EBFDC8D4E* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B958907EBFDC8D4E*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766__CTOR_OFFSET))(this, a1, a2, a3);
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

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6C1010345A89A766___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
