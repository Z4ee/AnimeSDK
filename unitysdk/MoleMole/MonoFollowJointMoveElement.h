#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x15831FA0)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETBACKDISTANCE_OFFSET UNITYSDK_OFFSET(0x15832780)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETFRONTDISTANCE_OFFSET UNITYSDK_OFFSET(0x158325F0)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_SET_OFFSET UNITYSDK_OFFSET(0x15831AE0)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_UPDATEKINEMATICELEMENTS_OFFSET UNITYSDK_OFFSET(0x15831190)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15832910)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFollowJointMoveElement_TypeDefinitionIndex = 82739;

	class MonoFollowJointMoveElement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::MonoFollowJointMoveElement*>* elements; // 0x18
		::UnityEngine::Transform* Point1; // 0x20
		::UnityEngine::Transform* Point2; // 0x28
		::UnityEngine::Transform* Point3; // 0x30
		::UnityEngine::Vector3 Field_5_4; // 0x38
		::UnityEngine::Vector3 Field_5_5; // 0x44
		::System::Single Field_5_6; // 0x50
		::System::Single Field_5_7; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void UpdateKinematicElements(::FluffyUnderware::Curvy::CurvySpline* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_UPDATEKINEMATICELEMENTS_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_AWAKE_OFFSET))(this);
		}

		::System::Void Set(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_SET_OFFSET))(this, a1, a2);
		}

		::System::Single GetFrontDistance(::FluffyUnderware::Curvy::CurvySpline* a1)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETFRONTDISTANCE_OFFSET))(this, a1);
		}

		::System::Single GetBackDistance(::FluffyUnderware::Curvy::CurvySpline* a1)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETBACKDISTANCE_OFFSET))(this, a1);
		}
	};
}
