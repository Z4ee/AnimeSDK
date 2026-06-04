#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_233239E442F2FA2C_METHOD_1_4260E3E936C086AF_OFFSET UNITYSDK_OFFSET(0x13D31260)
#define CLASS_1_233239E442F2FA2C_METHOD_1_90F6D5180CE95164_OFFSET UNITYSDK_OFFSET(0x13D31A70)
#define CLASS_1_233239E442F2FA2C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D31F50)

inline static constexpr unsigned int Class_1_233239E442F2FA2C_TypeDefinitionIndex = 62316;

class Class_1_233239E442F2FA2C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesSkill*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_233239E442F2FA2C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillPhase*>* Method_1_4260E3E936C086AF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillPhase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_233239E442F2FA2C_METHOD_1_4260E3E936C086AF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* Method_1_90F6D5180CE95164(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_233239E442F2FA2C_METHOD_1_90F6D5180CE95164_OFFSET))(this, a1);
	}
};
