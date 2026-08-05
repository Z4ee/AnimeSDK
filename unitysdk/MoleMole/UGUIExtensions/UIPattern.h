#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/SharedUnityObjectResource_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_AWAKE_OFFSET UNITYSDK_OFFSET(0x191C2AA0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x191C3590)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x191C3350)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x191C2760)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x191C3550)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x191C2FD0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x191C3060)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x191C30F0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x191C2F40)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x191C2E20)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x191C2EB0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CCTOR_OFFSET UNITYSDK_OFFSET(0x191C38D0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x191C3860)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x191C3B80)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x191C3C10)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x191C3CA0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x191C3D30)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x191C3DC0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x191C3E50)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x191C3EE0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x191C3F70)

namespace MoleMole::UGUIExtensions
{
	inline static constexpr unsigned int UIPattern_TypeDefinitionIndex = 89749;

	class UIPattern : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>* StaticGet_Field_6_12()
		{
			return (::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x48E80);
		}
		static ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>** StaticGet_Field_6_15()
		{
			return (::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x48EB8);
		}
		static ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>** StaticGet_Field_6_9()
		{
			return (::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x48EC0);
		}
		static ::System::Int32* StaticGet_Field_6_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10D40);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10D44);
		}
		static ::System::Int32* StaticGet_Field_6_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10D48);
		}
		static ::System::Int32* StaticGet_Field_6_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10D4C);
		}
		static ::System::Int32* StaticGet_Field_6_16()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10D50);
		}
		static ::System::Int32* StaticGet_Field_6_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10D54);
		}
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10D58);
		}
		// static const ::System::String* Field_6_13; // 0x0
		// static const ::System::String* Field_6_25; // 0x0
		// static const ::System::String* Field_6_24; // 0x0
		::UnityEngine::Sprite* Pattern; // 0x18
		::UnityEngine::Color PatternColor; // 0x20
		::System::Single PatternTiling; // 0x30
		::System::Single PatternSize; // 0x34
		::System::Single Interlace; // 0x38
		::System::Boolean CircleMask; // 0x3C
		::System::Boolean KeepPatternComplete; // 0x3D
		::System::Int32 ImageMode; // 0x40
		::System::Int32 BlendMode; // 0x44
		::UnityEngine::Material* Field_6_19; // 0x48
		::UnityEngine::RectTransform* Field_6_18; // 0x50
		::UnityEngine::UI::MaskableGraphic* Field_6_17; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ISACTIVE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_AWAKE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIAL_OFFSET))(this, a1);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_MODIFIERSORTORDER_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIALPOST_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_AWAKE_OFFSET))(this);
		}

		::System::Boolean __base_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
