#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_233239E442F2FA2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA60D70)
#define CLASS_1_233239E442F2FA2C___C__CREATEPHASESKILLS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1AA60DE0)
#define CLASS_1_233239E442F2FA2C___C__CREATEPHASES_B__0_0_OFFSET UNITYSDK_OFFSET(0x1AA60DB0)
#define CLASS_1_233239E442F2FA2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA60DA0)

inline static constexpr unsigned int Class_1_233239E442F2FA2C___c_TypeDefinitionIndex = 66668;

class Class_1_233239E442F2FA2C___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::PlanetFesSkillPhase*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::RPG::Client::PlanetFesSkillPhase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_233239E442F2FA2C___c_TypeDefinitionIndex)->GetStaticField(0x64C80);
	}
	static ::System::Comparison_1<::RPG::Client::PlanetFesSkill*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::PlanetFesSkill*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_233239E442F2FA2C___c_TypeDefinitionIndex)->GetStaticField(0x64C88);
	}
	static ::Class_1_233239E442F2FA2C___c** StaticGet___9()
	{
		return (::Class_1_233239E442F2FA2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_233239E442F2FA2C___c_TypeDefinitionIndex)->GetStaticField(0x64C90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_233239E442F2FA2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_233239E442F2FA2C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CreatePhases_b__0_0(::RPG::Client::PlanetFesSkillPhase* a1, ::RPG::Client::PlanetFesSkillPhase* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + CLASS_1_233239E442F2FA2C___C__CREATEPHASES_B__0_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _CreatePhaseSkills_b__1_0(::RPG::Client::PlanetFesSkill* a1, ::RPG::Client::PlanetFesSkill* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkill*, ::RPG::Client::PlanetFesSkill*))((::PBYTE)hIl2Cpp + CLASS_1_233239E442F2FA2C___C__CREATEPHASESKILLS_B__1_0_OFFSET))(this, a1, a2);
	}
};
