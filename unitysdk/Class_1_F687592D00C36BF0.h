#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelCompareType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;

#define CLASS_1_F687592D00C36BF0_METHOD_1_0A60931E5844009D_OFFSET UNITYSDK_OFFSET(0x1151B3C0)
#define CLASS_1_F687592D00C36BF0_METHOD_1_1201E8DE5B8B63E6_OFFSET UNITYSDK_OFFSET(0x1151B5D0)
#define CLASS_1_F687592D00C36BF0_METHOD_1_C5E2CADC48C7877B_OFFSET UNITYSDK_OFFSET(0x1151B930)
#define CLASS_1_F687592D00C36BF0_METHOD_1_E64BE3A813E9748A_OFFSET UNITYSDK_OFFSET(0x1151BA30)

inline static constexpr unsigned int Class_1_F687592D00C36BF0_TypeDefinitionIndex = 63119;

class Class_1_F687592D00C36BF0 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_0A60931E5844009D(::RPG::GameCore::ChimeraDuelCompareType a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChimeraDuelCompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F687592D00C36BF0_METHOD_1_0A60931E5844009D_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_1201E8DE5B8B63E6(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelAttributeSelectorType a2)
	{
		return ((::System::Single(*)(::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelAttributeSelectorType))((::PBYTE)hIl2Cpp + CLASS_1_F687592D00C36BF0_METHOD_1_1201E8DE5B8B63E6_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::ChimeraDuelTeamType Method_1_C5E2CADC48C7877B(::RPG::GameCore::ChimeraDuelTeamType a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2, ::RPG::GameCore::ChimeraDuelTeamType a3)
	{
		return ((::RPG::GameCore::ChimeraDuelTeamType(*)(::RPG::GameCore::ChimeraDuelTeamType, ::RPG::GameCore::ChimeraDuelTeamSelectorType, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_F687592D00C36BF0_METHOD_1_C5E2CADC48C7877B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E64BE3A813E9748A(::RPG::GameCore::ChimeraDuelTeamType a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::RPG::GameCore::ChimeraDuelTeamSelectorType a3, ::RPG::GameCore::ChimeraDuelTeamType a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChimeraDuelTeamType, ::RPG::GameCore::ChimeraDuelTeamType, ::RPG::GameCore::ChimeraDuelTeamSelectorType, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_F687592D00C36BF0_METHOD_1_E64BE3A813E9748A_OFFSET))(a1, a2, a3, a4);
	}
};
