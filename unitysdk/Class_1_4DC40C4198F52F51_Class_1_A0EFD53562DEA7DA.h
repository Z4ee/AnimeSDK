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

#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_2B2FF9ACB65F66C9_OFFSET UNITYSDK_OFFSET(0x188B5300)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_1_OFFSET UNITYSDK_OFFSET(0x188B72B0)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_5F8903E589E6EF89_OFFSET UNITYSDK_OFFSET(0x188B7210)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_88DDA15A82252D9E_OFFSET UNITYSDK_OFFSET(0x188B63A0)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_A6E2DA523F8F77CB_OFFSET UNITYSDK_OFFSET(0x188B5520)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA_METHOD_1_DC75D838F4B30D75_OFFSET UNITYSDK_OFFSET(0x188B7350)
#define CLASS_1_4DC40C4198F52F51_CLASS_1_A0EFD53562DEA7DA__CTOR_OFFSET UNITYSDK_OFFSET(0x188B29E0)

inline static constexpr unsigned int Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA_TypeDefinitionIndex = 54471;

class Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA : public ::System::Object
{
public:
	::System::String* OOKIKHKPMDB; // 0x10
	::System::String* CIDCEJCGOGB; // 0x18
	::System::String* CMBEAABNPNF; // 0x20
	::Class_1_43BD383C98B4C0C5_128* JDMIDPLGJHB; // 0x28
	::Il2CppArray<::RPG::GameCore::FixPoint>* NCJEDLGIKID; // 0x30
	::System::String* HCJJMPFAMPG; // 0x38
	::Il2CppArray<::RPG::GameCore::FixPoint>* LFJADFGHCAG; // 0x40
	::System::String* MGNNLEMDOEP; // 0x48
	::System::String* CIFMMNHCFPP; // 0x50
	::System::String* BIHJOMFOPEF; // 0x58
	::System::String* EIPCCBAIILO; // 0x60
	::System::String* FCCIKPPNBIB; // 0x68
	::RPG::GameCore::RtAttackData* GGEEAPOJKGA; // 0x70
	::System::String* JJIGHCMEIOG; // 0x78
	::System::String* KBKOGLCAEKG; // 0x80
	::Class_1_70CCABA9DB985F52* DKLIOLLHPCD; // 0x88
	::RPG::GameCore::AttackType BCGMMBMLAAC; // 0x90
	::Class_1_4DC40C4198F52F51_RtBattleActionType GMPGDEINODK; // 0x94
	::RPG::GameCore::FixPoint MDFKCMGPPDM; // 0x98
	::RPG::GameCore::FixPoint GKLLOMFGMBI; // 0xA0
	::RPG::GameCore::FixPoint CBBGLNDJEEE; // 0xA8
	::RPG::GameCore::FixPoint MMBEINNANKF; // 0xB0
	::RPG::GameCore::FixPoint GAFENHHEBPG; // 0xB8
	::RPG::GameCore::FixPoint OAAPECJINEB; // 0xC0
	::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0xC8
	::RPG::GameCore::TeamType LHKHAOBIADO; // 0xD0
	::RPG::GameCore::SkillType JBCBONFABOM; // 0xD4
	::RPG::GameCore::FixPoint FAICKBGJPNF; // 0xD8
	::System::Boolean DFBLNFEGBFP; // 0xE0
	::System::UInt32 EPPHNPFFPOE; // 0xE4
	::RPG::GameCore::TeamType IBGEPEHFBOF; // 0xE8
	::System::UInt32 BOKJJKFCFME; // 0xEC
	::RPG::GameCore::FixPoint BAPDOJKCNNJ; // 0xF0
	::RPG::GameCore::FixPoint KFDBCMOPLKC; // 0xF8
	::System::UInt32 CPDPJFEEHHG; // 0x100
	::RPG::GameCore::FixPoint FGJJDAGBAIK; // 0x108
	::RPG::GameCore::FixPoint AADEILGEDJN; // 0x110
	::RPG::GameCore::FixPoint KNGKLAIMGMP; // 0x118

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
