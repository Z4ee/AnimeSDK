#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIBubbleItem; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC58190)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_INIT_OFFSET UNITYSDK_OFFSET(0xDC58260)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTARTEDTICKING_OFFSET UNITYSDK_OFFSET(0xDC58560)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTOPPEDTICKING_OFFSET UNITYSDK_OFFSET(0xDC585B0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_TICK_OFFSET UNITYSDK_OFFSET(0xDC584C0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_UNINIT_OFFSET UNITYSDK_OFFSET(0xDC58390)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC58600)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleUpdater_TypeDefinitionIndex = 78281;

	class ChimeraDuelBubbleUpdater : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIBubbleItem* _BubbleItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_AWAKE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_UNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_TICK_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_Prop_IChimeraDuelTickable_OnStartedTicking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTARTEDTICKING_OFFSET))(this);
		}

		::System::Void RPG_Client_Prop_IChimeraDuelTickable_OnStoppedTicking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEUPDATER_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTOPPEDTICKING_OFFSET))(this);
		}
	};
}
