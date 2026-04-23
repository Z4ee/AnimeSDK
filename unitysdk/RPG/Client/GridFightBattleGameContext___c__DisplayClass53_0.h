#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA44FA10)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0___CREATETRAITS_B__0_OFFSET UNITYSDK_OFFSET(0xA451D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass53_0_TypeDefinitionIndex = 59260;

	class GridFightBattleGameContext___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleGridFightTeamTraitData* battleTrait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateTraits_b__0(::RPG::Client::GridFightTrait* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0___CREATETRAITS_B__0_OFFSET))(this, t);
		}
	};
}
