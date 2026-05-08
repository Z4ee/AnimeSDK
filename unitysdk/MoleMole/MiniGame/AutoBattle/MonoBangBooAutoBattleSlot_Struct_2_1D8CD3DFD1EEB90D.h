#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/AutoBattle/MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_STRUCT_2_1D8CD3DFD1EEB90D__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

namespace MoleMole::MiniGame::AutoBattle
{
	inline static constexpr unsigned int MonoBangBooAutoBattleSlot_Struct_2_1D8CD3DFD1EEB90D_TypeDefinitionIndex = 63827;

	struct alignas(8) MonoBangBooAutoBattleSlot_Struct_2_1D8CD3DFD1EEB90D
	{
		::UnityEngine::Transform* Field_2_0; // 0x10
		::System::Func_2<::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B, ::System::Boolean>* Field_2_1; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Func_2<::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B, ::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Func_2<::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_STRUCT_2_1D8CD3DFD1EEB90D__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
