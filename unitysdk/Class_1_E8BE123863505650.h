#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_1;
class Class_4_25476C0ECCF1BB17;
namespace RPG::GameCore { class DiceCombatPresetConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }

#define CLASS_1_E8BE123863505650_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1671C1A0)
#define CLASS_1_E8BE123863505650_METHOD_1_0AE687A793FE234B_OFFSET UNITYSDK_OFFSET(0x16732870)
#define CLASS_1_E8BE123863505650_METHOD_1_2FDFA00B10D29B1C_OFFSET UNITYSDK_OFFSET(0x16732530)
#define CLASS_1_E8BE123863505650_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x167324B0)
#define CLASS_1_E8BE123863505650_METHOD_1_DCDC37895F1EF8C1_OFFSET UNITYSDK_OFFSET(0x167326E0)
#define CLASS_1_E8BE123863505650__CTOR_OFFSET UNITYSDK_OFFSET(0x1671BD70)

inline static constexpr unsigned int Class_1_E8BE123863505650_TypeDefinitionIndex = 28577;

class Class_1_E8BE123863505650 : public ::System::Object
{
public:
	::RPG::GameCore::DiceCombatPresetConfig* Field_1_2; // 0x10
	::Class_4_25476C0ECCF1BB17* Field_1_0; // 0x18
	::Class_2_099B78418029B3B1_1* Field_1_1; // 0x20

	::System::Void _ctor(::Class_4_25476C0ECCF1BB17* a1, ::Class_2_099B78418029B3B1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_25476C0ECCF1BB17*, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_1_E8BE123863505650__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8BE123863505650_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8BE123863505650_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatPresetTurnConfig* Method_1_2FDFA00B10D29B1C(::System::Int32 a1)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E8BE123863505650_METHOD_1_2FDFA00B10D29B1C_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatPresetTurnActorConfig* Method_1_DCDC37895F1EF8C1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnActorConfig*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E8BE123863505650_METHOD_1_DCDC37895F1EF8C1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::DiceCombatPresetTurnActorRollConfig* Method_1_0AE687A793FE234B(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E8BE123863505650_METHOD_1_0AE687A793FE234B_OFFSET))(this, a1, a2, a3);
	}
};
