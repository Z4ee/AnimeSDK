#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_DEBOORCLAMPED_OFFSET UNITYSDK_OFFSET(0x1E020CC0)
#define FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_DEBOORUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1E020ED0)
#define FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_GETBSPLINEN_OFFSET UNITYSDK_OFFSET(0x1E021040)
#define FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_GETBSPLINEUANDK_OFFSET UNITYSDK_OFFSET(0x1E021050)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int BSplineHelper_TypeDefinitionIndex = 39032;

	class BSplineHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 DeBoorClamped(::System::Int32 p, ::System::Int32 k, ::System::Single u, ::System::Int32 nPlus1, ::Il2CppArray<::UnityEngine::Vector3>* pArray)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_DEBOORCLAMPED_OFFSET))(p, k, u, nPlus1, pArray);
		}

		static ::UnityEngine::Vector3 DeBoorUnclamped(::System::Int32 p, ::System::Int32 k, ::System::Single u, ::Il2CppArray<::UnityEngine::Vector3>* pArray)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32, ::System::Int32, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_DEBOORUNCLAMPED_OFFSET))(p, k, u, pArray);
		}

		static ::System::Int32 GetBSplineN(::System::Int32 controlPointsCount, ::System::Int32 degree, ::System::Boolean closed)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_GETBSPLINEN_OFFSET))(controlPointsCount, degree, closed);
		}

		static ::System::Void GetBSplineUAndK(::System::Single tf, ::System::Boolean isClamped, ::System::Int32 p, ::System::Int32 n, ::System::Single& u, ::System::Int32& k)
		{
			return ((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_BSPLINEHELPER_GETBSPLINEUANDK_OFFSET))(tf, isClamped, p, n, u, k);
		}
	};
}
