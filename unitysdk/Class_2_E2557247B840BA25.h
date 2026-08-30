#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7E61104234A02BD7.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::GameCore { class BattleVersusClickQTEConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E2557247B840BA25_METHOD_2_55B50F0EBC3528C6_OFFSET UNITYSDK_OFFSET(0x12E94A00)
#define CLASS_2_E2557247B840BA25__CTOR_OFFSET UNITYSDK_OFFSET(0x12E948A0)

inline static constexpr unsigned int Class_2_E2557247B840BA25_TypeDefinitionIndex = 56381;

class Class_2_E2557247B840BA25 : public ::Class_1_7E61104234A02BD7
{
public:
	::RPG::GameCore::FloatCurve* BPELOLLILDK; // 0x48
	::Class_1_1C30CE192ABE4C54* GHDIMNMDKBN; // 0x50
	::RPG::GameCore::FloatCurve* OOOAEGPJECD; // 0x58
	::RPG::GameCore::FloatCurve* FOOACKFOING; // 0x60
	::System::Single EFJAHDEMACL; // 0x68
	::System::Single MPHNBEOHEHK; // 0x6C
	::System::Single DDOGPCKGEAI; // 0x70
	::System::Single OCKLDNKHHHG; // 0x74
	::RPG::GameCore::StringHash CJDMFDGGAND; // 0x78

	::System::Void _ctor(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_E2557247B840BA25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_55B50F0EBC3528C6(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_E2557247B840BA25_METHOD_2_55B50F0EBC3528C6_OFFSET))(this, a1, a2);
	}
};
