#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define SRF_UI_UNSELECTABLE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x19EB1520)
#define SRF_UI_UNSELECTABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19EB1530)
#define SRF_UI_UNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB1650)

namespace SRF::UI
{
	inline static constexpr unsigned int Unselectable_TypeDefinitionIndex = 33312;

	class Unselectable : public ::SRF::SRMonoBehaviour
	{
	public:
		::System::Boolean _suspectedSelected; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_UNSELECTABLE__CTOR_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + SRF_UI_UNSELECTABLE_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_UNSELECTABLE_UPDATE_OFFSET))(this);
		}
	};
}
