#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_Heal; }

#define CLASS_2_9C0E32B8CA88FB64_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x17B881F0)
#define CLASS_2_9C0E32B8CA88FB64__CTOR_OFFSET UNITYSDK_OFFSET(0x17B881E0)

inline static constexpr unsigned int Class_2_9C0E32B8CA88FB64_TypeDefinitionIndex = 34766;

class Class_2_9C0E32B8CA88FB64 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_Heal* Field_2_0; // 0x18
	::Class_2_48488E8DBD9F6BCE* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_Heal* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_Heal*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_9C0E32B8CA88FB64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C0E32B8CA88FB64_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
