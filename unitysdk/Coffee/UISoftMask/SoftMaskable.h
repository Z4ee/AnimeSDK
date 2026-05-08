#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Hash128.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/SpriteMaskInteraction.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Coffee::UISoftMask { class SoftMask; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }

#define COFFEE_UISOFTMASK_SOFTMASKABLE_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1C186320)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x1C1860E0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_GET_MODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C186850)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_GET_RAYCASTFILTER_OFFSET UNITYSDK_OFFSET(0x1C1864B0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_GET_SOFTMASK_OFFSET UNITYSDK_OFFSET(0x1C186700)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_GET_USESTENCIL_OFFSET UNITYSDK_OFFSET(0x1C1864D0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C188790)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C1883D0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_SETMASKINTERACTION_1_OFFSET UNITYSDK_OFFSET(0x1C1881A0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_SETMASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1C188180)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_SET_INVERSE_OFFSET UNITYSDK_OFFSET(0x1C1860F0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_SET_MODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C186860)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_SET_RAYCASTFILTER_OFFSET UNITYSDK_OFFSET(0x1C1864C0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_SET_USESTENCIL_OFFSET UNITYSDK_OFFSET(0x1C1864E0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1C186D70)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_UNITYENGINE_UI_IMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C186870)
#define COFFEE_UISOFTMASK_SOFTMASKABLE_UNITYENGINE_UI_IMATERIALMODIFIER_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1C186D60)
#define COFFEE_UISOFTMASK_SOFTMASKABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C188AF0)
#define COFFEE_UISOFTMASK_SOFTMASKABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C188A90)
#define COFFEE_UISOFTMASK_SOFTMASKABLE__UNITYENGINE_UI_IMATERIALMODIFIER_GETMODIFIEDMATERIAL_B__34_0_OFFSET UNITYSDK_OFFSET(0x1C188B40)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int SoftMaskable_TypeDefinitionIndex = 84930;

	class SoftMaskable : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMaskable*>** StaticGet_s_ActiveSoftMaskables()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMaskable*>**)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x49C90);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Interactions()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x49C98);
		}
		static ::System::Int32* StaticGet_s_GameTVPId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x11D90);
		}
		static ::System::Int32* StaticGet_s_StencilCompId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x11D94);
		}
		static ::UnityEngine::Hash128* StaticGet_k_InvalidHash()
		{
			return (::UnityEngine::Hash128*)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x11D98);
		}
		static ::System::Int32* StaticGet_s_SoftMaskTexId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x11DA8);
		}
		static ::System::Int32* StaticGet_s_MaskInteractionId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x11DAC);
		}
		static ::System::Int32* StaticGet_s_GameVPId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMaskable_TypeDefinitionIndex)->GetStaticField(0x11DB0);
		}
		// static const ::System::Int32 kVisibleInside = 0x55; // 0x0
		// static const ::System::Int32 kVisibleOutside = 0xAA; // 0x0
		::System::Boolean m_Inverse; // 0x18
		::System::Int32 m_MaskInteraction; // 0x1C
		::System::Boolean m_UseStencil; // 0x20
		::System::Boolean m_RaycastFilter; // 0x21
		::UnityEngine::UI::Graphic* _graphic; // 0x28
		::Coffee::UISoftMask::SoftMask* _softMask; // 0x30
		::UnityEngine::Hash128 _effectMaterialHash; // 0x38
		::UnityEngine::Material* _modifiedMaterial_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_inverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_GET_INVERSE_OFFSET))(this);
		}

		::System::Void set_inverse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_SET_INVERSE_OFFSET))(this, value);
		}

		::System::Boolean get_raycastFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_GET_RAYCASTFILTER_OFFSET))(this);
		}

		::System::Void set_raycastFilter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_SET_RAYCASTFILTER_OFFSET))(this, value);
		}

		::System::Boolean get_useStencil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_GET_USESTENCIL_OFFSET))(this);
		}

		::System::Void set_useStencil(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_SET_USESTENCIL_OFFSET))(this, value);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_GET_GRAPHIC_OFFSET))(this);
		}

		::Coffee::UISoftMask::SoftMask* get_softMask()
		{
			return ((::Coffee::UISoftMask::SoftMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_GET_SOFTMASK_OFFSET))(this);
		}

		::UnityEngine::Material* get_modifiedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_GET_MODIFIEDMATERIAL_OFFSET))(this);
		}

		::System::Void set_modifiedMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_SET_MODIFIEDMATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Material* UnityEngine_UI_IMaterialModifier_GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_UNITYENGINE_UI_IMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 UnityEngine_UI_IMaterialModifier_ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_UNITYENGINE_UI_IMATERIALMODIFIER_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Boolean UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET))(this, sp, eventCamera);
		}

		::System::Void SetMaskInteraction(::UnityEngine::SpriteMaskInteraction intr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_SETMASKINTERACTION_OFFSET))(this, intr);
		}

		::System::Void SetMaskInteraction_1(::UnityEngine::SpriteMaskInteraction layer0, ::UnityEngine::SpriteMaskInteraction layer1, ::UnityEngine::SpriteMaskInteraction layer2, ::UnityEngine::SpriteMaskInteraction layer3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction, ::UnityEngine::SpriteMaskInteraction, ::UnityEngine::SpriteMaskInteraction, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_SETMASKINTERACTION_1_OFFSET))(this, layer0, layer1, layer2, layer3);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void _UnityEngine_UI_IMaterialModifier_GetModifiedMaterial_b__34_0(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASKABLE__UNITYENGINE_UI_IMATERIALMODIFIER_GETMODIFIEDMATERIAL_B__34_0_OFFSET))(this, mat);
		}
	};
}
