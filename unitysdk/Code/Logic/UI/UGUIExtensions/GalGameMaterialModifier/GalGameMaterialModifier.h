#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0D4B4448C1FD8536.h"
#include "unitysdk/Enum_3_C3928EA7A52D68C3.h"
#include "unitysdk/Enum_3_EB156F7324B25C9E.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameFogParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameLutParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameMaterialPreset; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameTextureBlendParams; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x15584690)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x155841D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_0BA202D566359655_OFFSET UNITYSDK_OFFSET(0x15584960)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x15583F60)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_556E74D460D81056_OFFSET UNITYSDK_OFFSET(0x15584C30)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_55B29FDE03DB7C40_OFFSET UNITYSDK_OFFSET(0x15584E20)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x15584650)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15583ED0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15583DA0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x15583D20)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_DEPTHTEXTURE_OFFSET UNITYSDK_OFFSET(0x15583C40)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_FILTERTYPE_OFFSET UNITYSDK_OFFSET(0x15583BD0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_IGNOREPRESETMATERIAL_OFFSET UNITYSDK_OFFSET(0x15583CB0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_PRESET_OFFSET UNITYSDK_OFFSET(0x15583A80)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x15583B60)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_WEATHER_OFFSET UNITYSDK_OFFSET(0x15583AF0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15584FA0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x15584F50)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15585090)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15585120)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameMaterialModifier_TypeDefinitionIndex = 58687;

	class GalGameMaterialModifier : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_6_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11690);
		}
		static ::System::Int32* StaticGet_Field_6_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11694);
		}
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11698);
		}
		static ::System::Int32* StaticGet_Field_6_14()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x1169C);
		}
		static ::System::Int32* StaticGet_Field_6_15()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x116A0);
		}
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x116A4);
		}
		static ::System::Int32* StaticGet_Field_6_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x116A8);
		}
		static ::System::Int32* StaticGet_Field_6_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x116AC);
		}
		static ::System::Int32* StaticGet_Field_6_16()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x116B0);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x116B4);
		}
		// static const ::System::String* Field_6_7; // 0x0
		// static const ::System::String* Field_6_8; // 0x0
		// static const ::System::String* Field_6_9; // 0x0
		// static const ::System::String* Field_6_10; // 0x0
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialPreset* preset; // 0x18
		::Enum_3_C3928EA7A52D68C3 weather; // 0x20
		::Enum_3_EB156F7324B25C9E time; // 0x24
		::Enum_3_0D4B4448C1FD8536 filterType; // 0x28
		::UnityEngine::Texture2D* depthTexture; // 0x30
		::System::Boolean ignorePresetMaterial; // 0x38
		::UnityEngine::UI::Graphic* Field_6_6; // 0x40
		::UnityEngine::Material* Field_6_11; // 0x48
		::Enum_3_0D4B4448C1FD8536 Field_6_12; // 0x50
		::System::Boolean Field_6_13; // 0x54

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

		::System::Void set_Time(::Enum_3_EB156F7324B25C9E a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EB156F7324B25C9E))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_TIME_OFFSET))(this, a1);
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

		::System::Void Method_6_1293CB739F1151A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_1293CB739F1151A1_OFFSET))(this);
		}

		static ::System::Void Method_6_55B29FDE03DB7C40(::UnityEngine::Material* a1, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_55B29FDE03DB7C40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0BA202D566359655(::UnityEngine::Material* a1, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams* a2, ::UnityEngine::Texture2D* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_0BA202D566359655_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_6_556E74D460D81056(::UnityEngine::Material* a1, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_METHOD_6_556E74D460D81056_OFFSET))(a1, a2);
		}
	};
}
