#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_SOLVERLEGNAP_TWOBONEIKNAP_GETDIRECTIONTOBENDPOINT_OFFSET UNITYSDK_OFFSET(0x1B7045C0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_TWOBONEIKNAP_SOLVETWOBONEIK_OFFSET UNITYSDK_OFFSET(0x1B704080)

namespace RootMotion::FinalIK::SolverLegNap
{
	inline static constexpr unsigned int TwoBoneIKNap_TypeDefinitionIndex = 36745;

	class TwoBoneIKNap : public ::System::Object
	{
	public:
		static ::System::Void SolveTwoBoneIK(::UnityEngine::Transform* first, ::UnityEngine::Transform* joint, ::UnityEngine::Transform* end, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 bendNormal)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_TWOBONEIKNAP_SOLVETWOBONEIK_OFFSET))(first, joint, end, targetPos, bendNormal);
		}

		static ::UnityEngine::Vector3 GetDirectionToBendPoint(::UnityEngine::Vector3 direction, ::System::Single directionMag, ::UnityEngine::Vector3 bendDirection, ::System::Single sqrMag1, ::System::Single sqrMag2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_TWOBONEIKNAP_GETDIRECTIONTOBENDPOINT_OFFSET))(direction, directionMag, bendDirection, sqrMag1, sqrMag2);
		}
	};
}
