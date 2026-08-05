#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RUNTIMEMONSTERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x116CA1F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem_RuntimeMonsterGroup_TypeDefinitionIndex = 68746;

	class HighLightAirCombatSubSystem_RuntimeMonsterGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* monsters; // 0x10
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RUNTIMEMONSTERGROUP__CTOR_OFFSET))(this);
		}
	};
}
