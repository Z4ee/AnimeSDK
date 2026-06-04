#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIPartialBlur_ShapeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIPartialBlur; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class CanvasScaler; }

#define RPG_CLIENT_UIPOSTPROCESSTWEEN_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCB88C40)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xCB8A770)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0xCB893C0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xCB8A2B0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_CCFFC97FF79A551F_OFFSET UNITYSDK_OFFSET(0xCB88DA0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xCB89AA0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_RESET_OFFSET UNITYSDK_OFFSET(0xCB8A990)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_SETDISABLEUIBLURTWEEN_OFFSET UNITYSDK_OFFSET(0xCB8A940)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_SETUIMETA_OFFSET UNITYSDK_OFFSET(0xCB89010)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN_UPDATE_OFFSET UNITYSDK_OFFSET(0xCB8ABE0)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0xCB8B110)
#define RPG_CLIENT_UIPOSTPROCESSTWEEN__UPDATEBLURPARAMS_G__FILLPARTIALBLURAREA_25_0_OFFSET UNITYSDK_OFFSET(0xCB8AC40)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPostProcessTween_TypeDefinitionIndex = 68251;

	class UIPostProcessTween : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::UIPostProcessTween** StaticGet_Field_5_0()
		{
			return (::RPG::Client::UIPostProcessTween**)Il2CppClass::FromTypeDefinitionIndex(UIPostProcessTween_TypeDefinitionIndex)->GetStaticField(0x605D0);
		}
		// static const ::System::Int32 MaxPartialRectCount = 0x4; // 0x0
		::RPG::Client::UIMeta* _UIMetaBlurFull; // 0x18
		::RPG::Client::UIMeta* _UIMetaBlurFullLast; // 0x20
		::RPG::Client::UIMeta* _UIMetaBlurPartial; // 0x28
		::UnityEngine::CanvasGroup* Field_5_5; // 0x30
		::UnityEngine::CanvasGroup* Field_5_6; // 0x38
		::System::Boolean Field_5_7; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_8; // 0x48
		::System::Boolean Field_5_9; // 0x50
		::RPG::Client::UIMeta* _UIMetaVignette; // 0x58
		::UnityEngine::CanvasGroup* Field_5_11; // 0x60
		::System::Boolean Field_5_12; // 0x68
		::RPG::Client::UIMeta* _UIMetaDOF; // 0x70
		::System::Boolean Field_5_14; // 0x78
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

		::System::Single Method_5_CCFFC97FF79A551F()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_CCFFC97FF79A551F_OFFSET))(this);
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

		::System::Void Method_5_422AB1A19F04E217()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN_METHOD_5_422AB1A19F04E217_OFFSET))(this);
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

		::System::Void _UpdateBlurParams_g__FillPartialBlurArea_25_0(::RPG::Client::UIPartialBlur* a1, ::RPG::Client::UIPartialBlur_ShapeType a2, ::UnityEngine::Camera* a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPartialBlur*, ::RPG::Client::UIPartialBlur_ShapeType, ::UnityEngine::Camera*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOSTPROCESSTWEEN__UPDATEBLURPARAMS_G__FILLPARTIALBLURAREA_25_0_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
