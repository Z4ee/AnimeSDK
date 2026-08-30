#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithMath.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATEPOSITION_OFFSET UNITYSDK_OFFSET(0x18388350)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATESECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x18388410)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_CALCULATETANGENT_OFFSET UNITYSDK_OFFSET(0x183881A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_1_OFFSET UNITYSDK_OFFSET(0x18389C10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_2_OFFSET UNITYSDK_OFFSET(0x18389F70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_3_OFFSET UNITYSDK_OFFSET(0x1838A2D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_4_OFFSET UNITYSDK_OFFSET(0x18389740)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_5_OFFSET UNITYSDK_OFFSET(0x18388870)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_6_OFFSET UNITYSDK_OFFSET(0x18388DC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_OFFSET UNITYSDK_OFFSET(0x18389270)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTPOINTINDEXES_OFFSET UNITYSDK_OFFSET(0x1838A670)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETTFORLERP_OFFSET UNITYSDK_OFFSET(0x18389AC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_DISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x18387EC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x18387BD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_HANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x18388180)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_HANDLESSCALE_OFFSET UNITYSDK_OFFSET(0x18388160)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x18388150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x18388140)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPCOLOR_OFFSET UNITYSDK_OFFSET(0x183895D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPFLOAT_OFFSET UNITYSDK_OFFSET(0x18389140)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPQUATERNION_OFFSET UNITYSDK_OFFSET(0x18388580)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPVECTOR_OFFSET UNITYSDK_OFFSET(0x18388BF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x18388040)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x18387BE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x18388190)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESSCALE_OFFSET UNITYSDK_OFFSET(0x18388170)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_START_OFFSET UNITYSDK_OFFSET(0x1838A840)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1838A920)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursor_TypeDefinitionIndex = 35345;

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

		::System::Void set_Distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_DistanceRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_DISTANCERATIO_OFFSET))(this);
		}

		::System::Void set_DistanceRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_DISTANCERATIO_OFFSET))(this, a1);
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

		::System::Void set_HandlesScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_HandlesColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GET_HANDLESCOLOR_OFFSET))(this);
		}

		::System::Void set_HandlesColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_SET_HANDLESCOLOR_OFFSET))(this, a1);
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

		::UnityEngine::Quaternion LerpQuaternion(::System::String* a1, ::System::Func_4<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Quaternion>* a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*, ::System::Func_4<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPQUATERNION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 LerpVector(::System::String* a1, ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Single LerpFloat(::System::String* a1, ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPFLOAT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color LerpColor(::System::String* a1, ::System::Func_4<::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color>* a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::System::Func_4<::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_LERPCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Single GetAdjacentFieldValues(::System::String* a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetAdjacentFieldValues_1(::System::String* a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetAdjacentFieldValues_2(::System::String* a1, ::System::Boolean& a2, ::System::Boolean& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetAdjacentFieldValues_3(::System::String* a1, ::UnityEngine::Bounds& a2, ::UnityEngine::Bounds& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetAdjacentFieldValues_4(::System::String* a1, ::UnityEngine::Color& a2, ::UnityEngine::Color& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetAdjacentFieldValues_5(::System::String* a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetAdjacentFieldValues_6(::System::String* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTFIELDVALUES_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetTForLerp(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETTFORLERP_OFFSET))(this, a1, a2);
		}

		::System::Void GetAdjacentPointIndexes(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_GETADJACENTPOINTINDEXES_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOR_START_OFFSET))(this);
		}
	};
}
