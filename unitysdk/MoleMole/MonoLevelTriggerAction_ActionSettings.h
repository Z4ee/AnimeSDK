#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelTriggerAction_ActionSettings_Enum_3_A1D6CD16132C3768.h"
#include "unitysdk/MoleMole/MonoLevelTriggerAction_ActionSettings_Enum_3_B7600F4588443828.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoLevelTriggerAction_ActionSettings_TriggerEvent; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS_METHOD_2_D67C01E967FCF1F8_OFFSET UNITYSDK_OFFSET(0x7A35B0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x7A3540)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelTriggerAction_ActionSettings_TypeDefinitionIndex = 51683;

	struct alignas(8) MonoLevelTriggerAction_ActionSettings
	{
		::MoleMole::MonoLevelTriggerAction_ActionSettings_Enum_3_A1D6CD16132C3768 m_Action; // 0x10
		::UnityEngine::Object* m_Target; // 0x18
		::System::Int32 m_BoostAmount; // 0x20
		::System::Single m_StartTime; // 0x24
		::MoleMole::MonoLevelTriggerAction_ActionSettings_Enum_3_B7600F4588443828 m_Mode; // 0x28
		::MoleMole::MonoLevelTriggerAction_ActionSettings_TriggerEvent* m_Event; // 0x30

		::System::Void _ctor(::MoleMole::MonoLevelTriggerAction_ActionSettings_Enum_3_A1D6CD16132C3768 a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelTriggerAction_ActionSettings_Enum_3_A1D6CD16132C3768))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_D67C01E967FCF1F8(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS_METHOD_2_D67C01E967FCF1F8_OFFSET))(this, a1);
		}
	};
}
