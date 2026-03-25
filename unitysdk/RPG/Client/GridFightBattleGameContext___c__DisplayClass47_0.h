#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97D67A0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS47_0___CREATETRAITS_B__0_OFFSET UNITYSDK_OFFSET(0x97D89C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass47_0_TypeDefinitionIndex = 52307;

	class GridFightBattleGameContext___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleGridFightTeamTraitData* battleTrait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateTraits_b__0(::RPG::Client::GridFightTrait* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS47_0___CREATETRAITS_B__0_OFFSET))(this, t);
		}
	};
}
