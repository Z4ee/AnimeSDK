#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventHandler; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ADD_BECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE2980)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE2B50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE2BA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE2B70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_REMOVE_BECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE2920)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1BFE2B60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE2BB0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_VisibilityCheck_TypeDefinitionIndex = 35358;

	class BGCcMath_VisibilityCheck : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::EventHandler* BecameVisible; // 0x18
		::System::Boolean _Visible_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK__CTOR_OFFSET))(this);
		}

		::System::Void add_BecameVisible(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ADD_BECAMEVISIBLE_OFFSET))(this, a1);
		}

		::System::Void remove_BecameVisible(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_REMOVE_BECAMEVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ONBECAMEINVISIBLE_OFFSET))(this);
		}
	};
}
