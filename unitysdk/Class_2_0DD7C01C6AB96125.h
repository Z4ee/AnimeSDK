#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_0DD7C01C6AB96125_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x115C2210)
#define CLASS_2_0DD7C01C6AB96125_METHOD_2_29CCD26C6A3DEA02_OFFSET UNITYSDK_OFFSET(0x115C22A0)
#define CLASS_2_0DD7C01C6AB96125_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x115C2230)
#define CLASS_2_0DD7C01C6AB96125_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x115C2060)
#define CLASS_2_0DD7C01C6AB96125_METHOD_2_92620D066F55AEE9_OFFSET UNITYSDK_OFFSET(0x115C2110)
#define CLASS_2_0DD7C01C6AB96125_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x115C2220)
#define CLASS_2_0DD7C01C6AB96125_METHOD_2_F6EEA5546296EDDD_OFFSET UNITYSDK_OFFSET(0x115C20B0)
#define CLASS_2_0DD7C01C6AB96125__CTOR_OFFSET UNITYSDK_OFFSET(0x115C2020)

inline static constexpr unsigned int Class_2_0DD7C01C6AB96125_TypeDefinitionIndex = 45918;

class Class_2_0DD7C01C6AB96125 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_2_2; // 0x68
	::RPG::GameCore::GameEntity* Field_2_0; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_F6EEA5546296EDDD()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125_METHOD_2_F6EEA5546296EDDD_OFFSET))(this);
	}

	::System::Void Method_2_92620D066F55AEE9(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125_METHOD_2_92620D066F55AEE9_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_29CCD26C6A3DEA02(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DD7C01C6AB96125_METHOD_2_29CCD26C6A3DEA02_OFFSET))(this, P0, P1);
	}
};
