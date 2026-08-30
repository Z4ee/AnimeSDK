#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_ExchangeHP; }

#define CLASS_2_962DE8C45087E758_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1C0B65C0)
#define CLASS_2_962DE8C45087E758__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08DCC0)

inline static constexpr unsigned int Class_2_962DE8C45087E758_TypeDefinitionIndex = 35633;

class Class_2_962DE8C45087E758 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* IGHAHBNLIJA; // 0x18
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_962DE8C45087E758__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962DE8C45087E758_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}
};
