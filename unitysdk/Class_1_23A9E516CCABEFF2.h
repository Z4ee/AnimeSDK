#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_0190AB1E1065D718;
class Class_1_B8FF829EFDD29B81;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define CLASS_1_23A9E516CCABEFF2_METHOD_1_21BE89259F261A53_OFFSET UNITYSDK_OFFSET(0x162107F0)
#define CLASS_1_23A9E516CCABEFF2_METHOD_1_5B29EC1B70801E92_OFFSET UNITYSDK_OFFSET(0x162104C0)
#define CLASS_1_23A9E516CCABEFF2_METHOD_1_A7726EED312A3CE5_OFFSET UNITYSDK_OFFSET(0x162103B0)
#define CLASS_1_23A9E516CCABEFF2_METHOD_1_E922C258278F82B6_OFFSET UNITYSDK_OFFSET(0x16210990)
#define CLASS_1_23A9E516CCABEFF2_METHOD_1_EEFC8F0840EBCFA0_OFFSET UNITYSDK_OFFSET(0x162106C0)
#define CLASS_1_23A9E516CCABEFF2__CTOR_OFFSET UNITYSDK_OFFSET(0x162103A0)

inline static constexpr unsigned int Class_1_23A9E516CCABEFF2_TypeDefinitionIndex = 77351;

class Class_1_23A9E516CCABEFF2 : public ::System::Object
{
public:
	::Class_3_543326C044264182* ADJNOFMEIKM; // 0x10
	::Class_2_2090B77B5C7838F2* FKINCGODJEP; // 0x18

	::System::Void _ctor(::Class_3_543326C044264182* a1, ::Class_2_2090B77B5C7838F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_23A9E516CCABEFF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7726EED312A3CE5(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleTriggerCallback* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleTriggerCallback*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_23A9E516CCABEFF2_METHOD_1_A7726EED312A3CE5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5B29EC1B70801E92(::Class_2_6B60059019300BAD* a1, ::Class_1_0190AB1E1065D718* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_1_0190AB1E1065D718*))((::PBYTE)hIl2Cpp + CLASS_1_23A9E516CCABEFF2_METHOD_1_5B29EC1B70801E92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EEFC8F0840EBCFA0(::Class_2_6B60059019300BAD* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType))((::PBYTE)hIl2Cpp + CLASS_1_23A9E516CCABEFF2_METHOD_1_EEFC8F0840EBCFA0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21BE89259F261A53(::Class_2_6B60059019300BAD* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_23A9E516CCABEFF2_METHOD_1_21BE89259F261A53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E922C258278F82B6(::Class_2_6B60059019300BAD* a1, ::Class_1_0190AB1E1065D718* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_1_0190AB1E1065D718*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_23A9E516CCABEFF2_METHOD_1_E922C258278F82B6_OFFSET))(this, a1, a2, a3);
	}
};
