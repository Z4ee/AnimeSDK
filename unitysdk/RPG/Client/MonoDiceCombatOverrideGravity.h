#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC076B00)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC076F80)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC076E00)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC076CF0)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_OVERRIDEGRAVITY_OFFSET UNITYSDK_OFFSET(0xC076C10)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_RESETGRAVITY_OFFSET UNITYSDK_OFFSET(0xC076ED0)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY__CTOR_OFFSET UNITYSDK_OFFSET(0xC077050)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatOverrideGravity_TypeDefinitionIndex = 59494;

	class MonoDiceCombatOverrideGravity : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ChangeGravity; // 0x18
		::System::Single OverrideGravityValue; // 0x1C
		::System::Single Field_5_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDESTROY_OFFSET))(this);
		}

		::System::Void OverrideGravity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_OVERRIDEGRAVITY_OFFSET))(this, a1);
		}

		::System::Void ResetGravity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_RESETGRAVITY_OFFSET))(this);
		}
	};
}
