#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AlertCompliance_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"

namespace MiHoYo::SDK { class AlertCompliance_OnAlertDelegate; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_ALERTCOMPLIANCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A50A430)
#define MIHOYO_SDK_ALERTCOMPLIANCE_GETCHARWIDTH_OFFSET UNITYSDK_OFFSET(0x1A50C630)
#define MIHOYO_SDK_ALERTCOMPLIANCE_HIDE_OFFSET UNITYSDK_OFFSET(0x1A50C2A0)
#define MIHOYO_SDK_ALERTCOMPLIANCE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A50C610)
#define MIHOYO_SDK_ALERTCOMPLIANCE_ONTAPCLOSE_OFFSET UNITYSDK_OFFSET(0x1A50C530)
#define MIHOYO_SDK_ALERTCOMPLIANCE_ONTAPSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A50C5A0)
#define MIHOYO_SDK_ALERTCOMPLIANCE_POSTPROCESSFINALLINE_OFFSET UNITYSDK_OFFSET(0x1A50C940)
#define MIHOYO_SDK_ALERTCOMPLIANCE_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1A50AB70)
#define MIHOYO_SDK_ALERTCOMPLIANCE_SHOW_OFFSET UNITYSDK_OFFSET(0x1A50BF20)
#define MIHOYO_SDK_ALERTCOMPLIANCE_START_OFFSET UNITYSDK_OFFSET(0x1A50AB30)
#define MIHOYO_SDK_ALERTCOMPLIANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A50CD10)
#define MIHOYO_SDK_ALERTCOMPLIANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50CD00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AlertCompliance_TypeDefinitionIndex = 18856;

	class AlertCompliance : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_AlertHideTaskList()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AlertCompliance_TypeDefinitionIndex)->GetStaticField(0x8F30);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(AlertCompliance_TypeDefinitionIndex)->GetStaticField(0x8F38);
		}
		// static const ::System::String* PUNCTUATION_NO_START; // 0x0
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* ButtonTextPath; // 0x0
		::System::String* content; // 0x58
		::System::String* buttonTitle; // 0x60
		::MiHoYo::SDK::AlertCompliance_OnAlertDelegate* OnAlertResult; // 0x68
		::MiHoYo::SDK::AlertCompliance_AlertResult result; // 0x70
		::System::Boolean isShowClose; // 0x74
		::UnityEngine::UI::Button* closeButton; // 0x78
		::UnityEngine::UI::Text* contentText; // 0x80
		::UnityEngine::UI::Button* submitButton; // 0x88
		::UnityEngine::UI::Text* buttonText; // 0x90
		::UnityEngine::RectTransform* textRectTransform; // 0x98
		::UnityEngine::TextGenerator* textGenerator; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_START_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* content, ::System::String* button, ::MiHoYo::SDK::AlertCompliance_OnAlertDelegate* callback, ::System::Boolean isShowClose)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AlertCompliance_OnAlertDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_SHOW_OFFSET))(content, button, callback, isShowClose);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_HIDE_OFFSET))();
		}

		::System::Void OnTapClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_ONTAPCLOSE_OFFSET))(this);
		}

		::System::Void OnTapSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_ONTAPSUBMIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetText(::System::String* rawText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_SETTEXT_OFFSET))(this, rawText);
		}

		::System::String* PostProcessFinalLine(::System::String* formattedText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_POSTPROCESSFINALLINE_OFFSET))(this, formattedText);
		}

		::System::Single GetCharWidth(::System::Char c, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::System::Single(*)(::PVOID, ::System::Char, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_GETCHARWIDTH_OFFSET))(this, c, settings);
		}
	};
}
