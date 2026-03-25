#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOUISCREENCONSTRAINT_CALCULATECONSTRAINTOFFSET_OFFSET UNITYSDK_OFFSET(0x9D4DEF0)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_CONSTRAINTOSCREEN_OFFSET UNITYSDK_OFFSET(0x9D4D750)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_ENABLECONTINUOUSCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x9D4E0C0)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_GETSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x9D4DA90)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_GETUIELEMENTBOUNDS_OFFSET UNITYSDK_OFFSET(0x9D4DD60)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D4D420)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_SETCONSTRAINTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9D4E060)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_START_OFFSET UNITYSDK_OFFSET(0x9D4D3C0)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4E110)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIScreenConstraint_TypeDefinitionIndex = 56345;

	class MonoUIScreenConstraint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean constrainX; // 0x18
		::System::Boolean constrainY; // 0x19
		::UnityEngine::Vector2 padding; // 0x1C
		::System::Boolean constrainOnStart; // 0x24
		::System::Boolean constrainContinuously; // 0x25
		::System::Boolean showDebugInfo; // 0x26
		::UnityEngine::RectTransform* rectTransform; // 0x28
		::UnityEngine::Canvas* rootCanvas; // 0x30
		::UnityEngine::Camera* uiCamera; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_START_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_INITIALIZE_OFFSET))(this);
		}

		::System::Void ConstrainToScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_CONSTRAINTOSCREEN_OFFSET))(this);
		}

		::UnityEngine::Bounds GetScreenBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_GETSCREENBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Bounds GetUIElementBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_GETUIELEMENTBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Vector2 CalculateConstraintOffset(::UnityEngine::Bounds screenBounds, ::UnityEngine::Bounds elementBounds)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_CALCULATECONSTRAINTOFFSET_OFFSET))(this, screenBounds, elementBounds);
		}

		::System::Void SetConstraintSettings(::System::Boolean constrainX, ::System::Boolean constrainY, ::UnityEngine::Vector2 padding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_SETCONSTRAINTSETTINGS_OFFSET))(this, constrainX, constrainY, padding);
		}

		::System::Void EnableContinuousConstraint(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_ENABLECONTINUOUSCONSTRAINT_OFFSET))(this, enable);
		}
	};
}
