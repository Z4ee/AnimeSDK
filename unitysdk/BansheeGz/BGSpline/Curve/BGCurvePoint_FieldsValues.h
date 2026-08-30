#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointComponent; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointGO; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDSVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00EDD0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePoint_FieldsValues_TypeDefinitionIndex = 35329;

	class BGCurvePoint_FieldsValues : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* boolValues; // 0x10
		::Il2CppArray<::System::Int32>* intValues; // 0x18
		::Il2CppArray<::System::Single>* floatValues; // 0x20
		::Il2CppArray<::System::String*>* stringValues; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* vector3Values; // 0x30
		::Il2CppArray<::UnityEngine::Bounds>* boundsValues; // 0x38
		::Il2CppArray<::UnityEngine::Color>* colorValues; // 0x40
		::Il2CppArray<::UnityEngine::Quaternion>* quaternionValues; // 0x48
		::Il2CppArray<::UnityEngine::AnimationCurve*>* animationCurveValues; // 0x50
		::Il2CppArray<::UnityEngine::GameObject*>* gameObjectValues; // 0x58
		::Il2CppArray<::UnityEngine::Component*>* componentValues; // 0x60
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurve*>* bgCurveValues; // 0x68
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointComponent*>* bgCurvePointComponentValues; // 0x70
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointGO*>* bgCurvePointGOValues; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDSVALUES__CTOR_OFFSET))(this);
		}
	};
}
