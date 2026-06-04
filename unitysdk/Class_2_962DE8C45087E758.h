#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_ExchangeHP; }

#define CLASS_2_962DE8C45087E758_METHOD_2_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x189E9D70)
#define CLASS_2_962DE8C45087E758__CTOR_OFFSET UNITYSDK_OFFSET(0x189E9D60)

inline static constexpr unsigned int Class_2_962DE8C45087E758_TypeDefinitionIndex = 34390;

class Class_2_962DE8C45087E758 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_962DE8C45087E758__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962DE8C45087E758_METHOD_2_655DDB722F1FDE73_OFFSET))(this);
	}
};
