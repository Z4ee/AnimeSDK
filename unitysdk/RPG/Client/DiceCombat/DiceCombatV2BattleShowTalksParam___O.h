#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2BattleTalkData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleShowTalksParam___O_TypeDefinitionIndex = 69956;

	class DiceCombatV2BattleShowTalksParam___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2BattleShowTalksParam___O_TypeDefinitionIndex)->GetStaticField(0x647B0);
		}
	};
}
