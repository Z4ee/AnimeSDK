#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPGTools::HoudiniToUnity { class CurveAttribute; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_COMPUTEFINGERPRINT_OFFSET UNITYSDK_OFFSET(0xA247010)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA246E50)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0xA246600)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA2465F0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGATTRINDEX_OFFSET UNITYSDK_OFFSET(0xA2466E0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xA246620)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_CURRENTEDITINGSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0xA2467A0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_ISINEDITMODE_OFFSET UNITYSDK_OFFSET(0xA246860)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_GET_OVERLAYWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xA246920)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_NOTIFYSEGMENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA246EA0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_OVERRIDEBGCURVEGIZMOSFOR_OFFSET UNITYSDK_OFFSET(0xA2469E0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_RESTOREBGCURVEGIZMOSFOR_OFFSET UNITYSDK_OFFSET(0xA246BF0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGATTRINDEX_OFFSET UNITYSDK_OFFSET(0xA246740)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xA246680)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_CURRENTEDITINGSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0xA246800)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_ISINEDITMODE_OFFSET UNITYSDK_OFFSET(0xA2468C0)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES_SET_OVERLAYWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xA246980)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES__CCTOR_OFFSET UNITYSDK_OFFSET(0xA247360)
#define RPGTOOLS_HOUDINITOUNITY_BGCURVESEGMENTATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0xA247310)

namespace RPGTools::HoudiniToUnity
{
	inline static constexpr unsigned int BGCurveSegmentAttributes_TypeDefinitionIndex = 44289;

	class BGCurveSegmentAttributes : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Boolean>** StaticGet__savedShowCurveStates()
		{
			return (::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x16150);
		}
		static ::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes** StaticGet__CurrentEditingInstance_k__BackingField()
		{
			return (::RPGTools::HoudiniToUnity::BGCurveSegmentAttributes**)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x16158);
		}
		static ::UnityEngine::Rect* StaticGet__OverlayWindowRect_k__BackingField()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x7F60);
		}
		static ::System::Int32* StaticGet__CurrentEditingAttrIndex_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x7F70);
		}
		static ::System::Boolean* StaticGet__IsInEditMode_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x7F74);
		}
		static ::System::Int32* StaticGet__CurrentEditingSegmentIndex_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BGCurveSegmentAttributes_TypeDefinitionIndex)->GetStaticField(0x7F78);
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
