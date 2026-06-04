#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_523C55AEA55804D8;
class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA4CB850)
#define CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA4CBDB0)
#define CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CBC50)

inline static constexpr unsigned int Class_2_B905FCDC65EE337C_Class_1_EB44F7AFC0049A64_TypeDefinitionIndex = 53666;

class Class_2_B905FCDC65EE337C_Class_1_EB44F7AFC0049A64 : public ::System::Object
{
public:
	::RPG::GameCore::TransformComponent* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20
	::Class_2_523C55AEA55804D8* Field_1_3; // 0x28
	::Class_2_F1C3EBA366E084A2* Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x44
	::System::Boolean Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::UnityEngine::Vector3 Field_1_9; // 0x4C
	::System::Single Field_1_10; // 0x58
	::System::Single Field_1_11; // 0x5C
	::UnityEngine::Vector3 Field_1_12; // 0x60
	::UnityEngine::Vector3 Field_1_13; // 0x6C
	::UnityEngine::Vector3 Field_1_14; // 0x78
	::System::Single Field_1_15; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
