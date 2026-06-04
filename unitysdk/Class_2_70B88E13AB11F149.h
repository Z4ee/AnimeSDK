#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A73EE3831056054.h"
#include "unitysdk/RPG/Client/AdventureEntityDieState.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }

#define CLASS_2_70B88E13AB11F149_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xA4FA420)
#define CLASS_2_70B88E13AB11F149_METHOD_2_3B043C5C33CE8683_OFFSET UNITYSDK_OFFSET(0xA4FA4B0)
#define CLASS_2_70B88E13AB11F149_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xA4FA520)
#define CLASS_2_70B88E13AB11F149_METHOD_2_9EF498B1022669D3_OFFSET UNITYSDK_OFFSET(0xA4FA020)
#define CLASS_2_70B88E13AB11F149_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xA4FA3B0)
#define CLASS_2_70B88E13AB11F149_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA4FA1A0)
#define CLASS_2_70B88E13AB11F149_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA4FA010)
#define CLASS_2_70B88E13AB11F149_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0xA4FA280)
#define CLASS_2_70B88E13AB11F149__CTOR_OFFSET UNITYSDK_OFFSET(0xA4FA4A0)

inline static constexpr unsigned int Class_2_70B88E13AB11F149_TypeDefinitionIndex = 56206;

class Class_2_70B88E13AB11F149 : public ::Class_1_2A73EE3831056054
{
public:
	::RPG::GameCore::PropComponent* Field_2_0; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_1; // 0x28
	::System::Single Field_2_2; // 0x30
	::RPG::Client::AdventureEntityDieState Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_9EF498B1022669D3(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_9EF498B1022669D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_3B043C5C33CE8683(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_3B043C5C33CE8683_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70B88E13AB11F149_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
