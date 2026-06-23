#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOUIDRAGSETTER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x173F8BF0)
#define MOLEMOLE_MONOUIDRAGSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x173F8C50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIDragSetter_TypeDefinitionIndex = 45922;

	class MonoUIDragSetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIDRAGSETTER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIDRAGSETTER_ONBEGINDRAG_OFFSET))(this, a1);
		}
	};
}
