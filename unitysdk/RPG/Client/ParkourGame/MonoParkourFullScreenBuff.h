#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_METHOD_5_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0xAC249C0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_METHOD_5_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xAC24D80)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAC247E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAC246C0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_SETUPDURATION_OFFSET UNITYSDK_OFFSET(0xAC24910)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_UPDATE_OFFSET UNITYSDK_OFFSET(0xAC24CD0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xAC24E10)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourFullScreenBuff_TypeDefinitionIndex = 68245;

	class MonoParkourFullScreenBuff : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* BuffPanel; // 0x18
		::System::Single Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetupDuration(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_SETUPDURATION_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_3D6722B9F8F20694()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_METHOD_5_3D6722B9F8F20694_OFFSET))(this);
		}

		::System::Single Method_5_89FADE33F34E4AE0(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_METHOD_5_89FADE33F34E4AE0_OFFSET))(this, a1);
		}
	};
}
