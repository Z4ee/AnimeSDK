#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B3D92372F8A5AB74_BattleActionType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_119;
class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_5A5C2C2245BED1D2_OFFSET UNITYSDK_OFFSET(0x145BAD30)
#define CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_6A4C4FE2123534CE_OFFSET UNITYSDK_OFFSET(0x145C1470)
#define CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_9557973674FE3DBD_OFFSET UNITYSDK_OFFSET(0x145BAF90)
#define CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_1_OFFSET UNITYSDK_OFFSET(0x145C13F0)
#define CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_OFFSET UNITYSDK_OFFSET(0x145C1370)
#define CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_F83B2941E7B0A301_OFFSET UNITYSDK_OFFSET(0x145BD870)
#define CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824__CTOR_OFFSET UNITYSDK_OFFSET(0x145B6020)

inline static constexpr unsigned int Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824_TypeDefinitionIndex = 52473;

class Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::Class_1_43BD383C98B4C0C5_119* Field_1_6; // 0x40
	::Class_1_843DD6330B22E422* Field_1_7; // 0x48
	::System::String* Field_1_8; // 0x50
	::RPG::GameCore::AttackData* Field_1_9; // 0x58
	::System::String* Field_1_10; // 0x60
	::System::String* Field_1_11; // 0x68
	::System::String* Field_1_12; // 0x70
	::System::String* Field_1_13; // 0x78
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_14; // 0x80
	::System::String* Field_1_15; // 0x88
	::RPG::GameCore::FixPoint Field_1_16; // 0x90
	::RPG::GameCore::FixPoint Field_1_17; // 0x98
	::RPG::GameCore::FixPoint Field_1_18; // 0xA0
	::RPG::GameCore::FixPoint Field_1_19; // 0xA8
	::RPG::GameCore::FixPoint Field_1_20; // 0xB0
	::RPG::GameCore::FixPoint Field_1_21; // 0xB8
	::RPG::GameCore::SkillType Field_1_22; // 0xC0
	::System::Int32 Field_1_23; // 0xC4
	::System::UInt32 Field_1_24; // 0xC8
	::System::UInt32 Field_1_25; // 0xCC
	::RPG::GameCore::FixPoint Field_1_26; // 0xD0
	::RPG::GameCore::FixPoint Field_1_27; // 0xD8
	::RPG::GameCore::FixPoint Field_1_28; // 0xE0
	::Class_1_B3D92372F8A5AB74_BattleActionType Field_1_29; // 0xE8
	::System::Boolean Field_1_30; // 0xEC
	::System::Boolean Field_1_31; // 0xED
	::RPG::GameCore::FixPoint Field_1_32; // 0xF0
	::RPG::GameCore::FixPoint Field_1_33; // 0xF8
	::RPG::GameCore::FixPoint Field_1_34; // 0x100
	::RPG::GameCore::FixPoint Field_1_35; // 0x108
	::RPG::GameCore::FixPoint Field_1_36; // 0x110
	::RPG::GameCore::TeamType Field_1_37; // 0x118
	::RPG::GameCore::AttackType Field_1_38; // 0x11C
	::System::UInt32 Field_1_39; // 0x120
	::System::Single Field_1_40; // 0x124
	::RPG::GameCore::FixPoint Field_1_41; // 0x128
	::RPG::GameCore::FixPoint Field_1_42; // 0x130
	::RPG::GameCore::FixPoint Field_1_43; // 0x138
	::System::Int32 Field_1_44; // 0x140
	::RPG::GameCore::TeamType Field_1_45; // 0x144

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824__CTOR_OFFSET))(this, a1);
	}

	::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824* Method_1_F83B2941E7B0A301(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_F83B2941E7B0A301_OFFSET))(this, a1);
	}

	::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824* Method_1_5A5C2C2245BED1D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_5A5C2C2245BED1D2_OFFSET))(this, a1);
	}

	::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824* Method_1_9557973674FE3DBD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_9557973674FE3DBD_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_978871DC1BE4B568(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_978871DC1BE4B568_1(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_6A4C4FE2123534CE(::Il2CppArray<::RPG::GameCore::AbilityProperty>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_CLASS_1_A07D6A22A9F47824_METHOD_1_6A4C4FE2123534CE_OFFSET))(this, a1, a2);
	}
};
