#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_SWITCHHANDDRAGHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE114D70)
#define RPG_CLIENT_SWITCHHANDDRAGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE114DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandDragHandler_TypeDefinitionIndex = 72847;

	class SwitchHandDragHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDDRAGHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDDRAGHANDLER_ONDRAG_OFFSET))(this, a1);
		}
	};
}
