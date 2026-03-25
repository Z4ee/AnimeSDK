#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define SRF_UI_UNSELECTABLE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x184765B0)
#define SRF_UI_UNSELECTABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x184765C0)
#define SRF_UI_UNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184766E0)

namespace SRF::UI
{
	inline static constexpr unsigned int Unselectable_TypeDefinitionIndex = 27688;

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
