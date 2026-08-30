#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPGTools::HoudiniToUnity { class CurveAttribute; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_COMPUTEFINGERPRINT_OFFSET UNITYSDK_OFFSET(0x1967D040)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1967CE80)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1967C630)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1967C620)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGATTRINDEX_OFFSET UNITYSDK_OFFSET(0x1967C710)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x1967C650)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1967C7D0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ISINEDITMODE_OFFSET UNITYSDK_OFFSET(0x1967C890)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_OVERLAYWINDOWRECT_OFFSET UNITYSDK_OFFSET(0x1967C950)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_NOTIFYSEGMENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1967CED0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_OVERRIDEBGCURVEGIZMOSFOR_OFFSET UNITYSDK_OFFSET(0x1967CA10)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_RESTOREBGCURVEGIZMOSFOR_OFFSET UNITYSDK_OFFSET(0x1967CC20)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGATTRINDEX_OFFSET UNITYSDK_OFFSET(0x1967C770)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x1967C6B0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1967C830)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_ISINEDITMODE_OFFSET UNITYSDK_OFFSET(0x1967C8F0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_OVERLAYWINDOWRECT_OFFSET UNITYSDK_OFFSET(0x1967C9B0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1967D390)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1967D340)

namespace RPGTools::HoudiniToUnity
{
	inline static constexpr unsigned int BGCurveSegmentAttributes_TypeDefinitionIndex = 47395;

	class BGCurveSegmentAttributes : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes** StaticGet__CurrentEditingInstance_k__BackingField()
		{
			return (::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes**)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x5FBF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Boolean>** StaticGet__savedShowCurveStates()
		{
			return (::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x5FBF8);
		}
		static ::System::Int32* StaticGet__CurrentEditingSegmentIndex_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x136C0);
		}
		static ::UnityEngine::Rect* StaticGet__OverlayWindowRect_k__BackingField()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x136C4);
		}
		static ::System::Boolean* StaticGet__IsInEditMode_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x136D4);
		}
		static ::System::Int32* StaticGet__CurrentEditingAttrIndex_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x136D8);
		}
		::System::Collections::Generic::List_1<::RPGTools::HoudiniToUnity::CurveAttribute*>* _attributes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPGTools::HoudiniToUnity::CurveAttribute*>* get_Attributes()
		{
			return ((::System::Collections::Generic::List_1<::RPGTools::HoudiniToUnity::CurveAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		static ::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes* get_CurrentEditingInstance()
		{
			return ((::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGINSTANCE_OFFSET))();
		}

		static ::System::Void set_CurrentEditingInstance(::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes* a1)
		{
			return ((::System::Void(*)(::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes*))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGINSTANCE_OFFSET))(a1);
		}

		static ::System::Int32 get_CurrentEditingAttrIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGATTRINDEX_OFFSET))();
		}

		static ::System::Void set_CurrentEditingAttrIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGATTRINDEX_OFFSET))(a1);
		}

		static ::System::Int32 get_CurrentEditingSegmentIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGSEGMENTINDEX_OFFSET))();
		}

		static ::System::Void set_CurrentEditingSegmentIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGSEGMENTINDEX_OFFSET))(a1);
		}

		static ::System::Boolean get_IsInEditMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ISINEDITMODE_OFFSET))();
		}

		static ::System::Void set_IsInEditMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_ISINEDITMODE_OFFSET))(a1);
		}

		static ::UnityEngine::Rect get_OverlayWindowRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_OVERLAYWINDOWRECT_OFFSET))();
		}

		static ::System::Void set_OverlayWindowRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_OVERLAYWINDOWRECT_OFFSET))(a1);
		}

		static ::System::Void OverrideBGCurveGizmosFor(::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes* a1)
		{
			return ((::System::Void(*)(::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes*))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_OVERRIDEBGCURVEGIZMOSFOR_OFFSET))(a1);
		}

		static ::System::Void RestoreBGCurveGizmosFor(::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes* a1)
		{
			return ((::System::Void(*)(::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes*))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_RESTOREBGCURVEGIZMOSFOR_OFFSET))(a1);
		}

		::RPGTools::HoudiniToUnity::CurveAttribute* GetAttribute(::System::Int32 a1)
		{
			return ((::RPGTools::HoudiniToUnity::CurveAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GETATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void NotifySegmentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_NOTIFYSEGMENTCHANGED_OFFSET))(this);
		}

		::System::Int32 ComputeFingerprint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_COMPUTEFINGERPRINT_OFFSET))(this);
		}
	};
}
