#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_STRUCT_2_1B86EF0E2A277D72__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBangBooAutoBattleSlot_Struct_2_1B86EF0E2A277D72_TypeDefinitionIndex = 58837;

	struct alignas(8) MonoBangBooAutoBattleSlot_Struct_2_1B86EF0E2A277D72
	{
		::UnityEngine::Transform* Field_2_0; // 0x10
		::System::Func_2<::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285, ::System::Boolean>* Field_2_1; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Func_2<::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285, ::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Func_2<::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_STRUCT_2_1B86EF0E2A277D72__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
