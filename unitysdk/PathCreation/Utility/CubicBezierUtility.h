#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_CALCULATESEGMENTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B6BD6E0)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_ESTIMATECURVELENGTH_OFFSET UNITYSDK_OFFSET(0x1B6BDB70)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVEDERIVATIVE_1_OFFSET UNITYSDK_OFFSET(0x1B6BCC20)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVEDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1B6BCA80)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVESECONDDERIVATIVE_1_OFFSET UNITYSDK_OFFSET(0x1B6BCEF0)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVESECONDDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1B6BCD50)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVE_1_OFFSET UNITYSDK_OFFSET(0x1B6BC9B0)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVE_OFFSET UNITYSDK_OFFSET(0x1B6B6F00)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EXTREMEPOINTTIMES_OFFSET UNITYSDK_OFFSET(0x1B6B6C70)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_NORMAL_1_OFFSET UNITYSDK_OFFSET(0x1B6BD3B0)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_NORMAL_OFFSET UNITYSDK_OFFSET(0x1B6BD060)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_SPLITCURVE_OFFSET UNITYSDK_OFFSET(0x1B6B55D0)
#define PATHCREATION_UTILITY_CUBICBEZIERUTILITY_STATIONARYPOINTTIMES_OFFSET UNITYSDK_OFFSET(0x1B6BDD10)

namespace PathCreation::Utility
{
	inline static constexpr unsigned int CubicBezierUtility_TypeDefinitionIndex = 35845;

	class CubicBezierUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 EvaluateCurve(::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVE_OFFSET))(points, t);
		}

		static ::UnityEngine::Vector3 EvaluateCurve_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 c1, ::UnityEngine::Vector3 c2, ::UnityEngine::Vector3 a2, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVE_1_OFFSET))(a1, c1, c2, a2, t);
		}

		static ::UnityEngine::Vector3 EvaluateCurveDerivative(::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVEDERIVATIVE_OFFSET))(points, t);
		}

		static ::UnityEngine::Vector3 EvaluateCurveDerivative_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 c1, ::UnityEngine::Vector3 c2, ::UnityEngine::Vector3 a2, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVEDERIVATIVE_1_OFFSET))(a1, c1, c2, a2, t);
		}

		static ::UnityEngine::Vector3 EvaluateCurveSecondDerivative(::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVESECONDDERIVATIVE_OFFSET))(points, t);
		}

		static ::UnityEngine::Vector3 EvaluateCurveSecondDerivative_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 c1, ::UnityEngine::Vector3 c2, ::UnityEngine::Vector3 a2, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EVALUATECURVESECONDDERIVATIVE_1_OFFSET))(a1, c1, c2, a2, t);
		}

		static ::UnityEngine::Vector3 Normal(::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_NORMAL_OFFSET))(points, t);
		}

		static ::UnityEngine::Vector3 Normal_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 c1, ::UnityEngine::Vector3 c2, ::UnityEngine::Vector3 a2, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_NORMAL_1_OFFSET))(a1, c1, c2, a2, t);
		}

		static ::UnityEngine::Bounds CalculateSegmentBounds(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_CALCULATESEGMENTBOUNDS_OFFSET))(p0, p1, p2, p3);
		}

		static ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* SplitCurve(::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Single t)
		{
			return ((::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_SPLITCURVE_OFFSET))(points, t);
		}

		static ::System::Single EstimateCurveLength(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_ESTIMATECURVELENGTH_OFFSET))(p0, p1, p2, p3);
		}

		static ::System::Collections::Generic::List_1<::System::Single>* ExtremePointTimes(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_EXTREMEPOINTTIMES_OFFSET))(p0, p1, p2, p3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Single>* StationaryPointTimes(::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Single>*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_CUBICBEZIERUTILITY_STATIONARYPOINTTIMES_OFFSET))(a, b, c);
		}
	};
}
