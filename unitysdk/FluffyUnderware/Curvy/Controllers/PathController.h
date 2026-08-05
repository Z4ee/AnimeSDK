#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/CurvyController.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MovementDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGDataReference; }
namespace FluffyUnderware::Curvy::Generator { class CGPath; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_ABSOLUTETORELATIVE_OFFSET UNITYSDK_OFFSET(0x1E9A1C20)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1E9A2430)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETINTERPOLATEDSOURCEPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1E9A1F10)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETINTERPOLATEDSOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9A1DA0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E9A22C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETTANGENT_OFFSET UNITYSDK_OFFSET(0x1E9A2150)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1E9A1A40)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E9A18E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_PATHDATA_OFFSET UNITYSDK_OFFSET(0x1E9A1850)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1E9A1830)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_RELATIVETOABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1E9A1A90)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1E9A1840)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_SIMULATEADVANCE_OFFSET UNITYSDK_OFFSET(0x1E9A24A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A27A0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int PathController_TypeDefinitionIndex = 39623;

	class PathController : public ::FluffyUnderware::Curvy::Controllers::CurvyController
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGDataReference* m_Path; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGDataReference* get_Path()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGDataReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::FluffyUnderware::Curvy::Generator::CGDataReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGDataReference*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_SET_PATH_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGPath* get_PathData()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_PATHDATA_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GET_ISREADY_OFFSET))(this);
		}

		::System::Single RelativeToAbsolute(::System::Single relativeDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_RELATIVETOABSOLUTE_OFFSET))(this, relativeDistance);
		}

		::System::Single AbsoluteToRelative(::System::Single worldUnitDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_ABSOLUTETORELATIVE_OFFSET))(this, worldUnitDistance);
		}

		::UnityEngine::Vector3 GetInterpolatedSourcePosition(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETINTERPOLATEDSOURCEPOSITION_OFFSET))(this, tf);
		}

		::System::Void GetInterpolatedSourcePosition_1(::System::Single tf, ::UnityEngine::Vector3& interpolatedPosition, ::UnityEngine::Vector3& tangent, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETINTERPOLATEDSOURCEPOSITION_1_OFFSET))(this, tf, interpolatedPosition, tangent, up);
		}

		::UnityEngine::Vector3 GetTangent(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETTANGENT_OFFSET))(this, tf);
		}

		::UnityEngine::Vector3 GetOrientation(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_GETORIENTATION_OFFSET))(this, tf);
		}

		::System::Void Advance(::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_ADVANCE_OFFSET))(this, speed, deltaTime);
		}

		::System::Void SimulateAdvance(::System::Single& tf, ::FluffyUnderware::Curvy::Controllers::MovementDirection& direction, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::FluffyUnderware::Curvy::Controllers::MovementDirection&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_PATHCONTROLLER_SIMULATEADVANCE_OFFSET))(this, tf, direction, speed, deltaTime);
		}
	};
}
