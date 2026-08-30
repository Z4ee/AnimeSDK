#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_UIPASSSETTINGS_GET_SCENEPOSTPROCESSRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EE595D0)
#define RPG_CUSTOMRP_UIPASSSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE59640)
#define RPG_CUSTOMRP_UIPASSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE59630)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UIPassSettings_TypeDefinitionIndex = 36890;

	class UIPassSettings : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsB()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x16B30);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsA()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x16B38);
		}
		static ::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>** StaticGet_OffScreenUIContexts()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x16B40);
		}
		static ::System::Single* StaticGet_BlurFullScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x8890);
		}
		static ::System::Boolean* StaticGet_EnableVignette()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x8894);
		}
		static ::System::Boolean* StaticGet_BlurFullDisableUI3DCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x8895);
		}
		static ::System::Boolean* StaticGet_EnableOffScreenUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x8896);
		}
		static ::System::Boolean* StaticGet_EnableBlurFull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x8897);
		}
		static ::System::Single* StaticGet_BlurPartialAlpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x8898);
		}
		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x889C);
		}
		static ::System::Boolean* StaticGet_EnableBlurPartial()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x889D);
		}
		static ::System::Boolean* StaticGet_VignetteRounded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x889E);
		}
		static ::UnityEngine::Vector2* StaticGet_VignetteCenter()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88A0);
		}
		static ::System::Single* StaticGet_BlurPartialScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88A8);
		}
		static ::System::Int32* StaticGet_UILayer2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88AC);
		}
		static ::System::Int32* StaticGet_CircleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88B0);
		}
		static ::UnityEngine::Vector4* StaticGet_BlurPartialSmooth()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88B4);
		}
		static ::System::Single* StaticGet_VignetteIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88C4);
		}
		static ::System::Int32* StaticGet_VersionIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88C8);
		}
		static ::System::Single* StaticGet_VignetteSmoothness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88CC);
		}
		static ::RPG::CustomRP::Quality* StaticGet_Quality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88D0);
		}
		static ::System::Int32* StaticGet_UILayer1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88D4);
		}
		static ::System::Single* StaticGet_Alpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88D8);
		}
		static ::UnityEngine::Color* StaticGet_VignetteColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88DC);
		}
		static ::System::Int32* StaticGet_RectCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88EC);
		}
		static ::System::Int32* StaticGet_UILayer3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88F0);
		}
		static ::System::Single* StaticGet_Brightness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPassSettings_TypeDefinitionIndex)->GetStaticField(0x88F4);
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
