#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/PinAlignment.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace SRDebugger::Services { class IConsoleService; }
namespace SRDebugger::Services { class IDebugTriggerService; }
namespace SRDebugger::UI::Other { class TriggerRoot; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1843C820)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x1843BEB0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1843BDD0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1843C6A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1843CBD0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1843C9D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONERROR_OFFSET UNITYSDK_OFFSET(0x1843C910)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONTRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1843CBE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SETTRIGGERPOSITION_OFFSET UNITYSDK_OFFSET(0x1843C780)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1843BE30)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1843C6B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1843CE40)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DebugTriggerImpl_TypeDefinitionIndex = 29723;

	class DebugTriggerImpl : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::IDebugTriggerService*>
	{
	public:
		::SRDebugger::PinAlignment _position; // 0x48
		::SRDebugger::UI::Other::TriggerRoot* _trigger; // 0x50
		::SRDebugger::Services::IConsoleService* _consoleService; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_ISENABLED_OFFSET))(this);
		}

		::System::Void set_IsEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_ISENABLED_OFFSET))(this, value);
		}

		::SRDebugger::PinAlignment get_Position()
		{
			return ((::SRDebugger::PinAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::SRDebugger::PinAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::PinAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_AWAKE_OFFSET))(this);
		}

		::System::Void OnError(::SRDebugger::Services::IConsoleService* console)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IConsoleService*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONERROR_OFFSET))(this, console);
		}

		::System::Void CreateTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_CREATETRIGGER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void OnActiveSceneChanged(::UnityEngine::SceneManagement::Scene s1, ::UnityEngine::SceneManagement::Scene s2)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONACTIVESCENECHANGED_OFFSET))(s1, s2);
		}

		::System::Void OnTriggerButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONTRIGGERBUTTONCLICK_OFFSET))(this);
		}

		static ::System::Void SetTriggerPosition(::UnityEngine::RectTransform* t, ::SRDebugger::PinAlignment position)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::SRDebugger::PinAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SETTRIGGERPOSITION_OFFSET))(t, position);
		}
	};
}
