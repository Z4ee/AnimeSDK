#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleTeamInfoViewModel___O_TypeDefinitionIndex = 76020;

	class FateRinBattleTeamInfoViewModel___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____OnPageEnter()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleTeamInfoViewModel___O_TypeDefinitionIndex)->GetStaticField(0x5A80);
		}
	};
}
