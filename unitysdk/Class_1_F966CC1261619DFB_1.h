#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_1_F966CC1261619DFB_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD74C560)

inline static constexpr unsigned int Class_1_F966CC1261619DFB_1_TypeDefinitionIndex = 54419;

class Class_1_F966CC1261619DFB_1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* IHLPNILGJFG; // 0x10
	::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x18
	::System::String* GEIGNKLEOBD; // 0x20
	::System::Boolean JINNNOGPCAL; // 0x28
	::System::Boolean EJFHNCFMAJM; // 0x29
	::System::Boolean BPCKKJONPCB; // 0x2A
	::RPG::GameCore::AttackFormulaType LGLBKAAMKDI; // 0x2C
	::RPG::GameCore::DamageIntegerizeCategory FFGPLNGCLCO; // 0x30
	::RPG::GameCore::AttackType HIFKEKCELFB; // 0x34
	::RPG::GameCore::FixPoint DJGPEDODIDF; // 0x38
	::RPG::GameCore::FixPoint GOKGJINMAFC; // 0x40
	::RPG::GameCore::AttackFormulaType DHMCBHLGOND; // 0x48
	::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x4C
	::RPG::GameCore::FinalDamageFormulaType CMLMJOGKDNA; // 0x50
	::System::Boolean LOMIDJIEGPL; // 0x54
	::System::Boolean NCHIKFJFALF; // 0x55
	::RPG::GameCore::FixPoint HAGHFMMBPEF; // 0x58
	::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x60
	::RPG::GameCore::FixPoint HKDKCLGIEPH; // 0x68
	::RPG::GameCore::FixPoint CGNBOOOKGOL; // 0x70
	::RPG::GameCore::FixPoint PBDFPHELAHL; // 0x78
	::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x80
	::RPG::GameCore::FixPoint DPBEMCKKBLL; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F966CC1261619DFB_1__CTOR_OFFSET))(this);
	}
};
