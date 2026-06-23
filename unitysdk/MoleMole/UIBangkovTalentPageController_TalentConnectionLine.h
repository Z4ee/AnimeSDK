#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ZzzUiCurveGraphic;
class ZzzUiCurveGraphic_CurveSegment;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_RECREATECURVES_OFFSET UNITYSDK_OFFSET(0x15E64360)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_SETOPEN_OFFSET UNITYSDK_OFFSET(0x15E648A0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E64330)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__SETOPEN_B__8_0_OFFSET UNITYSDK_OFFSET(0x15E64AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPageController_TalentConnectionLine_TypeDefinitionIndex = 69429;

	class UIBangkovTalentPageController_TalentConnectionLine : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _to; // 0x10
		::ZzzUiCurveGraphic* _drawer; // 0x18
		::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>* _segments; // 0x20
		::UnityEngine::RectTransform* _root; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _endPoints; // 0x30
		::UnityEngine::Transform* _from; // 0x38
		::System::Boolean _isOpen; // 0x40

		::System::Void _ctor(::UnityEngine::Transform* from, ::UnityEngine::Transform* to, ::UnityEngine::RectTransform* root, ::ZzzUiCurveGraphic* drawer, ::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*, ::ZzzUiCurveGraphic*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__CTOR_OFFSET))(this, from, to, root, drawer, isOpen);
		}

		::System::Boolean SetOpen(::System::Boolean isOpen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_SETOPEN_OFFSET))(this, isOpen);
		}

		::System::Void RecreateCurves(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE_RECREATECURVES_OFFSET))(this, isOpen);
		}

		::System::Void _SetOpen_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_TALENTCONNECTIONLINE__SETOPEN_B__8_0_OFFSET))(this);
		}
	};
}
