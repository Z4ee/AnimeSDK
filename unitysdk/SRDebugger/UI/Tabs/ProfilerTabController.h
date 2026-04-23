#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19EA1610)
#define SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_PINTOGGLEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19EA1590)
#define SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x19EA1460)
#define SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x19EA12B0)
#define SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19EA1620)
#define SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA1760)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int ProfilerTabController_TypeDefinitionIndex = 35361;

	class ProfilerTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Boolean _isDirty; // 0x48
		::UnityEngine::UI::Toggle* PinToggle; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_START_OFFSET))(this);
		}

		::System::Void PinToggleValueChanged(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_PINTOGGLEVALUECHANGED_OFFSET))(this, isOn);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PROFILERTABCONTROLLER_REFRESH_OFFSET))(this);
		}
	};
}
