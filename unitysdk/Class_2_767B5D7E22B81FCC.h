#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_StackAdditiveProperty; }

#define CLASS_2_767B5D7E22B81FCC_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1C27F9D0)
#define CLASS_2_767B5D7E22B81FCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27F9C0)

inline static constexpr unsigned int Class_2_767B5D7E22B81FCC_TypeDefinitionIndex = 35610;

class Class_2_767B5D7E22B81FCC : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* IGHAHBNLIJA; // 0x18
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_767B5D7E22B81FCC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_767B5D7E22B81FCC_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}
};
