#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UIMeta; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class CanvasScaler; }

#define RPG_CLIENT_UIPOSTPROCESSTWEEN_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA724280)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA726460)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_7250DE5FF780E436_OFFSET UNITYSDK_OFFSET(0xA7243E0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xA725FA0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0xA7249F0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA725790)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_RESET_OFFSET UNITYSDK_OFFSET(0xA726680)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_SETDISABLEUIBLURTWEEN_OFFSET UNITYSDK_OFFSET(0xA726630)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_SETUIMETA_OFFSET UNITYSDK_OFFSET(0xA724630)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA7268D0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0xA726930)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPostProcessTween_TypeDefinitionIndex = 59901;

	class UIPostProcessTween : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::UIPostProcessTween** StaticGet_Field_5_15()
		{
			return (::RPG::Client::UIPostProcessTween**)Il2CppClass::FromTypeDefinitionIndex(UIPostProcessTween_TypeDefinitionIndex)->GetStaticField(0x36760);
		}
		// static const ::System::Int32 MaxPartialRectCount = 0x4; // 0x0
		::RPG::Client::UIMeta* _UIMetaBlurFull; // 0x18
		::RPG::Client::UIMeta* _UIMetaBlurFullLast; // 0x20
		::RPG::Client::UIMeta* _UIMetaBlurPartial; // 0x28
		::UnityEngine::CanvasGroup* Field_5_3; // 0x30
		::UnityEngine::CanvasGroup* Field_5_4; // 0x38
		::System::Boolean Field_5_5; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_7; // 0x48
		::System::Boolean Field_5_8; // 0x50
		::RPG::Client::UIMeta* _UIMetaVignette; // 0x58
		::UnityEngine::CanvasGroup* Field_5_10; // 0x60
		::System::Boolean Field_5_11; // 0x68
		::RPG::Client::UIMeta* _UIMetaDOF; // 0x70
		::System::Boolean Field_5_13; // 0x78
		::RPG::Client::UIMeta* _UIMetaDisableMainCamera; // 0x80
		::UnityEngine::UI::CanvasScaler* Field_5_16; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIPostProcessTween* get_Instance()
		{
			return ((::RPG::Client::UIPostProcessTween*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_GET_INSTANCE_OFFSET))();
		}

		::System::Single Method_5_7250DE5FF780E436()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_7250DE5FF780E436_OFFSET))(this);
		}

		::System::Void SetUIMeta(::RPG::Client::UIMeta* a1, ::RPG::Client::UIMeta* a2, ::RPG::Client::UIMeta* a3, ::RPG::Client::UIMeta* a4, ::RPG::Client::UIMeta* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_SETUIMETA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetDisableUIBlurTween(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_SETDISABLEUIBLURTWEEN_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_93E6B8A6D29521ED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_93E6B8A6D29521ED_OFFSET))(this);
		}

		::System::Void Method_5_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void Method_5_8C704EC832EDEFC8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_8C704EC832EDEFC8_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}
	};
}
