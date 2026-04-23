#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1.h"
#include "unitysdk/RPG/Client/SDFTextType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_615;
class Class_1_AC6C63F15E9794D3;
namespace RPG::GameCore { class AllowedAudioLanguageRow; }
namespace RPG::GameCore { class AllowedTextLanguageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Font; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F36B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTLANGUAGECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F35B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTSWITCHNOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F37B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUIWORLDFONTCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F38B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6F1550)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETAUDIOLANGUAGETEXTIDBYAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F2770)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETMIHOYOLANGSTR_OFFSET UNITYSDK_OFFSET(0xA6F15B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETPLATFORMREGION_OFFSET UNITYSDK_OFFSET(0xA6F2730)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETRUBYNBSPRULEINCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F28F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xA6F2980)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTSPACING_OFFSET UNITYSDK_OFFSET(0xA6F3070)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFTEXTTYPE_OFFSET UNITYSDK_OFFSET(0xA6F3200)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETTEXTLANGUAGETEXTIDBYTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F2830)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURLANGUAGETYPE_OFFSET UNITYSDK_OFFSET(0xA6F3ED0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGETEXTID_OFFSET UNITYSDK_OFFSET(0xA6F59F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F5430)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTFONT_OFFSET UNITYSDK_OFFSET(0xA6F2430)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTLOGOIMGPATH_OFFSET UNITYSDK_OFFSET(0xA6F5AD0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGETEXTID_OFFSET UNITYSDK_OFFSET(0xA6F5910)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F1670)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0xA6F65E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0xA6F65D0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYHOLDALIGNSPACE_OFFSET UNITYSDK_OFFSET(0xA6F6630)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYSTRRATIO_OFFSET UNITYSDK_OFFSET(0xA6F6610)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_USECOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xA6F65F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTAUDIO_OFFSET UNITYSDK_OFFSET(0xA6F6520)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTTEXT_OFFSET UNITYSDK_OFFSET(0xA6F64C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA6F1430)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDAUDIOKEY_OFFSET UNITYSDK_OFFSET(0xA6F2320)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGECONDENSEDFONT_OFFSET UNITYSDK_OFFSET(0xA6F21C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEFONT_OFFSET UNITYSDK_OFFSET(0xA6F1820)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0xA6F22A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEPSFONT_OFFSET UNITYSDK_OFFSET(0xA6F2230)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISCJK_OFFSET UNITYSDK_OFFSET(0xA6F34B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_LOADDEFAULTTEXTCONFIG_OFFSET UNITYSDK_OFFSET(0xA6F5BC0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0xA6F5200)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REFRESHTOCOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xA6F23A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F3740)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTLANGUAGECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F3640)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTSWITCHNOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F3840)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUIWORLDFONTCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xA6F3940)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SAVEPREFS_OFFSET UNITYSDK_OFFSET(0xA6F17B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SETTEXTCONFIG_OFFSET UNITYSDK_OFFSET(0xA6F5C10)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SETUPHTTPLANGPARAM_OFFSET UNITYSDK_OFFSET(0xA6F3390)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F5680)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F4140)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYHOLDALIGNSPACE_OFFSET UNITYSDK_OFFSET(0xA6F6640)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYSTRRATIO_OFFSET UNITYSDK_OFFSET(0xA6F6620)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_USECOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xA6F6600)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA6F2580)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xA6F39B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xA6F3B50)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xA6F3D10)
#define RPG_CLIENT_LOCALIZATIONMANAGER__AUDIOLANGKEYTOAUDIOLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0xA6F6180)
#define RPG_CLIENT_LOCALIZATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6F6C10)
#define RPG_CLIENT_LOCALIZATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F6650)
#define RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F6070)
#define RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F5F60)
#define RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xA6F6C60)
#define RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xA6F6CC0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__LOADALLOWEDLANGUAGES_OFFSET UNITYSDK_OFFSET(0xA6F1950)
#define RPG_CLIENT_LOCALIZATIONMANAGER__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA6F6580)
#define RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F5490)
#define RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F3F50)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F5830)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA6F5350)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SETCULTURL_OFFSET UNITYSDK_OFFSET(0xA6F4360)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SYSTEMLANGUAGETOTEXTLANGKEY_OFFSET UNITYSDK_OFFSET(0xA6F6260)
#define RPG_CLIENT_LOCALIZATIONMANAGER__TEXTLANGKEYTOTEXTLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0xA6F16D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_TypeDefinitionIndex = 56576;

	class LocalizationManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH_SIMPLE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x236B0);
		}
		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x236B8);
		}
		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH_DEFAULT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x236C0);
		}
		static ::System::String** StaticGet_AREA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x236C8);
		}
		static ::System::Byte* StaticGet_TYPE_AUDIO()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x90D0);
		}
		static ::System::Byte* StaticGet_TYPE_TEXT()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x90D1);
		}
		static ::System::Boolean* StaticGet_ApplyTextExtraFunction()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x90D2);
		}
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageCondensedFontNames; // 0x10
		::System::String* _defaultText; // 0x18
		::System::String* _currentAudioLanguage; // 0x20
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_615*>* _UITextLanguageChange; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageFontNames; // 0x30
		::System::String* _defaultAudio; // 0x38
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_615*>* _UITextChangeFontFromCondenseToComplete; // 0x40
		::UnityEngine::Font* _tempFont; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageKeys; // 0x50
		::System::String* _currentTextLanguage; // 0x58
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_615*>* _UIWorldFontChange; // 0x60
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_615*>* _UITextSwitch; // 0x68
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedAudioKeys; // 0x70
		::Il2CppArray<::System::Int32>* _noLeadingChars; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguagePSFontNames; // 0x80
		::System::Boolean _UseCompleteFont_k__BackingField; // 0x88
		::System::Boolean _RubyHoldAlignSpace_k__BackingField; // 0x89
		::System::Int32 _ellipsis; // 0x8C
		::System::Single _RubyStrRatio_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::String* GetMiHoYoLangStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETMIHOYOLANGSTR_OFFSET))(this);
		}

		::System::Void SavePrefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SAVEPREFS_OFFSET))(this);
		}

		::System::Boolean IsAllowedLanguageFont(::System::String* font)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEFONT_OFFSET))(this, font);
		}

		::System::Boolean IsAllowedLanguageCondensedFont(::System::String* font)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGECONDENSEDFONT_OFFSET))(this, font);
		}

		::System::Boolean IsAllowedLanguagePSFont(::System::String* font)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEPSFONT_OFFSET))(this, font);
		}

		::System::Boolean IsAllowedLanguageKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEKEY_OFFSET))(this, key);
		}

		::System::Boolean IsAllowedAudioKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDAUDIOKEY_OFFSET))(this, key);
		}

		::System::Void RefreshToCompleteFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REFRESHTOCOMPLETEFONT_OFFSET))(this);
		}

		::System::String* GetPlatformRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETPLATFORMREGION_OFFSET))(this);
		}

		static ::RPG::Client::TextID GetAudioLanguageTextIDByAudioLanguage(::System::String* language)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETAUDIOLANGUAGETEXTIDBYAUDIOLANGUAGE_OFFSET))(language);
		}

		static ::RPG::Client::TextID GetTextLanguageTextIDByTextLanguage(::System::String* language)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETTEXTLANGUAGETEXTIDBYTEXTLANGUAGE_OFFSET))(language);
		}

		::System::Boolean GetRubyNBSPRuleInCurrentLanguage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETRUBYNBSPRULEINCURRENTLANGUAGE_OFFSET))(this);
		}

		::System::String* GetSDFFontAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTASSETPATH_OFFSET))(this);
		}

		::System::Single GetSDFFontSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTSPACING_OFFSET))(this);
		}

		::RPG::Client::SDFTextType GetSDFTextType()
		{
			return ((::RPG::Client::SDFTextType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFTEXTTYPE_OFFSET))(this);
		}

		::Class_1_AC6C63F15E9794D3* SetupHttpLangParam(::Class_1_AC6C63F15E9794D3* req)
		{
			return ((::Class_1_AC6C63F15E9794D3*(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SETUPHTTPLANGPARAM_OFFSET))(this, req);
		}

		static ::System::Boolean IsCJK(::System::String* language)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISCJK_OFFSET))(language);
		}

		::System::Void AddUITextLanguageChangeNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTLANGUAGECHANGENOTIFY_OFFSET))(this, text);
		}

		::System::Void RemoveUITextLanguageChangeNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTLANGUAGECHANGENOTIFY_OFFSET))(this, text);
		}

		::System::Void AddUITextChangeFontFromCondenseToCompleteNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET))(this, text);
		}

		::System::Void RemoveUITextChangeFontFromCondenseToCompleteNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET))(this, text);
		}

		::System::Void AddUITextSwitchNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTSWITCHNOTIFY_OFFSET))(this, text);
		}

		::System::Void RemoveUITextSwitchNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTSWITCHNOTIFY_OFFSET))(this, text);
		}

		::System::Void AddUIWorldFontChangeNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUIWORLDFONTCHANGENOTIFY_OFFSET))(this, text);
		}

		::System::Void RemoveUIWorldFontChangeNotify(::Class_0_16E4307DCC419505_615* text)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUIWORLDFONTCHANGENOTIFY_OFFSET))(this, text);
		}

		::System::Void UITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void UITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void UITextSwitch(::System::Boolean toTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTSWITCH_OFFSET))(this, toTextID);
		}

		::System::Void UIWorldFontChange(::System::Boolean toWorldFont)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UIWORLDFONTCHANGE_OFFSET))(this, toWorldFont);
		}

		::Enum_3_63CAB6C405C6C7B1 get_CurLanguageType()
		{
			return ((::Enum_3_63CAB6C405C6C7B1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURLANGUAGETYPE_OFFSET))(this);
		}

		::System::String* get_CurrentTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void set_CurrentTextLanguage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTTEXTLANGUAGE_OFFSET))(this, value);
		}

		::System::String* get_CurrentAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void set_CurrentAudioLanguage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTAUDIOLANGUAGE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_CurrentTextLanguageTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_CurrentAudioLanguageTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGETEXTID_OFFSET))(this);
		}

		::System::String* get_CurrentLogoImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTLOGOIMGPATH_OFFSET))(this);
		}

		::UnityEngine::Font* get_CurrentFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTFONT_OFFSET))(this);
		}

		::System::Void LoadDefaultTextConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_LOADDEFAULTTEXTCONFIG_OFFSET))(this);
		}

		::System::Void SetTextConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SETTEXTCONFIG_OFFSET))(this);
		}

		::System::Void OnLanguageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONLANGUAGECHANGED_OFFSET))(this);
		}

		::System::String* _PickDefaultTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::String* _PickDefaultAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTAUDIOLANGUAGE_OFFSET))(this);
		}

		::RPG::GameCore::AllowedTextLanguageRow* _TextLangKeyToTextLanguageRow(::System::String* tableLangKey)
		{
			return ((::RPG::GameCore::AllowedTextLanguageRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__TEXTLANGKEYTOTEXTLANGUAGEROW_OFFSET))(this, tableLangKey);
		}

		::RPG::GameCore::AllowedAudioLanguageRow* _AudioLangKeyToAudioLanguageRow(::System::String* tableLangKey)
		{
			return ((::RPG::GameCore::AllowedAudioLanguageRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__AUDIOLANGKEYTOAUDIOLANGUAGEROW_OFFSET))(this, tableLangKey);
		}

		::System::String* _SystemLanguageToTextLangKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SYSTEMLANGUAGETOTEXTLANGKEY_OFFSET))(this);
		}

		::System::Void _SaveLocalTextLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void _SaveLocalAudioLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void _LoadAllowedLanguages(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__LOADALLOWEDLANGUAGES_OFFSET))(this, force);
		}

		::System::String* _GetDefaultTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::String* _GetDefaultAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void _OnShowLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__ONSHOWLOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _SetCulturl(::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SETCULTURL_OFFSET))(this, language);
		}

		::Il2CppArray<::System::Int32>* get_NoLeadingChars()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_NOLEADINGCHARS_OFFSET))(this);
		}

		::System::Int32 get_Ellipsis()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_ELLIPSIS_OFFSET))(this);
		}

		::System::Boolean get_UseCompleteFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_USECOMPLETEFONT_OFFSET))(this);
		}

		::System::Void set_UseCompleteFont(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_USECOMPLETEFONT_OFFSET))(this, value);
		}

		::System::Single get_RubyStrRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYSTRRATIO_OFFSET))(this);
		}

		::System::Void set_RubyStrRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYSTRRATIO_OFFSET))(this, value);
		}

		::System::Boolean get_RubyHoldAlignSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYHOLDALIGNSPACE_OFFSET))(this);
		}

		::System::Void set_RubyHoldAlignSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYHOLDALIGNSPACE_OFFSET))(this, value);
		}

		::System::String* get__DefaultText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTTEXT_OFFSET))(this);
		}

		::System::String* get__DefaultAudio()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTAUDIO_OFFSET))(this);
		}

		::System::String* _Init_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_0_OFFSET))(this);
		}

		::System::String* _Init_b__1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_1_OFFSET))(this);
		}
	};
}
