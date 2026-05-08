#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_219B2CD5FA4A8100.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/LanguageAligmentPref.h"
#include "unitysdk/MoleMole/Config/LanguageFontMap.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::Config { class LanguageFontBrushStyle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_CONFIG_CONFIGUIFONT_AWAKE_OFFSET UNITYSDK_OFFSET(0x16A9FCE0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_GETALIGMENTPREF_OFFSET UNITYSDK_OFFSET(0x16A9FBF0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_GETFONTPATH_OFFSET UNITYSDK_OFFSET(0x16A9F9C0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_GETLANGUAGEFONTNAME_OFFSET UNITYSDK_OFFSET(0x16A9F3B0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_GET_DEFAULTFONTSHADER_OFFSET UNITYSDK_OFFSET(0x16A9E620)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_GET_ISDEFAULTFONTSHADERLOAD_OFFSET UNITYSDK_OFFSET(0x16A9E800)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_ISDECORATE_OFFSET UNITYSDK_OFFSET(0x16A9ECF0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_ISFONTSHADER_OFFSET UNITYSDK_OFFSET(0x16A9E930)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_ONKFONTALPHAADJUSTBYLUMINANCECHANGED_OFFSET UNITYSDK_OFFSET(0x16A9FE20)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_SETKFONTALPHAADJUSTBYLUMINANCE_OFFSET UNITYSDK_OFFSET(0x16A9FD90)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_SHOULDUSELIGHTFONT_OFFSET UNITYSDK_OFFSET(0x16A9FAC0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_TRYGETLANGUAGEFONTNAME_OFFSET UNITYSDK_OFFSET(0x16A9F570)
#define MOLEMOLE_CONFIG_CONFIGUIFONT_TRYINITIALIZEDICTCACHE_OFFSET UNITYSDK_OFFSET(0x16A9EDB0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AA06D0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA03C0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT__TRYINITIALIZEDICTCACHE_G__ADDFONT_32_1_OFFSET UNITYSDK_OFFSET(0x16A9FED0)
#define MOLEMOLE_CONFIG_CONFIGUIFONT__TRYINITIALIZEDICTCACHE_G__REMOVEEXTENSIONNAME_32_2_OFFSET UNITYSDK_OFFSET(0x16AA0710)
#define MOLEMOLE_CONFIG_CONFIGUIFONT__TRYINITIALIZEDICTCACHE_G__TRYADDLANGUAGEFONT_32_0_OFFSET UNITYSDK_OFFSET(0x16AA0260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIFont_TypeDefinitionIndex = 57108;

	class ConfigUIFont : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Int32* StaticGet_FontAlphaAdjustByLuminance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigUIFont_TypeDefinitionIndex)->GetStaticField(0xC160);
		}
		::System::String* fontPath; // 0x58
		::System::String* SpecialFontPath; // 0x60
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::Config::LanguageFontMap>*>* fontGroup; // 0x68
		::System::String* defaultFontShaderPath; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* fontShaderPaths; // 0x78
		::MoleMole::Config::LanguageFontBrushStyle* fontBrushStyles; // 0x80
		::System::Single KFontAlphaAdjustByLuminance; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* fontGroupDic; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::MoleMole::LanguageType, ::Enum_3_219B2CD5FA4A8100>, ::System::String*>* languageFontMap; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::MoleMole::LanguageType, ::Enum_3_219B2CD5FA4A8100>, ::System::String*>*>* fontLanguageDic; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* fontAssetDic; // 0xA8
		::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::MoleMole::Config::LanguageAligmentPref>* aligmentPref; // 0xB0
		::Il2CppArray<::System::Int32>* _languageLightFontSizeThresholdsMobile; // 0xB8
		::Il2CppArray<::System::Int32>* _languageLightFontSizeThresholdsNotMobile; // 0xC0
		::Foundation::AssetRequestHandle _defaultFontShaderHandle; // 0xC8
		::UnityEngine::Shader* _defaultFontShader; // 0xE8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::Boolean>* fontShadersCached; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT__CCTOR_OFFSET))();
		}

		::UnityEngine::Shader* get_DefaultFontShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_GET_DEFAULTFONTSHADER_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultFontShaderLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_GET_ISDEFAULTFONTSHADERLOAD_OFFSET))(this);
		}

		::System::Boolean IsFontShader(::UnityEngine::Shader* shader)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_ISFONTSHADER_OFFSET))(this, shader);
		}

		::System::Boolean IsDecorate(::System::String* fontName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_ISDECORATE_OFFSET))(this, fontName);
		}

		::System::String* GetLanguageFontName(::MoleMole::LanguageType lanType, ::Enum_3_219B2CD5FA4A8100 style, ::Enum_3_219B2CD5FA4A8100 fallbackStyle)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::LanguageType, ::Enum_3_219B2CD5FA4A8100, ::Enum_3_219B2CD5FA4A8100))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_GETLANGUAGEFONTNAME_OFFSET))(this, lanType, style, fallbackStyle);
		}

		::System::Boolean TryGetLanguageFontName(::System::String* fontName, ::MoleMole::LanguageType lanType, ::System::String*& resultFontName, ::System::Boolean forceChange, ::Enum_3_219B2CD5FA4A8100 style)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::LanguageType, ::System::String*&, ::System::Boolean, ::Enum_3_219B2CD5FA4A8100))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_TRYGETLANGUAGEFONTNAME_OFFSET))(this, fontName, lanType, resultFontName, forceChange, style);
		}

		::System::String* GetFontPath(::System::String* fontName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_GETFONTPATH_OFFSET))(this, fontName);
		}

		::System::Boolean ShouldUseLightFont(::MoleMole::LanguageType lanType, ::System::Int32 fontSize, ::System::Int32 fontMaxSize, ::System::Int32 overrideMobileSize, ::System::Int32 overridePCSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LanguageType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_SHOULDUSELIGHTFONT_OFFSET))(this, lanType, fontSize, fontMaxSize, overrideMobileSize, overridePCSize);
		}

		::MoleMole::Config::LanguageAligmentPref GetAligmentPref(::MoleMole::LanguageType lanType)
		{
			return ((::MoleMole::Config::LanguageAligmentPref(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_GETALIGMENTPREF_OFFSET))(this, lanType);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_AWAKE_OFFSET))(this);
		}

		::System::Void OnKFontAlphaAdjustByLuminanceChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_ONKFONTALPHAADJUSTBYLUMINANCECHANGED_OFFSET))(this);
		}

		::System::Void SetKFontAlphaAdjustByLuminance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_SETKFONTALPHAADJUSTBYLUMINANCE_OFFSET))(this);
		}

		::System::Void TryInitializeDictCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT_TRYINITIALIZEDICTCACHE_OFFSET))(this);
		}

		::System::Void _TryInitializeDictCache_g__TryAddLanguageFont_32_0(::System::String* fontNameWithExtension, ::MoleMole::LanguageType language, ::Enum_3_219B2CD5FA4A8100 style)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::LanguageType, ::Enum_3_219B2CD5FA4A8100))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT__TRYINITIALIZEDICTCACHE_G__TRYADDLANGUAGEFONT_32_0_OFFSET))(this, fontNameWithExtension, language, style);
		}

		::System::Void _TryInitializeDictCache_g__AddFont_32_1(::System::String* fontNameWithExtension, ::System::Int32 groupIndex, ::MoleMole::LanguageType language, ::Enum_3_219B2CD5FA4A8100 style)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::LanguageType, ::Enum_3_219B2CD5FA4A8100))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT__TRYINITIALIZEDICTCACHE_G__ADDFONT_32_1_OFFSET))(this, fontNameWithExtension, groupIndex, language, style);
		}

		static ::System::String* _TryInitializeDictCache_g__RemoveExtensionName_32_2(::System::String* nameWithExtension)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIFONT__TRYINITIALIZEDICTCACHE_G__REMOVEEXTENSIONNAME_32_2_OFFSET))(nameWithExtension);
		}
	};
}
