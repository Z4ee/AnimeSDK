#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BlurParam.h"
#include "unitysdk/RPG/CustomRP/EPlaneReflectionMode.h"
#include "unitysdk/RPG/CustomRP/ReflectionMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class IPlaneReflection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_REFLECTIONRENDERDATA_RESET_OFFSET UNITYSDK_OFFSET(0x22B9AD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReflectionRenderData_TypeDefinitionIndex = 34954;

	struct alignas(8) ReflectionRenderData
	{
		::UnityEngine::Camera* camera; // 0x10
		::UnityEngine::Transform* trans; // 0x18
		::UnityEngine::RenderTexture* rt; // 0x20
		::System::Int32 motionRTIID; // 0x28
		::System::Int32 mvMaskRTIID; // 0x2C
		::System::Int32 colorRT; // 0x30
		::System::Single renderScale; // 0x34
		::System::Boolean useTAA; // 0x38
		::RPG::CustomRP::ReflectionMode mode; // 0x3C
		::RPG::CustomRP::EPlaneReflectionMode PlaneReflectionMode; // 0x40
		::RPG::CustomRP::BlurParam PlaneBlurParam; // 0x44
		::System::Boolean needUpdate; // 0x4C
		::RPG::CustomRP::IPlaneReflection* planeReflection; // 0x50
		::System::Boolean cmdBufferOnly; // 0x58
		::UnityEngine::Plane plane; // 0x5C
		::UnityEngine::Vector3 center; // 0x6C
		::System::Single clipRange; // 0x78
		::System::Single cullDistance; // 0x7C
		::UnityEngine::Rect viewRect; // 0x80
		::UnityEngine::Vector4 reflectionST; // 0x90

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONRENDERDATA_RESET_OFFSET))(this);
		}
	};
}
