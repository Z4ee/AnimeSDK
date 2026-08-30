#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4DC40C4198F52F51_RtBattleActionType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_128;
class Class_1_70CCABA9DB985F52;
class Class_3_C22B3EED69F1AB77;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class String; }

#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_2B2FF9ACB65F66C9_OFFSET UNITYSDK_OFFSET(0xBA46250)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_1_OFFSET UNITYSDK_OFFSET(0xBA481E0)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_OFFSET UNITYSDK_OFFSET(0xBA48140)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_88DDA15A82252D9E_OFFSET UNITYSDK_OFFSET(0xBA472E0)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_A6E2DA523F8F77CB_OFFSET UNITYSDK_OFFSET(0xBA46470)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_DC75D838F4B30D75_OFFSET UNITYSDK_OFFSET(0xBA48280)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA__CTOR_OFFSET UNITYSDK_OFFSET(0xBA43920)

inline static constexpr unsigned int Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA_TypeDefinitionIndex = 54471;

class Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* LFJADFGHCAG; // 0x10
	::System::String* CIDCEJCGOGB; // 0x18
	::System::String* JJIGHCMEIOG; // 0x20
	::System::String* HCJJMPFAMPG; // 0x28
	::System::String* BIHJOMFOPEF; // 0x30
	::Class_1_43BD383C98B4C0C5_128* JDMIDPLGJHB; // 0x38
	::Il2CppArray<::RPG::GameCore::FixPoint>* NCJEDLGIKID; // 0x40
	::System::String* KBKOGLCAEKG; // 0x48
	::System::String* OOKIKHKPMDB; // 0x50
	::System::String* MGNNLEMDOEP; // 0x58
	::Class_1_70CCABA9DB985F52* DKLIOLLHPCD; // 0x60
	::System::String* CMBEAABNPNF; // 0x68
	::System::String* EIPCCBAIILO; // 0x70
	::RPG::GameCore::RtAttackData* GGEEAPOJKGA; // 0x78
	::System::String* FCCIKPPNBIB; // 0x80
	::System::String* CIFMMNHCFPP; // 0x88
	::RPG::GameCore::FixPoint KFDBCMOPLKC; // 0x90
	::System::UInt32 EPPHNPFFPOE; // 0x98
	::RPG::GameCore::TeamType LHKHAOBIADO; // 0x9C
	::RPG::GameCore::FixPoint MMBEINNANKF; // 0xA0
	::RPG::GameCore::FixPoint FGJJDAGBAIK; // 0xA8
	::RPG::GameCore::FixPoint GKLLOMFGMBI; // 0xB0
	::RPG::GameCore::FixPoint CBBGLNDJEEE; // 0xB8
	::System::UInt32 CPDPJFEEHHG; // 0xC0
	::RPG::GameCore::TeamType IBGEPEHFBOF; // 0xC4
	::RPG::GameCore::AttackType BCGMMBMLAAC; // 0xC8
	::RPG::GameCore::FixPoint MDFKCMGPPDM; // 0xD0
	::Class_1_4DC40C4198F52F51_RtBattleActionType GMPGDEINODK; // 0xD8
	::RPG::GameCore::SkillType JBCBONFABOM; // 0xDC
	::RPG::GameCore::FixPoint AADEILGEDJN; // 0xE0
	::RPG::GameCore::FixPoint BAPDOJKCNNJ; // 0xE8
	::RPG::GameCore::FixPoint FAICKBGJPNF; // 0xF0
	::RPG::GameCore::FixPoint KNGKLAIMGMP; // 0xF8
	::System::Boolean DFBLNFEGBFP; // 0x100
	::System::UInt32 BOKJJKFCFME; // 0x104
	::RPG::GameCore::FixPoint GAFENHHEBPG; // 0x108
	::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0x110
	::RPG::GameCore::FixPoint OAAPECJINEB; // 0x118

	::System::Void _ctor(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA__CTOR_OFFSET))(this, a1);
	}

	::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA* Method_1_88DDA15A82252D9E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_88DDA15A82252D9E_OFFSET))(this, a1);
	}

	::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA* Method_1_2B2FF9ACB65F66C9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_2B2FF9ACB65F66C9_OFFSET))(this, a1);
	}

	::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA* Method_1_A6E2DA523F8F77CB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_A6E2DA523F8F77CB_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_5F8903E589E6EF89(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_5F8903E589E6EF89_1(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_DC75D838F4B30D75(::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* a1, ::Class_3_C22B3EED69F1AB77* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>*, ::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_DC75D838F4B30D75_OFFSET))(this, a1, a2);
	}
};
