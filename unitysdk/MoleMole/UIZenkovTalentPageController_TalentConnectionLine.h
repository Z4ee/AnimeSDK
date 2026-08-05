#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZzzUiCurveGraphic_CurveType.h"

class ZzzUiCurveGraphic;
class ZzzUiCurveGraphic_CurveSegment;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_RECREATECURVE_OFFSET UNITYSDK_OFFSET(0x15B18440)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_SETOPEN_OFFSET UNITYSDK_OFFSET(0x15B185C0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B18400)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__SETOPEN_B__9_0_OFFSET UNITYSDK_OFFSET(0x15B18750)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController_TalentConnectionLine_TypeDefinitionIndex = 84329;

	class UIZenkovTalentPageController_TalentConnectionLine : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _to; // 0x10
		::ZzzUiCurveGraphic_CurveSegment* _segment; // 0x18
		::UnityEngine::RectTransform* _root; // 0x20
		::ZzzUiCurveGraphic* _drawer; // 0x28
		::UnityEngine::Transform* _from; // 0x30
		::System::Boolean _isOpen; // 0x38
		::System::Single _smoothness; // 0x3C
		::ZzzUiCurveGraphic_CurveType _curveType; // 0x40

		::System::Void _ctor(::UnityEngine::Transform* from, ::UnityEngine::Transform* to, ::UnityEngine::RectTransform* root, ::ZzzUiCurveGraphic* drawer, ::System::Boolean isOpen, ::ZzzUiCurveGraphic_CurveType curveType, ::System::Single smoothness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*, ::ZzzUiCurveGraphic*, ::System::Boolean, ::ZzzUiCurveGraphic_CurveType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__CTOR_OFFSET))(this, from, to, root, drawer, isOpen, curveType, smoothness);
		}

		::System::Boolean SetOpen(::System::Boolean isOpen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_SETOPEN_OFFSET))(this, isOpen);
		}

		::System::Void RecreateCurve(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_RECREATECURVE_OFFSET))(this, isOpen);
		}

		::System::Void _SetOpen_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__SETOPEN_B__9_0_OFFSET))(this);
		}
	};
}
