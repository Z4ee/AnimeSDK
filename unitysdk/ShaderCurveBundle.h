#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RefGPUParticleSystem_CurveMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define SHADERCURVEBUNDLE_GET_CURVEPREVIEW_OFFSET UNITYSDK_OFFSET(0x1D994E10)
#define SHADERCURVEBUNDLE_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0x1D994CB0)
#define SHADERCURVEBUNDLE_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1D994CD0)
#define SHADERCURVEBUNDLE_SET_CURVEPREVIEW_OFFSET UNITYSDK_OFFSET(0x1D994E20)
#define SHADERCURVEBUNDLE_SET_PREVIEW_OFFSET UNITYSDK_OFFSET(0x1D994CC0)
#define SHADERCURVEBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D986B30)

inline static constexpr unsigned int ShaderCurveBundle_TypeDefinitionIndex = 42294;

class ShaderCurveBundle : public ::System::Object
{
public:
	::RefGPUParticleSystem_CurveMode mode; // 0x10
	::System::Single multiplier; // 0x14
	::System::Single skew; // 0x18
	::System::Boolean invert; // 0x1C
	::UnityEngine::AnimationCurve* curve1; // 0x20
	::UnityEngine::AnimationCurve* curve2; // 0x28
	::UnityEngine::Vector2 minMax; // 0x30
	::System::Single seed; // 0x38
	::Il2CppArray<::UnityEngine::Vector4>* bezier1; // 0x40
	::Il2CppArray<::UnityEngine::Vector4>* bezier2; // 0x48
	::UnityEngine::Material* _preview_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCURVEBUNDLE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Material* get_preview()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCURVEBUNDLE_GET_PREVIEW_OFFSET))(this);
	}

	::System::Void set_preview(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SHADERCURVEBUNDLE_SET_PREVIEW_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCURVEBUNDLE_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::UnityEngine::Material* get_curvePreview()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCURVEBUNDLE_GET_CURVEPREVIEW_OFFSET))(this);
	}

	::System::Void set_curvePreview(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SHADERCURVEBUNDLE_SET_CURVEPREVIEW_OFFSET))(this, a1);
	}
};
