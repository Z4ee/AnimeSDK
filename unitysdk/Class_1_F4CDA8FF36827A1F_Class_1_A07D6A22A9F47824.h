#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4CDA8FF36827A1F_BattleActionType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_130;
class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_0EAC696610085644_OFFSET UNITYSDK_OFFSET(0xB4E2050)
#define CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_5A5C2C2245BED1D2_OFFSET UNITYSDK_OFFSET(0xB4DF150)
#define CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_6A4C4FE2123534CE_OFFSET UNITYSDK_OFFSET(0xB4E5FA0)
#define CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_9557973674FE3DBD_OFFSET UNITYSDK_OFFSET(0xB4DF3B0)
#define CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_1_OFFSET UNITYSDK_OFFSET(0xB4E5F20)
#define CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_OFFSET UNITYSDK_OFFSET(0xB4E5EA0)
#define CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824__CTOR_OFFSET UNITYSDK_OFFSET(0xB4DBAD0)

inline static constexpr unsigned int Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824_TypeDefinitionIndex = 56209;

class Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824 : public ::System::Object
{
public:
	::System::String* OOKIKHKPMDB; // 0x10
	::System::String* MGNNLEMDOEP; // 0x18
	::System::String* HCJJMPFAMPG; // 0x20
	::System::String* CIFMMNHCFPP; // 0x28
	::System::String* JJIGHCMEIOG; // 0x30
	::Class_1_843DD6330B22E422* DKLIOLLHPCD; // 0x38
	::System::String* CMBEAABNPNF; // 0x40
	::System::String* EIPCCBAIILO; // 0x48
	::Class_1_43BD383C98B4C0C5_130* JDMIDPLGJHB; // 0x50
	::RPG::GameCore::AttackData* GGEEAPOJKGA; // 0x58
	::System::String* KBKOGLCAEKG; // 0x60
	::System::String* BIHJOMFOPEF; // 0x68
	::System::String* CIDCEJCGOGB; // 0x70
	::Il2CppArray<::RPG::GameCore::FixPoint>* LFJADFGHCAG; // 0x78
	::System::String* FCCIKPPNBIB; // 0x80
	::Il2CppArray<::RPG::GameCore::FixPoint>* NCJEDLGIKID; // 0x88
	::RPG::GameCore::FixPoint FGJJDAGBAIK; // 0x90
	::RPG::GameCore::FixPoint HAIMFCEPABC; // 0x98
	::RPG::GameCore::FixPoint GICPKLPMOHL; // 0xA0
	::RPG::GameCore::FixPoint MDFKCMGPPDM; // 0xA8
	::RPG::GameCore::FixPoint KNGKLAIMGMP; // 0xB0
	::System::UInt32 BOKJJKFCFME; // 0xB8
	::System::UInt32 CPDPJFEEHHG; // 0xBC
	::RPG::GameCore::FixPoint EOMBCKAJDAK; // 0xC0
	::RPG::GameCore::FixPoint NDABIMGKOMC; // 0xC8
	::RPG::GameCore::SkillType JBCBONFABOM; // 0xD0
	::System::Boolean DFBLNFEGBFP; // 0xD4
	::System::Boolean KNDCAHDDHCO; // 0xD5
	::RPG::GameCore::FixPoint MMBEINNANKF; // 0xD8
	::RPG::GameCore::FixPoint MDCBJNEONIJ; // 0xE0
	::RPG::GameCore::FixPoint CBBGLNDJEEE; // 0xE8
	::System::Int32 FAICKBGJPNF; // 0xF0
	::System::Int32 FGIGJGGFIOP; // 0xF4
	::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0xF8
	::RPG::GameCore::FixPoint DPCJEJNLPAL; // 0x100
	::RPG::GameCore::FixPoint ACBENJHBMFE; // 0x108
	::System::Single GAFENHHEBPG; // 0x110
	::Class_1_F4CDA8FF36827A1F_BattleActionType GMPGDEINODK; // 0x114
	::RPG::GameCore::FixPoint AADEILGEDJN; // 0x118
	::RPG::GameCore::FixPoint LLEEFHICECO; // 0x120
	::RPG::GameCore::TeamType IBGEPEHFBOF; // 0x128
	::RPG::GameCore::TeamType LHKHAOBIADO; // 0x12C
	::RPG::GameCore::FixPoint GKLLOMFGMBI; // 0x130
	::RPG::GameCore::FixPoint KFDBCMOPLKC; // 0x138
	::System::UInt32 EPPHNPFFPOE; // 0x140
	::RPG::GameCore::AttackType BCGMMBMLAAC; // 0x144

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824__CTOR_OFFSET))(this, a1);
	}

	::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824* Method_1_0EAC696610085644(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_0EAC696610085644_OFFSET))(this, a1);
	}

	::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824* Method_1_5A5C2C2245BED1D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_5A5C2C2245BED1D2_OFFSET))(this, a1);
	}

	::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824* Method_1_9557973674FE3DBD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_9557973674FE3DBD_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_978871DC1BE4B568(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_978871DC1BE4B568_1(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_978871DC1BE4B568_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_6A4C4FE2123534CE(::Il2CppArray<::RPG::GameCore::AbilityProperty>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_CLASS_1_A07D6A22A9F47824_METHOD_1_6A4C4FE2123534CE_OFFSET))(this, a1, a2);
	}
};
