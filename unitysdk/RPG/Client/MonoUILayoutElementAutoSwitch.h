#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace RPG::Client { class MonoUILayoutElementAutoSwitch_LayoutElementProperty; }

#define RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH_AWAKE_OFFSET UNITYSDK_OFFSET(0xD872F90)
#define RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH_METHOD_6_DEE0FB4BF564E298_OFFSET UNITYSDK_OFFSET(0xD873020)
#define RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xD873520)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUILayoutElementAutoSwitch_TypeDefinitionIndex = 72613;

	class MonoUILayoutElementAutoSwitch : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::RPG::Client::MonoUILayoutElementAutoSwitch_LayoutElementProperty* DefaultLayoutElement; // 0x18
		::RPG::Client::MonoUILayoutElementAutoSwitch_LayoutElementProperty* PCLayoutElement; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH_AWAKE_OFFSET))(this);
		}

		::System::Void Method_6_DEE0FB4BF564E298(::RPG::Client::MonoUILayoutElementAutoSwitch_LayoutElementProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoUILayoutElementAutoSwitch_LayoutElementProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH_METHOD_6_DEE0FB4BF564E298_OFFSET))(this, a1);
		}
	};
}
