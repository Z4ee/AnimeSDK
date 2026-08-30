#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD13A780)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS54_0___APPLYBATTLETRAITMODIFIERANDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD13D390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass54_0_TypeDefinitionIndex = 64467;

	class GridFightBattleGameContext___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleGridFightTeamTraitData* battleTrait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ApplyBattleTraitModifierAndEffect_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS54_0___APPLYBATTLETRAITMODIFIERANDEFFECT_B__0_OFFSET))(this, a1);
		}
	};
}
