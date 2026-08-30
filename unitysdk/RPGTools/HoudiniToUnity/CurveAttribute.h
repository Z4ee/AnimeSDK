#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/HoudiniToUnity/SegmentValueType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPGTools::HoudiniToUnity { class CurveSplitPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_ENSURECONSISTENCY_OFFSET UNITYSDK_OFFSET(0x1967D8B0)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_EVALUATEASSTRING_OFFSET UNITYSDK_OFFSET(0x1967DF50)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETHUECOLOR_OFFSET UNITYSDK_OFFSET(0x1967DD20)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1967DB20)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1967D650)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTRANGE_OFFSET UNITYSDK_OFFSET(0x1967DE80)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTVALUE_OFFSET UNITYSDK_OFFSET(0x1967D9E0)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GET_SEGMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1967D320)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GET_SEGMENTVALUES_OFFSET UNITYSDK_OFFSET(0x1967D460)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GET_SPLITPOINTS_OFFSET UNITYSDK_OFFSET(0x1967D450)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_INSERTSPLITPOINT_OFFSET UNITYSDK_OFFSET(0x1967D470)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1967E570)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1967E560)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_REMOVESPLITPOINT_OFFSET UNITYSDK_OFFSET(0x1967D6E0)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_SETSEGMENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1967DA50)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_SETSEGMENTVALUE_OFFSET UNITYSDK_OFFSET(0x1967D840)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_SORTSPLITPOINTS_OFFSET UNITYSDK_OFFSET(0x1967E030)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1967E490)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1967E6C0)

namespace RPGTools::HoudiniToUnity
{
	inline static constexpr unsigned int CurveAttribute_TypeDefinitionIndex = 47393;

	class CurveAttribute : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::RPGTools::HoudiniToUnity::SegmentValueType valueType; // 0x18
		::System::Boolean showGizmo; // 0x1C
		::System::Single gizmoOffset; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::HoudiniToUnity::CurveSplitPoint*>* _splitPoints; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _segmentValues; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Color>* _segmentColors; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* _legacyFloatValues; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPGTools::HoudiniToUnity::CurveSplitPoint*>* get_SplitPoints()
		{
			return ((::System::Collections::Generic::List_1<::RPGTools::HoudiniToUnity::CurveSplitPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GET_SPLITPOINTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_SegmentValues()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GET_SEGMENTVALUES_OFFSET))(this);
		}

		::System::Int32 get_SegmentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GET_SEGMENTCOUNT_OFFSET))(this);
		}

		::System::Void InsertSplitPoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_INSERTSPLITPOINT_OFFSET))(this, a1);
		}

		::System::Void RemoveSplitPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_REMOVESPLITPOINT_OFFSET))(this, a1);
		}

		::System::Void SetSegmentValue(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_SETSEGMENTVALUE_OFFSET))(this, a1, a2);
		}

		::System::String* GetSegmentValue(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTVALUE_OFFSET))(this, a1);
		}

		::System::Void SetSegmentColor(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_SETSEGMENTCOLOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color GetSegmentColor(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTCOLOR_OFFSET))(this, a1);
		}

		::System::Int32 GetSegmentIndex(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTINDEX_OFFSET))(this, a1);
		}

		::System::Void GetSegmentRange(::System::Int32 a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETSEGMENTRANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* EvaluateAsString(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_EVALUATEASSTRING_OFFSET))(this, a1);
		}

		::System::Void SortSplitPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_SORTSPLITPOINTS_OFFSET))(this);
		}

		::System::Void EnsureConsistency()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_ENSURECONSISTENCY_OFFSET))(this);
		}

		static ::UnityEngine::Color GetHueColor(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_GETHUECOLOR_OFFSET))(a1);
		}

		::System::Boolean TryParseValue(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_TRYPARSEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
