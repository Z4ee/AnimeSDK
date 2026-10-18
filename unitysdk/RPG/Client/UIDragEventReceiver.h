#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIDragScope; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGEVENTRECEIVER_METHOD_5_89CF125573DF9DA1_OFFSET UNITYSDK_OFFSET(0xE399160)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE3993F0)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE399260)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xE399450)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0xE399600)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragEventReceiver_TypeDefinitionIndex = 73059;

	class UIDragEventReceiver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIDragScope* OAMCDOCACHG; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIDragEventReceiver* Method_5_89CF125573DF9DA1(::RPG::Client::UIDragScope* a1)
		{
			return ((::RPG::Client::UIDragEventReceiver*(*)(::RPG::Client::UIDragScope*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_METHOD_5_89CF125573DF9DA1_OFFSET))(a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_ONENDDRAG_OFFSET))(this, a1);
		}
	};
}
