#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_UNREAL_TRANSFORMMETHOD_GETRELATIVETRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1B798850)
#define FOUNDATION_UNREAL_TRANSFORMMETHOD_GETRELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B798220)
#define FOUNDATION_UNREAL_TRANSFORMMETHOD_GETSAFESCALERECIPROCAL_1_OFFSET UNITYSDK_OFFSET(0x1B798D50)
#define FOUNDATION_UNREAL_TRANSFORMMETHOD_GETSAFESCALERECIPROCAL_2_OFFSET UNITYSDK_OFFSET(0x1B798DB0)
#define FOUNDATION_UNREAL_TRANSFORMMETHOD_GETSAFESCALERECIPROCAL_OFFSET UNITYSDK_OFFSET(0x1B798050)
#define FOUNDATION_UNREAL_TRANSFORMMETHOD_INVERSETRANSFORMPOINTDIRECT_OFFSET UNITYSDK_OFFSET(0x1B7980B0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int TransformMethod_TypeDefinitionIndex = 9102;

	class TransformMethod : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 GetSafeScaleReciprocal(::Foundation::Unreal::FTransform3D& self, ::System::Single tolerance)
		{
			return ((::UnityEngine::Vector3(*)(::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_TRANSFORMMETHOD_GETSAFESCALERECIPROCAL_OFFSET))(self, tolerance);
		}

		static ::UnityEngine::Vector3 InverseTransformPointDirect(::Foundation::Unreal::FTransform& self, ::UnityEngine::Vector3 worldPosition)
		{
			return ((::UnityEngine::Vector3(*)(::Foundation::Unreal::FTransform&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_TRANSFORMMETHOD_INVERSETRANSFORMPOINTDIRECT_OFFSET))(self, worldPosition);
		}

		static ::Foundation::Unreal::FTransform GetRelativeTransform(::Foundation::Unreal::FTransform& self, ::Foundation::Unreal::FTransform other)
		{
			return ((::Foundation::Unreal::FTransform(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_TRANSFORMMETHOD_GETRELATIVETRANSFORM_OFFSET))(self, other);
		}

		static ::Foundation::Unreal::FTransform3D GetRelativeTransform_1(::Foundation::Unreal::FTransform3D& self, ::Foundation::Unreal::FTransform3D other)
		{
			return ((::Foundation::Unreal::FTransform3D(*)(::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_TRANSFORMMETHOD_GETRELATIVETRANSFORM_1_OFFSET))(self, other);
		}

		static ::UnityEngine::Vector3 GetSafeScaleReciprocal_1(::UnityEngine::Vector3& scale, ::System::Single tolerance)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_TRANSFORMMETHOD_GETSAFESCALERECIPROCAL_1_OFFSET))(scale, tolerance);
		}

		static ::System::Single GetSafeScaleReciprocal_2(::System::Single scale, ::System::Single tolerance)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_TRANSFORMMETHOD_GETSAFESCALERECIPROCAL_2_OFFSET))(scale, tolerance);
		}
	};
}
