#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatTaskConfig_AIEffectScore; }

#define CLASS_2_1BCF3218CDB93711_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x162729C0)
#define CLASS_2_1BCF3218CDB93711__CTOR_OFFSET UNITYSDK_OFFSET(0x162729B0)

inline static constexpr unsigned int Class_2_1BCF3218CDB93711_TypeDefinitionIndex = 35635;

class Class_2_1BCF3218CDB93711 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* IGHAHBNLIJA; // 0x18
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_1BCF3218CDB93711__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BCF3218CDB93711_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}
};
