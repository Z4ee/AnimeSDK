#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/PlanarDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PARADOXNOTION_CURVEUTILS_GETPOSALONGCURVE_OFFSET UNITYSDK_OFFSET(0x1A2AB930)
#define PARADOXNOTION_CURVEUTILS_ISPOSALONGCURVE_1_OFFSET UNITYSDK_OFFSET(0x1A2ABAB0)
#define PARADOXNOTION_CURVEUTILS_ISPOSALONGCURVE_OFFSET UNITYSDK_OFFSET(0x1A2ABA80)
#define PARADOXNOTION_CURVEUTILS_RESOLVETANGENTS_1_OFFSET UNITYSDK_OFFSET(0x1A2AC0E0)
#define PARADOXNOTION_CURVEUTILS_RESOLVETANGENTS_OFFSET UNITYSDK_OFFSET(0x1A2ABEA0)

namespace ParadoxNotion
{
	inline static constexpr unsigned int CurveUtils_TypeDefinitionIndex = 27357;

	class CurveUtils : public ::System::Object
	{
	public:
		// static const ::System::Single POS_CHECK_RES; // 0x0
		// static const ::System::Single POS_CHECK_DISTANCE; // 0x0

		static ::UnityEngine::Vector2 GetPosAlongCurve(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::UnityEngine::Vector2 fromTangent, ::UnityEngine::Vector2 toTangent, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_CURVEUTILS_GETPOSALONGCURVE_OFFSET))(from, to, fromTangent, toTangent, t);
		}

		static ::System::Boolean IsPosAlongCurve(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::UnityEngine::Vector2 fromTangent, ::UnityEngine::Vector2 toTangent, ::UnityEngine::Vector2 targetPosition)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PARADOXNOTION_CURVEUTILS_ISPOSALONGCURVE_OFFSET))(from, to, fromTangent, toTangent, targetPosition);
		}

		static ::System::Boolean IsPosAlongCurve_1(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::UnityEngine::Vector2 fromTangent, ::UnityEngine::Vector2 toTangent, ::UnityEngine::Vector2 targetPosition, ::System::Single& norm)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single&))((::PBYTE)hIl2Cpp + PARADOXNOTION_CURVEUTILS_ISPOSALONGCURVE_1_OFFSET))(from, to, fromTangent, toTangent, targetPosition, norm);
		}

		static ::System::Void ResolveTangents(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::System::Single rigidMlt, ::ParadoxNotion::PlanarDirection direction, ::UnityEngine::Vector2& fromTangent, ::UnityEngine::Vector2& toTangent)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::ParadoxNotion::PlanarDirection, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PARADOXNOTION_CURVEUTILS_RESOLVETANGENTS_OFFSET))(from, to, rigidMlt, direction, fromTangent, toTangent);
		}

		static ::System::Void ResolveTangents_1(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::UnityEngine::Rect fromRect, ::UnityEngine::Rect toRect, ::System::Single rigidMlt, ::ParadoxNotion::PlanarDirection direction, ::UnityEngine::Vector2& fromTangent, ::UnityEngine::Vector2& toTangent)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single, ::ParadoxNotion::PlanarDirection, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PARADOXNOTION_CURVEUTILS_RESOLVETANGENTS_1_OFFSET))(from, to, fromRect, toRect, rigidMlt, direction, fromTangent, toTangent);
		}
	};
}
