#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0D4B4448C1FD8536.h"
#include "unitysdk/Enum_3_C3928EA7A52D68C3.h"
#include "unitysdk/Enum_3_FFF437E537B836BE.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameFogParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameLutParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameMaterialPreset; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameTextureBlendParams; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x13CD8090)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x13CD7BD0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_0BA202D566359655_OFFSET UNITYSDK_OFFSET(0x13CD8360)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x13CD7960)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_556E74D460D81056_OFFSET UNITYSDK_OFFSET(0x13CD8630)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_A2A5A6F42AAC8BC4_OFFSET UNITYSDK_OFFSET(0x13CD8820)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x13CD8050)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13CD78D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13CD77A0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x13CD7720)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_DEPTHTEXTURE_OFFSET UNITYSDK_OFFSET(0x13CD7640)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_FILTERTYPE_OFFSET UNITYSDK_OFFSET(0x13CD75D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_IGNOREPRESETMATERIAL_OFFSET UNITYSDK_OFFSET(0x13CD76B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_PRESET_OFFSET UNITYSDK_OFFSET(0x13CD7480)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x13CD7560)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_WEATHER_OFFSET UNITYSDK_OFFSET(0x13CD74F0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CD8AD0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD8A80)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13CD8BC0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13CD8C50)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameMaterialModifier_TypeDefinitionIndex = 71771;

	class GalGameMaterialModifier : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFBF0);
		}
		static ::System::Int32* StaticGet_Field_6_16()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFBF4);
		}
		static ::System::Int32* StaticGet_Field_6_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFBF8);
		}
		static ::System::Int32* StaticGet_Field_6_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFBFC);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFC00);
		}
		static ::System::Int32* StaticGet_Field_6_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFC04);
		}
		static ::System::Int32* StaticGet_Field_6_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFC08);
		}
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFC0C);
		}
		static ::System::Int32* StaticGet_Field_6_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFC10);
		}
		static ::System::Int32* StaticGet_Field_6_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0xFC14);
		}
		// static const ::System::String* Field_6_10; // 0x0
		// static const ::System::String* Field_6_9; // 0x0
		// static const ::System::String* Field_6_8; // 0x0
		// static const ::System::String* Field_6_15; // 0x0
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialPreset* preset; // 0x18
		::Enum_3_C3928EA7A52D68C3 weather; // 0x20
		::Enum_3_FFF437E537B836BE time; // 0x24
		::Enum_3_0D4B4448C1FD8536 filterType; // 0x28
		::UnityEngine::Texture2D* depthTexture; // 0x30
		::System::Boolean ignorePresetMaterial; // 0x38
		::UnityEngine::UI::Graphic* Field_6_11; // 0x40
		::UnityEngine::Material* Field_6_14; // 0x48
		::Enum_3_0D4B4448C1FD8536 Field_6_13; // 0x50
		::System::Boolean Field_6_12; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CCTOR_OFFSET))();
		}

		::System::Void set_Preset(::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialPreset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialPreset*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_PRESET_OFFSET))(this, a1);
		}

		::System::Void set_Weather(::Enum_3_C3928EA7A52D68C3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C3928EA7A52D68C3))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_WEATHER_OFFSET))(this, a1);
		}

		::System::Void set_Time(::Enum_3_FFF437E537B836BE a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_FFF437E537B836BE))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_TIME_OFFSET))(this, a1);
		}

		::System::Void set_FilterType(::Enum_3_0D4B4448C1FD8536 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0D4B4448C1FD8536))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_FILTERTYPE_OFFSET))(this, a1);
		}

		::System::Void set_DepthTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_DEPTHTEXTURE_OFFSET))(this, a1);
		}

		::System::Void set_IgnorePresetMaterial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_IGNOREPRESETMATERIAL_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET))(this, a1);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_MODIFIERSORTORDER_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIALPOST_OFFSET))(this, a1);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER___BASE_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Method_6_556E74D460D81056(::UnityEngine::Material* a1, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_556E74D460D81056_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A2A5A6F42AAC8BC4(::UnityEngine::Material* a1, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_A2A5A6F42AAC8BC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0BA202D566359655(::UnityEngine::Material* a1, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams* a2, ::UnityEngine::Texture2D* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_0BA202D566359655_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_6_1293CB739F1151A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_1293CB739F1151A1_OFFSET))(this);
		}
	};
}
