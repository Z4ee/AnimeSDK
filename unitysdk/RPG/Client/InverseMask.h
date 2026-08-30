#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_INVERSEMASK_ADDMASKRECT_OFFSET UNITYSDK_OFFSET(0x194DC6E0)
#define RPG_CLIENT_INVERSEMASK_ADDMASKREGION_OFFSET UNITYSDK_OFFSET(0x194DBEC0)
#define RPG_CLIENT_INVERSEMASK_ADDTRANS_OFFSET UNITYSDK_OFFSET(0x194DB6E0)
#define RPG_CLIENT_INVERSEMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x194DD510)
#define RPG_CLIENT_INVERSEMASK_CLEAR_OFFSET UNITYSDK_OFFSET(0x194DCF90)
#define RPG_CLIENT_INVERSEMASK_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x194DCF30)
#define RPG_CLIENT_INVERSEMASK_GET_UICAM_OFFSET UNITYSDK_OFFSET(0x194DD710)
#define RPG_CLIENT_INVERSEMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194DD650)
#define RPG_CLIENT_INVERSEMASK_START_OFFSET UNITYSDK_OFFSET(0x194DD560)
#define RPG_CLIENT_INVERSEMASK_UPDATEBLUR_OFFSET UNITYSDK_OFFSET(0x194DCE70)
#define RPG_CLIENT_INVERSEMASK_UPDATEMASKRECT_OFFSET UNITYSDK_OFFSET(0x194DCB40)
#define RPG_CLIENT_INVERSEMASK_UPDATEMASKREGION_OFFSET UNITYSDK_OFFSET(0x194DC550)
#define RPG_CLIENT_INVERSEMASK_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x194DD040)
#define RPG_CLIENT_INVERSEMASK_UPDATETRANS_OFFSET UNITYSDK_OFFSET(0x194DBD60)
#define RPG_CLIENT_INVERSEMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x194DD850)
#define RPG_CLIENT_INVERSEMASK__SCALEVECTOR_OFFSET UNITYSDK_OFFSET(0x194DCA40)
#define RPG_CLIENT_INVERSEMASK__SETPOSITIONBYBOUNDS_OFFSET UNITYSDK_OFFSET(0x194DC0C0)
#define RPG_CLIENT_INVERSEMASK__SETPOSITIONBYRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x194DB8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int InverseMask_TypeDefinitionIndex = 72475;

	class InverseMask : public ::UnityEngine::UI::Graphic
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_MatAsset()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(InverseMask_TypeDefinitionIndex)->GetStaticField(0x57720);
		}
		static ::System::Int32* StaticGet_m_Count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InverseMask_TypeDefinitionIndex)->GetStaticField(0x11D30);
		}
		// static const ::System::Int32 _MAX_COUNT = 0xA; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* m_CornersArray; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* m_Corners; // 0xA8
		::Il2CppArray<::System::Single>* m_Modes; // 0xB0
		::Il2CppArray<::System::Single>* m_Scales; // 0xB8
		::Il2CppArray<::UnityEngine::Vector2>* m_Offsets; // 0xC0
		::UnityEngine::Material* m_MaterialInstance; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* m_MaskRectTransforms; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* m_MaskRegions; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* m_MaskRects; // 0xE0
		::System::Int32 _MaskCount; // 0xE8
		::System::Int32 _Mode; // 0xEC
		::System::Int32 _Corners; // 0xF0
		::System::Int32 _Blur; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK__CTOR_OFFSET))(this);
		}

		::System::Int32 AddTrans(::UnityEngine::RectTransform* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_ADDTRANS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateTrans(::System::Int32 a1, ::UnityEngine::RectTransform* a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATETRANS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 AddMaskRegion(::UnityEngine::Bounds a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Camera* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Bounds, ::System::UInt32, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_ADDMASKREGION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean UpdateMaskRegion(::System::Int32 a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Camera* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Bounds, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATEMASKREGION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 AddMaskRect(::UnityEngine::Rect a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_ADDMASKRECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UpdateMaskRect(::System::Int32 a1, ::UnityEngine::Rect a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATEMASKRECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateBlur(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATEBLUR_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_CLEAR_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Camera* get_UICam()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_GET_UICAM_OFFSET))(this);
		}

		::System::Void _SetPositionByRectTransform(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK__SETPOSITIONBYRECTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void _SetPositionByBounds(::System::Int32 a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Camera* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Bounds, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK__SETPOSITIONBYBOUNDS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector4 _ScaleVector(::UnityEngine::Vector4 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK__SCALEVECTOR_OFFSET))(this, a1, a2);
		}
	};
}
