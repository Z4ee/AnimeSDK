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

#define RPG_CLIENT_INVERSEMASK_ADDMASKRECT_OFFSET UNITYSDK_OFFSET(0xA64F070)
#define RPG_CLIENT_INVERSEMASK_ADDMASKREGION_OFFSET UNITYSDK_OFFSET(0xA64E800)
#define RPG_CLIENT_INVERSEMASK_ADDTRANS_OFFSET UNITYSDK_OFFSET(0xA64E010)
#define RPG_CLIENT_INVERSEMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0xA64FEF0)
#define RPG_CLIENT_INVERSEMASK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA64F970)
#define RPG_CLIENT_INVERSEMASK_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xA64F910)
#define RPG_CLIENT_INVERSEMASK_GET_UICAM_OFFSET UNITYSDK_OFFSET(0xA6500D0)
#define RPG_CLIENT_INVERSEMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA650010)
#define RPG_CLIENT_INVERSEMASK_START_OFFSET UNITYSDK_OFFSET(0xA64FF40)
#define RPG_CLIENT_INVERSEMASK_UPDATEBLUR_OFFSET UNITYSDK_OFFSET(0xA64F850)
#define RPG_CLIENT_INVERSEMASK_UPDATEMASKRECT_OFFSET UNITYSDK_OFFSET(0xA64F4F0)
#define RPG_CLIENT_INVERSEMASK_UPDATEMASKREGION_OFFSET UNITYSDK_OFFSET(0xA64EEE0)
#define RPG_CLIENT_INVERSEMASK_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA64FA50)
#define RPG_CLIENT_INVERSEMASK_UPDATETRANS_OFFSET UNITYSDK_OFFSET(0xA64E670)
#define RPG_CLIENT_INVERSEMASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA650240)
#define RPG_CLIENT_INVERSEMASK__SCALEVECTOR_OFFSET UNITYSDK_OFFSET(0xA64F3D0)
#define RPG_CLIENT_INVERSEMASK__SETPOSITIONBYBOUNDS_OFFSET UNITYSDK_OFFSET(0xA64E9B0)
#define RPG_CLIENT_INVERSEMASK__SETPOSITIONBYRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA64E1B0)
#define RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA650440)
#define RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xA650420)
#define RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA650460)
#define RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xA650450)
#define RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA650430)

namespace RPG::Client
{
	inline static constexpr unsigned int InverseMask_TypeDefinitionIndex = 66849;

	class InverseMask : public ::UnityEngine::UI::Graphic
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_MatAsset()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(InverseMask_TypeDefinitionIndex)->GetStaticField(0x25240);
		}
		static ::System::Int32* StaticGet_m_Count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InverseMask_TypeDefinitionIndex)->GetStaticField(0x9BE0);
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

		::System::Int32 AddTrans(::UnityEngine::RectTransform* rectTrans, ::System::UInt32 mode, ::System::Single scale, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_ADDTRANS_OFFSET))(this, rectTrans, mode, scale, offset);
		}

		::System::Boolean UpdateTrans(::System::Int32 index, ::UnityEngine::RectTransform* rectTrans, ::System::Single scale, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATETRANS_OFFSET))(this, index, rectTrans, scale, offset);
		}

		::System::Int32 AddMaskRegion(::UnityEngine::Bounds worldBounds, ::System::UInt32 mode, ::System::Single scale, ::UnityEngine::Vector2 offset, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Bounds, ::System::UInt32, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_ADDMASKREGION_OFFSET))(this, worldBounds, mode, scale, offset, camera);
		}

		::System::Boolean UpdateMaskRegion(::System::Int32 index, ::UnityEngine::Bounds worldBounds, ::System::Single scale, ::UnityEngine::Vector2 offset, ::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Bounds, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATEMASKREGION_OFFSET))(this, index, worldBounds, scale, offset, camera);
		}

		::System::Int32 AddMaskRect(::UnityEngine::Rect ssRect, ::System::UInt32 mode, ::System::Single scale)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_ADDMASKRECT_OFFSET))(this, ssRect, mode, scale);
		}

		::System::Boolean UpdateMaskRect(::System::Int32 index, ::UnityEngine::Rect ssRect, ::System::Single scale)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATEMASKRECT_OFFSET))(this, index, ssRect, scale);
		}

		::System::Void UpdateBlur(::System::Single blur)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK_UPDATEBLUR_OFFSET))(this, blur);
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

		::System::Void _SetPositionByRectTransform(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK__SETPOSITIONBYRECTTRANSFORM_OFFSET))(this, index);
		}

		::System::Void _SetPositionByBounds(::System::Int32 index, ::UnityEngine::Bounds bounds, ::System::Single scale, ::UnityEngine::Vector2 offset, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Bounds, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK__SETPOSITIONBYBOUNDS_OFFSET))(this, index, bounds, scale, offset, camera);
		}

		::UnityEngine::Vector4 _ScaleVector(::UnityEngine::Vector4 v, ::System::Single scale)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK__SCALEVECTOR_OFFSET))(this, v, scale);
		}

		::UnityEngine::Material* __iFixBaseProxy_get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVERSEMASK___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
