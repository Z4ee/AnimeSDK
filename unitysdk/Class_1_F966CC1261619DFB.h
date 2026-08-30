#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_1_F966CC1261619DFB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A20140)

inline static constexpr unsigned int Class_1_F966CC1261619DFB_TypeDefinitionIndex = 54062;

class Class_1_F966CC1261619DFB : public ::System::Object
{
public:
	::System::String* GEIGNKLEOBD; // 0x10
	::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x18
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* IHLPNILGJFG; // 0x20
	::RPG::GameCore::FinalDamageFormulaType CMLMJOGKDNA; // 0x28
	::RPG::GameCore::AttackFormulaType DHMCBHLGOND; // 0x2C
	::RPG::GameCore::FixPoint DPBEMCKKBLL; // 0x30
	::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x38
	::RPG::GameCore::AttackType HIFKEKCELFB; // 0x40
	::System::Boolean EJFHNCFMAJM; // 0x44
	::System::Boolean JINNNOGPCAL; // 0x45
	::RPG::GameCore::FixPoint HAGHFMMBPEF; // 0x48
	::RPG::GameCore::FixPoint PBDFPHELAHL; // 0x50
	::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x58
	::System::Boolean BPCKKJONPCB; // 0x60
	::System::Boolean NCHIKFJFALF; // 0x61
	::System::Boolean LOMIDJIEGPL; // 0x62
	::RPG::GameCore::AttackFormulaType LGLBKAAMKDI; // 0x64
	::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x68
	::RPG::GameCore::FixPoint HKDKCLGIEPH; // 0x70
	::RPG::GameCore::FixPoint DJGPEDODIDF; // 0x78
	::RPG::GameCore::FixPoint GOKGJINMAFC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F966CC1261619DFB__CTOR_OFFSET))(this);
	}
};
