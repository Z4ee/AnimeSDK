#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_UIPASSSETTINGS_GET_SCENEPOSTPROCESSRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x18181790)
#define RPG_CUSTOMRP_UIPASSSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18181800)
#define RPG_CUSTOMRP_UIPASSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x181817F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UIPassSettings_TypeDefinitionIndex = 34962;

	class UIPassSettings : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsA()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xF20);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsB()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xF28);
		}
		static ::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>** StaticGet_OffScreenUIContexts()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xF30);
		}
		static ::System::Int32* StaticGet_CircleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE00);
		}
		static ::System::Boolean* StaticGet_EnableBlurPartial()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE04);
		}
		static ::System::Boolean* StaticGet_VignetteRounded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE05);
		}
		static ::System::Boolean* StaticGet_EnableVignette()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE06);
		}
		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE07);
		}
		static ::System::Int32* StaticGet_UILayer2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE08);
		}
		static ::System::Single* StaticGet_Alpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE0C);
		}
		static ::System::Single* StaticGet_VignetteIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE10);
		}
		static ::UnityEngine::Color* StaticGet_VignetteColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE14);
		}
		static ::UnityEngine::Vector4* StaticGet_BlurPartialSmooth()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE24);
		}
		static ::System::Single* StaticGet_BlurFullScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE34);
		}
		static ::System::Int32* StaticGet_UILayer3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE38);
		}
		static ::System::Single* StaticGet_Brightness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE3C);
		}
		static ::System::Single* StaticGet_BlurPartialScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE40);
		}
		static ::RPG::CustomRP::Quality* StaticGet_Quality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE44);
		}
		static ::System::Boolean* StaticGet_EnableBlurFull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE48);
		}
		static ::System::Boolean* StaticGet_EnableOffScreenUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE49);
		}
		static ::System::Boolean* StaticGet_BlurFullDisableUI3DCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE4A);
		}
		static ::System::Int32* StaticGet_VersionIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE4C);
		}
		static ::System::Int32* StaticGet_UILayer1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE50);
		}
		static ::System::Single* StaticGet_BlurPartialAlpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE54);
		}
		static ::System::Int32* StaticGet_RectCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE58);
		}
		static ::UnityEngine::Vector2* StaticGet_VignetteCenter()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE5C);
		}
		static ::System::Single* StaticGet_VignetteSmoothness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0xE64);
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
