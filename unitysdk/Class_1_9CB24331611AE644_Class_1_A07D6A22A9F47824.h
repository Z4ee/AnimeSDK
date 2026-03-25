#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CB24331611AE644_BattleActionType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_256D9F63CEA2C6FD;
class Class_1_43BD383C98B4C0C5_105;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_5A5C2C2245BED1D2_OFFSET UNITYSDK_OFFSET(0x8A00F70)
#define CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_6A4C4FE2123534CE_OFFSET UNITYSDK_OFFSET(0x8A06210)
#define CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_9557973674FE3DBD_OFFSET UNITYSDK_OFFSET(0x8A011D0)
#define CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_1_OFFSET UNITYSDK_OFFSET(0x8A06190)
#define CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_OFFSET UNITYSDK_OFFSET(0x8A06110)
#define CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_F83B2941E7B0A301_OFFSET UNITYSDK_OFFSET(0x8A03820)
#define CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824__CTOR_OFFSET UNITYSDK_OFFSET(0x89FCA70)

inline static constexpr unsigned int Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824_TypeDefinitionIndex = 45050;

class Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824 : public ::System::Object
{
public:
	::System::String* Field_1_26; // 0x10
	::Class_1_256D9F63CEA2C6FD* Field_1_12; // 0x18
	::System::String* Field_1_42; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_14; // 0x28
	::System::String* Field_1_22; // 0x30
	::RPG::GameCore::AttackData* Field_1_11; // 0x38
	::System::String* Field_1_40; // 0x40
	::System::String* Field_1_1; // 0x48
	::System::String* Field_1_45; // 0x50
	::System::String* Field_1_44; // 0x58
	::System::String* Field_1_41; // 0x60
	::Class_1_43BD383C98B4C0C5_105* Field_1_32; // 0x68
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_13; // 0x70
	::System::String* Field_1_2; // 0x78
	::System::String* Field_1_5; // 0x80
	::System::String* Field_1_43; // 0x88
	::RPG::GameCore::FixPoint Field_1_36; // 0x90
	::RPG::GameCore::FixPoint Field_1_16; // 0x98
	::RPG::GameCore::FixPoint Field_1_17; // 0xA0
	::RPG::GameCore::FixPoint Field_1_27; // 0xA8
	::RPG::GameCore::FixPoint Field_1_34; // 0xB0
	::RPG::GameCore::FixPoint Field_1_38; // 0xB8
	::RPG::GameCore::FixPoint Field_1_33; // 0xC0
	::RPG::GameCore::FixPoint Field_1_35; // 0xC8
	::RPG::GameCore::TeamType Field_1_4; // 0xD0
	::System::Single Field_1_10; // 0xD4
	::RPG::GameCore::FixPoint Field_1_9; // 0xD8
	::System::UInt32 Field_1_21; // 0xE0
	::System::Boolean Field_1_20; // 0xE4
	::System::Boolean Field_1_30; // 0xE5
	::RPG::GameCore::FixPoint Field_1_25; // 0xE8
	::RPG::GameCore::FixPoint Field_1_37; // 0xF0
	::RPG::GameCore::FixPoint Field_1_39; // 0xF8
	::RPG::GameCore::FixPoint Field_1_18; // 0x100
	::RPG::GameCore::FixPoint Field_1_19; // 0x108
	::System::Int32 Field_1_31; // 0x110
	::System::UInt32 Field_1_3; // 0x114
	::RPG::GameCore::FixPoint Field_1_28; // 0x118
	::RPG::GameCore::FixPoint Field_1_29; // 0x120
	::System::UInt32 Field_1_6; // 0x128
	::RPG::GameCore::SkillType Field_1_23; // 0x12C
	::Class_1_9CB24331611AE644_BattleActionType Field_1_0; // 0x130
	::RPG::GameCore::TeamType Field_1_7; // 0x134
	::System::Int32 Field_1_8; // 0x138
	::RPG::GameCore::AttackType Field_1_24; // 0x13C
	::RPG::GameCore::FixPoint Field_1_15; // 0x140

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824__CTOR_OFFSET))(this, a1);
	}

	::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* Method_1_F83B2941E7B0A301(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_F83B2941E7B0A301_OFFSET))(this, a1);
	}

	::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* Method_1_5A5C2C2245BED1D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_5A5C2C2245BED1D2_OFFSET))(this, a1);
	}

	::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* Method_1_9557973674FE3DBD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_9557973674FE3DBD_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_978871DC1BE4B568(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_978871DC1BE4B568_1(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_6A4C4FE2123534CE(::Il2CppArray<::RPG::GameCore::AbilityProperty>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_CLASS_1_A07D6A22A9F47824_METHOD_1_6A4C4FE2123534CE_OFFSET))(this, a1, a2);
	}
};
