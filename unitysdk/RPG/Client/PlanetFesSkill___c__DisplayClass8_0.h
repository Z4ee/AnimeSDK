#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSkill; }

#define RPG_CLIENT_PLANETFESSKILL___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C5020)
#define RPG_CLIENT_PLANETFESSKILL___C__DISPLAYCLASS8_0__ISPREPRECONDITIONSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x1C2C53B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkill___c__DisplayClass8_0_TypeDefinitionIndex = 66663;

	class PlanetFesSkill___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPrePreConditionSkill_b__0(::RPG::Client::PlanetFesSkill* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL___C__DISPLAYCLASS8_0__ISPREPRECONDITIONSKILL_B__0_OFFSET))(this, a1);
		}
	};
}
