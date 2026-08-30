#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOUISCREENCONSTRAINT_CALCULATECONSTRAINTOFFSET_OFFSET UNITYSDK_OFFSET(0x1C298CE0)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_CONSTRAINTOSCREEN_OFFSET UNITYSDK_OFFSET(0x1C298520)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_ENABLECONTINUOUSCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C298EB0)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_GETSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C298880)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_GETUIELEMENTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C298B50)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C298200)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_SETCONSTRAINTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C298E50)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT_START_OFFSET UNITYSDK_OFFSET(0x1C2981A0)
#define RPG_CLIENT_MONOUISCREENCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C298F00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIScreenConstraint_TypeDefinitionIndex = 68947;

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

		::UnityEngine::Vector2 CalculateConstraintOffset(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_CALCULATECONSTRAINTOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstraintSettings(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_SETCONSTRAINTSETTINGS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnableContinuousConstraint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUISCREENCONSTRAINT_ENABLECONTINUOUSCONSTRAINT_OFFSET))(this, a1);
		}
	};
}
