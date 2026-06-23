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

#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1A250120)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A24FD80)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR1_OFFSET UNITYSDK_OFFSET(0x1A24EA30)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR2_OFFSET UNITYSDK_OFFSET(0x1A24EBC0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR3_OFFSET UNITYSDK_OFFSET(0x1A24ED50)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR4_OFFSET UNITYSDK_OFFSET(0x1A24EEE0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT1_OFFSET UNITYSDK_OFFSET(0x1A24E970)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT2_OFFSET UNITYSDK_OFFSET(0x1A24EB00)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT3_OFFSET UNITYSDK_OFFSET(0x1A24EC90)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT4_OFFSET UNITYSDK_OFFSET(0x1A24EE20)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1A2500E0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1A24FA10)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A24F930)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A24F400)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A24F880)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A24F390)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A24F320)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1A24F6C0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A24F7A0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x1A24F080)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR1_OFFSET UNITYSDK_OFFSET(0x1A24EA40)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR2_OFFSET UNITYSDK_OFFSET(0x1A24EBD0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR3_OFFSET UNITYSDK_OFFSET(0x1A24ED60)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR4_OFFSET UNITYSDK_OFFSET(0x1A24EEF0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1A24EFB0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT1_OFFSET UNITYSDK_OFFSET(0x1A24E980)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT2_OFFSET UNITYSDK_OFFSET(0x1A24EB10)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT3_OFFSET UNITYSDK_OFFSET(0x1A24ECA0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT4_OFFSET UNITYSDK_OFFSET(0x1A24EE30)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_USINGUV_OFFSET UNITYSDK_OFFSET(0x1A24E8F0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_START_OFFSET UNITYSDK_OFFSET(0x1A24F100)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A250490)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A250380)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A250700)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A250790)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A250820)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A250830)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A250840)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1A250850)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2508E0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT___BASE_START_OFFSET UNITYSDK_OFFSET(0x1A250970)

namespace Code::Logic::UI::UGUIExtensions
{
	inline static constexpr unsigned int UI4ColorGradient_TypeDefinitionIndex = 41135;

	class UI4ColorGradient : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_UVSet()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x43F20);
		}
		static ::System::Collections::IEnumerable** StaticGet_BlendModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x43F28);
		}
		static ::System::Int32* StaticGet_Field_7_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105D0);
		}
		static ::System::Int32* StaticGet_Field_7_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105D4);
		}
		static ::System::Int32* StaticGet_Field_7_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105D8);
		}
		static ::System::Int32* StaticGet_Field_7_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105DC);
		}
		static ::System::Int32* StaticGet_Field_7_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105E0);
		}
		static ::System::Int32* StaticGet_Field_7_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105E4);
		}
		static ::System::Int32* StaticGet_Field_7_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105E8);
		}
		static ::System::Int32* StaticGet_Field_7_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105EC);
		}
		static ::System::Int32* StaticGet_Field_7_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105F0);
		}
		static ::System::Int32* StaticGet_Field_7_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x105F4);
		}
		// static const ::System::String* Field_7_16; // 0x0
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
		::UnityEngine::RectTransform* Field_7_13; // 0x90
		::UnityEngine::Material* Field_7_14; // 0x98
		::System::Boolean Field_7_15; // 0xA0
		::Foundation::AssetRequestHandle Field_7_17; // 0xA8

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
