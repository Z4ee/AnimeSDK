#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43B4CC10B76BE828_RtBattleActionType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_117;
class Class_1_70CCABA9DB985F52;
class Class_3_C22B3EED69F1AB77;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class String; }

#define CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_2B2FF9ACB65F66C9_OFFSET UNITYSDK_OFFSET(0xA74AEF0)
#define CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_1_OFFSET UNITYSDK_OFFSET(0xA74CB90)
#define CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_OFFSET UNITYSDK_OFFSET(0xA74CAF0)
#define CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_A6E2DA523F8F77CB_OFFSET UNITYSDK_OFFSET(0xA74B120)
#define CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_B5E47DD93D93AF85_OFFSET UNITYSDK_OFFSET(0xA74BEA0)
#define CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_DC75D838F4B30D75_OFFSET UNITYSDK_OFFSET(0xA74CC30)
#define CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA__CTOR_OFFSET UNITYSDK_OFFSET(0xA747880)

inline static constexpr unsigned int Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA_TypeDefinitionIndex = 50705;

class Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA : public ::System::Object
{
public:
	::RPG::GameCore::RtAttackData* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_7; // 0x48
	::Class_1_43BD383C98B4C0C5_117* Field_1_8; // 0x50
	::System::String* Field_1_9; // 0x58
	::System::String* Field_1_10; // 0x60
	::Class_1_70CCABA9DB985F52* Field_1_11; // 0x68
	::System::String* Field_1_12; // 0x70
	::System::String* Field_1_13; // 0x78
	::System::String* Field_1_14; // 0x80
	::System::String* Field_1_15; // 0x88
	::RPG::GameCore::TeamType Field_1_16; // 0x90
	::RPG::GameCore::TeamType Field_1_17; // 0x94
	::System::UInt32 Field_1_18; // 0x98
	::RPG::GameCore::FixPoint Field_1_19; // 0xA0
	::RPG::GameCore::FixPoint Field_1_20; // 0xA8
	::RPG::GameCore::SkillType Field_1_21; // 0xB0
	::Class_1_43B4CC10B76BE828_RtBattleActionType Field_1_22; // 0xB4
	::RPG::GameCore::FixPoint Field_1_23; // 0xB8
	::RPG::GameCore::FixPoint Field_1_24; // 0xC0
	::RPG::GameCore::FixPoint Field_1_25; // 0xC8
	::RPG::GameCore::FixPoint Field_1_26; // 0xD0
	::RPG::GameCore::FixPoint Field_1_27; // 0xD8
	::System::Boolean Field_1_28; // 0xE0
	::System::UInt32 Field_1_29; // 0xE4
	::RPG::GameCore::FixPoint Field_1_30; // 0xE8
	::RPG::GameCore::FixPoint Field_1_31; // 0xF0
	::RPG::GameCore::FixPoint Field_1_32; // 0xF8
	::RPG::GameCore::AttackType Field_1_33; // 0x100
	::System::UInt32 Field_1_34; // 0x104
	::RPG::GameCore::FixPoint Field_1_35; // 0x108
	::RPG::GameCore::FixPoint Field_1_36; // 0x110
	::RPG::GameCore::FixPoint Field_1_37; // 0x118

	::System::Void _ctor(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA__CTOR_OFFSET))(this, a1);
	}

	::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA* Method_1_B5E47DD93D93AF85(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_B5E47DD93D93AF85_OFFSET))(this, a1);
	}

	::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA* Method_1_2B2FF9ACB65F66C9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_2B2FF9ACB65F66C9_OFFSET))(this, a1);
	}

	::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA* Method_1_A6E2DA523F8F77CB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_A6E2DA523F8F77CB_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_5F8903E589E6EF89(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_5F8903E589E6EF89_1(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_DC75D838F4B30D75(::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* a1, ::Class_3_C22B3EED69F1AB77* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>*, ::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_CLASS_1_A0EFD53562DEA7DA_METHOD_1_DC75D838F4B30D75_OFFSET))(this, a1, a2);
	}
};
