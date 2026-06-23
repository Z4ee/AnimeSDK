#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Box2.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Line2.h"
#include "unitysdk/Dest/Math/Line3.h"
#include "unitysdk/Dest/Math/Plane3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_APPROXIMATION_GAUSSPOINTSFIT2_OFFSET UNITYSDK_OFFSET(0x1DEC04C0)
#define DEST_MATH_APPROXIMATION_GAUSSPOINTSFIT3_OFFSET UNITYSDK_OFFSET(0x1DEC19A0)
#define DEST_MATH_APPROXIMATION_HEIGHTLINEFIT2_OFFSET UNITYSDK_OFFSET(0x1DEC0E20)
#define DEST_MATH_APPROXIMATION_HEIGHTPLANEFIT3_OFFSET UNITYSDK_OFFSET(0x1DEC27D0)
#define DEST_MATH_APPROXIMATION_LEASTSQUARESLINEFIT2_OFFSET UNITYSDK_OFFSET(0x1DEC1500)
#define DEST_MATH_APPROXIMATION_LEASTSQUARESPLANEFIT3_OFFSET UNITYSDK_OFFSET(0x1DEC33C0)
#define DEST_MATH_APPROXIMATION_LEASTSSQUARESLINEFIT3_OFFSET UNITYSDK_OFFSET(0x1DEC2210)

namespace Dest::Math
{
	inline static constexpr unsigned int Approximation_TypeDefinitionIndex = 34662;

	class Approximation : public ::System::Object
	{
	public:
		static ::Dest::Math::Box2 GaussPointsFit2(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::Box2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_APPROXIMATION_GAUSSPOINTSFIT2_OFFSET))(points);
		}

		static ::System::Boolean HeightLineFit2(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Single& a, ::System::Single& b)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_APPROXIMATION_HEIGHTLINEFIT2_OFFSET))(points, a, b);
		}

		static ::Dest::Math::Line2 LeastSquaresLineFit2(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::Line2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_APPROXIMATION_LEASTSQUARESLINEFIT2_OFFSET))(points);
		}

		static ::Dest::Math::Box3 GaussPointsFit3(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Box3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_APPROXIMATION_GAUSSPOINTSFIT3_OFFSET))(points);
		}

		static ::Dest::Math::Line3 LeastsSquaresLineFit3(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Line3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_APPROXIMATION_LEASTSSQUARESLINEFIT3_OFFSET))(points);
		}

		static ::System::Boolean HeightPlaneFit3(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single& a, ::System::Single& b, ::System::Single& c)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_APPROXIMATION_HEIGHTPLANEFIT3_OFFSET))(points, a, b, c);
		}

		static ::Dest::Math::Plane3 LeastSquaresPlaneFit3(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Plane3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_APPROXIMATION_LEASTSQUARESPLANEFIT3_OFFSET))(points);
		}
	};
}
