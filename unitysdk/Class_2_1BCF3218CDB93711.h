#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatTaskConfig_AIEffectScore; }

#define CLASS_2_1BCF3218CDB93711_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x189B0040)
#define CLASS_2_1BCF3218CDB93711__CTOR_OFFSET UNITYSDK_OFFSET(0x189B0030)

inline static constexpr unsigned int Class_2_1BCF3218CDB93711_TypeDefinitionIndex = 34392;

class Class_2_1BCF3218CDB93711 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* Field_2_0; // 0x18
	::Class_3_F65294BF89CA0784* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_1BCF3218CDB93711__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BCF3218CDB93711_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
