#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_D50913C0AC7A262A;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_6C1010345A89A766_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A04DB0)
#define CLASS_2_6C1010345A89A766_DOONENTER_OFFSET UNITYSDK_OFFSET(0x19A04E50)
#define CLASS_2_6C1010345A89A766_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x19A04EB0)
#define CLASS_2_6C1010345A89A766__CTOR_OFFSET UNITYSDK_OFFSET(0x19A04D60)

inline static constexpr unsigned int Class_2_6C1010345A89A766_TypeDefinitionIndex = 69417;

class Class_2_6C1010345A89A766 : public ::Class_1_29B23DDF98AF43AC
{
public:
	::Class_1_D50913C0AC7A262A* KGCNPIEDOCA; // 0x98
	::System::Int32 FGLKHFAAGGF; // 0xA0

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
};
