#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x15517CA0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x15517900)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR1_OFFSET UNITYSDK_OFFSET(0x155165B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR2_OFFSET UNITYSDK_OFFSET(0x15516740)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR3_OFFSET UNITYSDK_OFFSET(0x155168D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR4_OFFSET UNITYSDK_OFFSET(0x15516A60)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT1_OFFSET UNITYSDK_OFFSET(0x155164F0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT2_OFFSET UNITYSDK_OFFSET(0x15516680)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT3_OFFSET UNITYSDK_OFFSET(0x15516810)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT4_OFFSET UNITYSDK_OFFSET(0x155169A0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x15517C60)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x15517590)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x155174B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15516F80)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15517400)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15516F10)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15516EA0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x15517240)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15517320)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x15516C00)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR1_OFFSET UNITYSDK_OFFSET(0x155165C0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR2_OFFSET UNITYSDK_OFFSET(0x15516750)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR3_OFFSET UNITYSDK_OFFSET(0x155168E0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR4_OFFSET UNITYSDK_OFFSET(0x15516A70)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0x15516B30)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT1_OFFSET UNITYSDK_OFFSET(0x15516500)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT2_OFFSET UNITYSDK_OFFSET(0x15516690)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT3_OFFSET UNITYSDK_OFFSET(0x15516820)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT4_OFFSET UNITYSDK_OFFSET(0x155169B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_USINGUV_OFFSET UNITYSDK_OFFSET(0x15516470)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_START_OFFSET UNITYSDK_OFFSET(0x15516C80)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15518010)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15517F00)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x15518280)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15518310)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x155183A0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x155183B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x155183C0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x155183D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15518460)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_START_OFFSET UNITYSDK_OFFSET(0x155184F0)

namespace Code::Logic::UI::UGUIExtensions
{
	inline static constexpr unsigned int UI4ColorGradient_TypeDefinitionIndex = 71106;

	class UI4ColorGradient : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_BlendModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x47C10);
		}
		static ::System::Collections::IEnumerable** StaticGet_UVSet()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x47C18);
		}
		static ::System::Int32* StaticGet_Field_7_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AD0);
		}
		static ::System::Int32* StaticGet_Field_7_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AD4);
		}
		static ::System::Int32* StaticGet_Field_7_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AD8);
		}
		static ::System::Int32* StaticGet_Field_7_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10ADC);
		}
		static ::System::Int32* StaticGet_Field_7_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AE0);
		}
		static ::System::Int32* StaticGet_Field_7_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AE4);
		}
		static ::System::Int32* StaticGet_Field_7_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AE8);
		}
		static ::System::Int32* StaticGet_Field_7_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AEC);
		}
		static ::System::Int32* StaticGet_Field_7_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AF0);
		}
		static ::System::Int32* StaticGet_Field_7_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10AF4);
		}
		// static const ::System::String* Field_7_17; // 0x0
		::System::Int32 usingUV; // 0x20
		::UnityEngine::Vector2 point1; // 0x24
		::UnityEngine::Color color1; // 0x2C
		::UnityEngine::Vector2 point2; // 0x3C
		::UnityEngine::Color color2; // 0x44
		::UnityEngine::Vector2 point3; // 0x54
		::UnityEngine::Color color3; // 0x5C
		::UnityEngine::Vector2 point4; // 0x6C
		::UnityEngine::Color color4; // 0x74
		::System::Single opacity; // 0x84
		::System::Int32 blendMode; // 0x88
		::UnityEngine::RectTransform* Field_7_12; // 0x90
		::UnityEngine::Material* Field_7_19; // 0x98
		::System::Boolean Field_7_18; // 0xA0
		::Foundation::AssetRequestHandle Field_7_16; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CCTOR_OFFSET))();
		}

		::System::Void set_UsingUV(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_USINGUV_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Point1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT1_OFFSET))(this);
		}

		::System::Void set_Point1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT1_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_Color1()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR1_OFFSET))(this);
		}

		::System::Void set_Color1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Point2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT2_OFFSET))(this);
		}

		::System::Void set_Point2(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT2_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_Color2()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR2_OFFSET))(this);
		}

		::System::Void set_Color2(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Point3()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT3_OFFSET))(this);
		}

		::System::Void set_Point3(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT3_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_Color3()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR3_OFFSET))(this);
		}

		::System::Void set_Color3(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Point4()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT4_OFFSET))(this);
		}

		::System::Void set_Point4(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT4_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_Color4()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR4_OFFSET))(this);
		}

		::System::Void set_Color4(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR4_OFFSET))(this, a1);
		}

		::System::Void set_Opacity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_OPACITY_OFFSET))(this, a1);
		}

		::System::Void set_BlendMode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_BLENDMODE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFYMESH_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIAL_OFFSET))(this, a1);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFIERSORTORDER_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIALPOST_OFFSET))(this, a1);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_START_OFFSET))(this);
		}
	};
}
