#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventHandler; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ADD_BECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B8FF20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x17B900E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B90120)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B90100)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_REMOVE_BECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B8FEC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x17B900F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x17B90130)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_VisibilityCheck_TypeDefinitionIndex = 33844;

	class BGCcMath_VisibilityCheck : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::EventHandler* BecameVisible; // 0x18
		::System::Boolean _Visible_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK__CTOR_OFFSET))(this);
		}

		::System::Void add_BecameVisible(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_ADD_BECAMEVISIBLE_OFFSET))(this, value);
		}

		::System::Void remove_BecameVisible(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_REMOVE_BECAMEVISIBLE_OFFSET))(this, value);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_VISIBILITYCHECK_SET_VISIBLE_OFFSET))(this, value);
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
