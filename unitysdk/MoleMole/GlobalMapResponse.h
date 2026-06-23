#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_GLOBALMAPRESPONSE_METHOD_5_0B63A0EF42BD601E_OFFSET UNITYSDK_OFFSET(0x13EE1C00)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x13EE1AC0)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13EE1A80)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x13EE1B10)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x13EE1B60)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x13EE1A30)
#define MOLEMOLE_GLOBALMAPRESPONSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EE17F0)
#define MOLEMOLE_GLOBALMAPRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1BB0)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalMapResponse_TypeDefinitionIndex = 75181;

	class GlobalMapResponse : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 Field_5_0; // 0x18
		::UnityEngine::Vector3 Field_5_1; // 0x24
		::UnityEngine::Vector2 Field_5_2; // 0x30
		::UnityEngine::UI::RawImage* GlobalmapFogMask; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_UPDATE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONENDDRAG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_0B63A0EF42BD601E(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_METHOD_5_0B63A0EF42BD601E_OFFSET))(this, a1);
		}
	};
}
