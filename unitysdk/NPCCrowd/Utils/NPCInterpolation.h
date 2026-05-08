#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECATMULLROMCENTRIPETALTANGENT_OFFSET UNITYSDK_OFFSET(0xD4603A0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECENTRIPETALPARAMETERS_OFFSET UNITYSDK_OFFSET(0xD4601D0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMCENTRIPETAL_OFFSET UNITYSDK_OFFSET(0xD45FDD0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMTANGENT_OFFSET UNITYSDK_OFFSET(0xD45FB40)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROM_OFFSET UNITYSDK_OFFSET(0xD45F940)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CUBIC_OFFSET UNITYSDK_OFFSET(0xD45F7A0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0xD460780)
#define NPCCROWD_UTILS_NPCINTERPOLATION_INTERPOLATETOWARDS_OFFSET UNITYSDK_OFFSET(0xD460860)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPEXPN_OFFSET UNITYSDK_OFFSET(0xD4610E0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_1_OFFSET UNITYSDK_OFFSET(0xD460CD0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_2_OFFSET UNITYSDK_OFFSET(0xD460DC0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_OFFSET UNITYSDK_OFFSET(0xD460C20)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_1_OFFSET UNITYSDK_OFFSET(0xD460F30)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_2_OFFSET UNITYSDK_OFFSET(0xD460FF0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_OFFSET UNITYSDK_OFFSET(0xD460E80)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_1_OFFSET UNITYSDK_OFFSET(0xD460A50)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_2_OFFSET UNITYSDK_OFFSET(0xD460B20)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_OFFSET UNITYSDK_OFFSET(0xD4609A0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERP_OFFSET UNITYSDK_OFFSET(0xD460910)

namespace NPCCrowd::Utils
{
	inline static constexpr unsigned int NPCInterpolation_TypeDefinitionIndex = 41159;

	class NPCInterpolation : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Cubic(::UnityEngine::Vector3 y0, ::UnityEngine::Vector3 y1, ::UnityEngine::Vector3 y2, ::UnityEngine::Vector3 y3, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CUBIC_OFFSET))(y0, y1, y2, y3, t);
		}

		static ::UnityEngine::Vector3 CatmullRom(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROM_OFFSET))(p0, p1, p2, p3, t);
		}

		static ::UnityEngine::Vector3 CatmullRomTangent(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMTANGENT_OFFSET))(p0, p1, p2, p3, t);
		}

		static ::UnityEngine::Vector3 CatmullRomCentripetal(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t, ::System::Single t0, ::System::Single t1, ::System::Single t2, ::System::Single t3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMCENTRIPETAL_OFFSET))(p0, p1, p2, p3, t, t0, t1, t2, t3);
		}

		static ::System::Collections::Generic::List_1<::System::Single>* CalculateCentripetalParameters(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* controlPoints)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECENTRIPETALPARAMETERS_OFFSET))(controlPoints);
		}

		static ::UnityEngine::Vector3 CalculateCatmullRomCentripetalTangent(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t, ::System::Single t0, ::System::Single t1, ::System::Single t2, ::System::Single t3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECATMULLROMCENTRIPETALTANGENT_OFFSET))(p0, p1, p2, p3, t, t0, t1, t2, t3);
		}

		static ::System::Single EaseInOutCubic(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_EASEINOUTCUBIC_OFFSET))(t, b, c, d);
		}

		static ::System::Single InterpolateTowards(::System::Single pPrev, ::System::Single pNext, ::System::Single pSpeed, ::System::Single pDt)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_INTERPOLATETOWARDS_OFFSET))(pPrev, pNext, pSpeed, pDt);
		}

		static ::System::Single Lerp(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERP_OFFSET))(a, b, t);
		}

		static ::System::Single LerpS(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 LerpS_1(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_1_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 LerpS_2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_2_OFFSET))(a, b, t);
		}

		static ::System::Single LerpS2(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 LerpS2_1(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_1_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 LerpS2_2(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_2_OFFSET))(a, b, t);
		}

		static ::System::Single LerpS3(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 LerpS3_1(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_1_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 LerpS3_2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_2_OFFSET))(a, b, t);
		}

		static ::System::Single LerpExpN(::System::Single a, ::System::Single b, ::System::Single t, ::System::Single n)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPEXPN_OFFSET))(a, b, t, n);
		}
	};
}
