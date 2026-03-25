#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithMath.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1655A6D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATESECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1655A7E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATETANGENT_OFFSET UNITYSDK_OFFSET(0x1655A530)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_1_OFFSET UNITYSDK_OFFSET(0x1655BEA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_2_OFFSET UNITYSDK_OFFSET(0x1655C160)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_3_OFFSET UNITYSDK_OFFSET(0x1655C420)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_4_OFFSET UNITYSDK_OFFSET(0x1655B930)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_5_OFFSET UNITYSDK_OFFSET(0x1655AC50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_6_OFFSET UNITYSDK_OFFSET(0x1655B0F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_OFFSET UNITYSDK_OFFSET(0x1655B500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTPOINTINDEXES_OFFSET UNITYSDK_OFFSET(0x1655C720)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETTFORLERP_OFFSET UNITYSDK_OFFSET(0x1655BC00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_DISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1655A250)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x16559FA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_HANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x1655A510)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_HANDLESSCALE_OFFSET UNITYSDK_OFFSET(0x1655A4F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1655A4E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x1655A4D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPCOLOR_OFFSET UNITYSDK_OFFSET(0x1655B7C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPFLOAT_OFFSET UNITYSDK_OFFSET(0x1655B3D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPQUATERNION_OFFSET UNITYSDK_OFFSET(0x1655A950)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPVECTOR_OFFSET UNITYSDK_OFFSET(0x1655AF20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1655A3A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x16559FB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x1655A520)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESSCALE_OFFSET UNITYSDK_OFFSET(0x1655A500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_START_OFFSET UNITYSDK_OFFSET(0x1655C850)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1655C860)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursor_TypeDefinitionIndex = 28207;

	class BGCcCursor : public ::BansheeGz::BGSpline::Components::BGCcWithMath
	{
	public:
		::System::Single distance; // 0x58
		::System::Single handlesScale; // 0x5C
		::UnityEngine::Color handlesColor; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR__CTOR_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCE_OFFSET))(this, value);
		}

		::System::Single get_DistanceRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_DISTANCERATIO_OFFSET))(this);
		}

		::System::Void set_DistanceRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCERATIO_OFFSET))(this, value);
		}

		::System::Boolean get_SupportHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_SUPPORTHANDLES_OFFSET))(this);
		}

		::System::Boolean get_SupportHandlesSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_SUPPORTHANDLESSETTINGS_OFFSET))(this);
		}

		::System::Single get_HandlesScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_HANDLESSCALE_OFFSET))(this);
		}

		::System::Void set_HandlesScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_HandlesColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_HANDLESCOLOR_OFFSET))(this);
		}

		::System::Void set_HandlesColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 CalculateTangent()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATETANGENT_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculatePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATEPOSITION_OFFSET))(this);
		}

		::System::Int32 CalculateSectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATESECTIONINDEX_OFFSET))(this);
		}

		::UnityEngine::Quaternion LerpQuaternion(::System::String* fieldName, ::System::Func_4<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Quaternion>* customLerp)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*, ::System::Func_4<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPQUATERNION_OFFSET))(this, fieldName, customLerp);
		}

		::UnityEngine::Vector3 LerpVector(::System::String* fieldName, ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3>* customLerp)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPVECTOR_OFFSET))(this, fieldName, customLerp);
		}

		::System::Single LerpFloat(::System::String* fieldName, ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>* customLerp)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPFLOAT_OFFSET))(this, fieldName, customLerp);
		}

		::UnityEngine::Color LerpColor(::System::String* fieldName, ::System::Func_4<::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color>* customLerp)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::System::Func_4<::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPCOLOR_OFFSET))(this, fieldName, customLerp);
		}

		::System::Single GetAdjacentFieldValues(::System::String* fieldName, ::System::Single& fromValue, ::System::Single& toValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_OFFSET))(this, fieldName, fromValue, toValue);
		}

		::System::Single GetAdjacentFieldValues_1(::System::String* fieldName, ::System::Int32& fromValue, ::System::Int32& toValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_1_OFFSET))(this, fieldName, fromValue, toValue);
		}

		::System::Single GetAdjacentFieldValues_2(::System::String* fieldName, ::System::Boolean& fromValue, ::System::Boolean& toValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_2_OFFSET))(this, fieldName, fromValue, toValue);
		}

		::System::Single GetAdjacentFieldValues_3(::System::String* fieldName, ::UnityEngine::Bounds& fromValue, ::UnityEngine::Bounds& toValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_3_OFFSET))(this, fieldName, fromValue, toValue);
		}

		::System::Single GetAdjacentFieldValues_4(::System::String* fieldName, ::UnityEngine::Color& fromValue, ::UnityEngine::Color& toValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_4_OFFSET))(this, fieldName, fromValue, toValue);
		}

		::System::Single GetAdjacentFieldValues_5(::System::String* fieldName, ::UnityEngine::Quaternion& fromValue, ::UnityEngine::Quaternion& toValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_5_OFFSET))(this, fieldName, fromValue, toValue);
		}

		::System::Single GetAdjacentFieldValues_6(::System::String* fieldName, ::UnityEngine::Vector3& fromValue, ::UnityEngine::Vector3& toValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_6_OFFSET))(this, fieldName, fromValue, toValue);
		}

		::System::Single GetTForLerp(::System::Int32& indexFrom, ::System::Int32& indexTo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETTFORLERP_OFFSET))(this, indexFrom, indexTo);
		}

		::System::Void GetAdjacentPointIndexes(::System::Int32& indexFrom, ::System::Int32& indexTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTPOINTINDEXES_OFFSET))(this, indexFrom, indexTo);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_START_OFFSET))(this);
		}
	};
}
