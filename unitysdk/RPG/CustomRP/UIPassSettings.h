#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_UIPASSSETTINGS_GET_SCENEPOSTPROCESSRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x16ADC7E0)
#define RPG_CUSTOMRP_UIPASSSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ADC850)
#define RPG_CUSTOMRP_UIPASSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16ADC840)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UIPassSettings_TypeDefinitionIndex = 29195;

	class UIPassSettings : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>** StaticGet_OffScreenUIContexts()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xEE10);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsA()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xEE18);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsB()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xEE20);
		}
		static ::System::Single* StaticGet_VignetteSmoothness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F10);
		}
		static ::System::Int32* StaticGet_CircleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F14);
		}
		static ::System::Boolean* StaticGet_EnableBlurFull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F18);
		}
		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F19);
		}
		static ::System::Boolean* StaticGet_EnableOffScreenUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F1A);
		}
		static ::System::Boolean* StaticGet_BlurFullDisableUI3DCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F1B);
		}
		static ::System::Int32* StaticGet_RectCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F1C);
		}
		static ::System::Single* StaticGet_BlurPartialAlpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F20);
		}
		static ::UnityEngine::Vector4* StaticGet_BlurPartialSmooth()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F24);
		}
		static ::System::Single* StaticGet_Brightness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F34);
		}
		static ::UnityEngine::Vector2* StaticGet_VignetteCenter()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F38);
		}
		static ::System::Int32* StaticGet_UILayer3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F40);
		}
		static ::System::Single* StaticGet_BlurPartialScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F44);
		}
		static ::RPG::CustomRP::Quality* StaticGet_Quality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F48);
		}
		static ::System::Int32* StaticGet_VersionIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F4C);
		}
		static ::System::Single* StaticGet_VignetteIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F50);
		}
		static ::System::Int32* StaticGet_UILayer1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F54);
		}
		static ::System::Single* StaticGet_Alpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F58);
		}
		static ::UnityEngine::Color* StaticGet_VignetteColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F5C);
		}
		static ::System::Int32* StaticGet_UILayer2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F6C);
		}
		static ::System::Boolean* StaticGet_EnableVignette()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F70);
		}
		static ::System::Boolean* StaticGet_EnableBlurPartial()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F71);
		}
		static ::System::Boolean* StaticGet_VignetteRounded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F72);
		}
		static ::System::Single* StaticGet_BlurFullScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x4F74);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPASSSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPASSSETTINGS__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_ScenePostProcessRenderToTexture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPASSSETTINGS_GET_SCENEPOSTPROCESSRENDERTOTEXTURE_OFFSET))();
		}
	};
}
