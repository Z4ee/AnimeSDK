#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A73EE3831056054.h"
#include "unitysdk/RPG/Client/AdventureEntityDieState.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }

#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_3114DA08F93EBF5A_OFFSET UNITYSDK_OFFSET(0x97474A0)
#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x9747410)
#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x9747520)
#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_9EF498B1022669D3_OFFSET UNITYSDK_OFFSET(0x9747010)
#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x97473A0)
#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9747190)
#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9747000)
#define CLASS_2_4F2DEAF7B19859AA_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x9747270)
#define CLASS_2_4F2DEAF7B19859AA__CTOR_OFFSET UNITYSDK_OFFSET(0x9747490)

inline static constexpr unsigned int Class_2_4F2DEAF7B19859AA_TypeDefinitionIndex = 55455;

class Class_2_4F2DEAF7B19859AA : public ::Class_1_2A73EE3831056054
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x20
	::RPG::GameCore::PropComponent* Field_2_1; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34
	::RPG::Client::AdventureEntityDieState Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_9EF498B1022669D3(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_9EF498B1022669D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_3114DA08F93EBF5A(::RPG::GameCore::GameEntity* P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_3114DA08F93EBF5A_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F2DEAF7B19859AA_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
