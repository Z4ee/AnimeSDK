#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"
#include "unitysdk/Struct_2_27685EFF2E84A814.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_13902C8C62D1AE8D_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xC09F7B0)
#define CLASS_2_13902C8C62D1AE8D_METHOD_2_26840CB2D33A8DBD_OFFSET UNITYSDK_OFFSET(0xC09F230)
#define CLASS_2_13902C8C62D1AE8D_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xC09EF20)
#define CLASS_2_13902C8C62D1AE8D_METHOD_2_B98A585080E2577F_OFFSET UNITYSDK_OFFSET(0xC09F680)
#define CLASS_2_13902C8C62D1AE8D_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0xC09F930)
#define CLASS_2_13902C8C62D1AE8D_TICK_OFFSET UNITYSDK_OFFSET(0xC09F590)
#define CLASS_2_13902C8C62D1AE8D__CTOR_OFFSET UNITYSDK_OFFSET(0xC09EF10)

inline static constexpr unsigned int Class_2_13902C8C62D1AE8D_TypeDefinitionIndex = 56459;

class Class_2_13902C8C62D1AE8D : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_13902C8C62D1AE8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13902C8C62D1AE8D_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13902C8C62D1AE8D_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13902C8C62D1AE8D_TICK_OFFSET))(this, a1);
	}

	::Struct_2_27685EFF2E84A814 Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13902C8C62D1AE8D_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}

	::System::Boolean Method_2_26840CB2D33A8DBD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*&))((::PBYTE)hIl2Cpp + CLASS_2_13902C8C62D1AE8D_METHOD_2_26840CB2D33A8DBD_OFFSET))(this, a1, a2);
	}

	::Struct_2_27685EFF2E84A814 Method_2_B98A585080E2577F()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13902C8C62D1AE8D_METHOD_2_B98A585080E2577F_OFFSET))(this);
	}
};
