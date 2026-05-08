#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigHollowChessboardScreenUIAtlas; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_CALCULATEBACKGROUNDRECT_OFFSET UNITYSDK_OFFSET(0x16A909D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_CALCULATEFONTUVRECT_OFFSET UNITYSDK_OFFSET(0x16A90550)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_CALCULATEICONUVRECT_OFFSET UNITYSDK_OFFSET(0x16A90780)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_BACKGROUNDRESOLUTION_OFFSET UNITYSDK_OFFSET(0x16A904D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_BACKGROUNDTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x16A90470)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_FONTRESOLUTION_OFFSET UNITYSDK_OFFSET(0x16A904B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_TEXTFONTTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x16A90490)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_ONPARAMCHANGED_OFFSET UNITYSDK_OFFSET(0x16A904F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90BE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardScreenUI_TypeDefinitionIndex = 74162;

	class ConfigHollowChessboardScreenUI : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas* ScreenUIAtlasConfig; // 0x58
		::System::Boolean AutoRecalculate; // 0x60
		::System::Single ScreenAspect; // 0x64
		::UnityEngine::Vector2 RowUVRectOffset; // 0x68
		::System::Single FontUVRectScale; // 0x70
		::UnityEngine::Vector2 FontUVRectOffset; // 0x74
		::UnityEngine::Vector2 DigitOffset; // 0x7C
		::System::Int32 MaxDigitCount; // 0x84
		::System::Single IconUVRectScale; // 0x88
		::UnityEngine::Vector2 IconUVRectOffset; // 0x8C
		::UnityEngine::Vector2 IconOffset; // 0x94
		::System::Int32 MaxIconCount; // 0x9C
		::System::Single BackgroundUVRectScale; // 0xA0
		::UnityEngine::Vector2 BackgroundUVRectOffset; // 0xA4
		::System::Int32 MaxBackgroundCount; // 0xAC
		::System::Int32 GlitchFrameRate; // 0xB0
		::System::Int32 GlitchCount; // 0xB4
		::System::Int32 GlitchCountOnValueChanged; // 0xB8
		::UnityEngine::Vector2 GlitchInterval; // 0xBC
		::System::Int32 MaxNumOfDigits; // 0xC4
		::System::Single FadeInDuration; // 0xC8
		::System::Single FadeOutDuration; // 0xCC
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* FontUVRect; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* IconUVRect; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* FontBackgroundUVRect; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* FontUVRect2; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* IconUVRect2; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* FontBackgroundUVRect2; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI__CTOR_OFFSET))(this);
		}

		::System::String* get_BackgroundTexturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_BACKGROUNDTEXTUREPATH_OFFSET))(this);
		}

		::System::String* get_TextFontTexturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_TEXTFONTTEXTUREPATH_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_FontResolution()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_FONTRESOLUTION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_BackgroundResolution()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_GET_BACKGROUNDRESOLUTION_OFFSET))(this);
		}

		::System::Void OnParamChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_ONPARAMCHANGED_OFFSET))(this);
		}

		::System::Void CalculateFontUVRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_CALCULATEFONTUVRECT_OFFSET))(this);
		}

		::System::Void CalculateIconUVRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_CALCULATEICONUVRECT_OFFSET))(this);
		}

		::System::Void CalculateBackgroundRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUI_CALCULATEBACKGROUNDRECT_OFFSET))(this);
		}
	};
}
