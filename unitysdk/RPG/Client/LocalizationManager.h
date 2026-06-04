#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1.h"
#include "unitysdk/RPG/Client/SDFTextType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_638;
class Class_1_92B1BD6FC8375724;
namespace RPG::GameCore { class AllowedAudioLanguageRow; }
namespace RPG::GameCore { class AllowedTextLanguageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Font; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET UNITYSDK_OFFSET(0xBE547E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTLANGUAGECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xBE546E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTSWITCHNOTIFY_OFFSET UNITYSDK_OFFSET(0xBE548E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUIWORLDFONTCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xBE549E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE526A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETAUDIOLANGUAGETEXTIDBYAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE53860)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETMIHOYOLANGSTR_OFFSET UNITYSDK_OFFSET(0xBE52700)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETPLATFORMREGION_OFFSET UNITYSDK_OFFSET(0xBE53820)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETRUBYNBSPRULEINCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE539E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xBE53A60)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTSPACING_OFFSET UNITYSDK_OFFSET(0xBE541A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFTEXTTYPE_OFFSET UNITYSDK_OFFSET(0xBE54330)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETTEXTLANGUAGETEXTIDBYTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE53920)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURLANGUAGETYPE_OFFSET UNITYSDK_OFFSET(0xBE54F70)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGETEXTID_OFFSET UNITYSDK_OFFSET(0xBE56A90)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE564D0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTFONT_OFFSET UNITYSDK_OFFSET(0xBE53530)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTLOGOIMGPATH_OFFSET UNITYSDK_OFFSET(0xBE56B70)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGETEXTID_OFFSET UNITYSDK_OFFSET(0xBE569B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE527B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0xBE57710)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0xBE57700)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYHOLDALIGNSPACE_OFFSET UNITYSDK_OFFSET(0xBE57760)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYSTRRATIO_OFFSET UNITYSDK_OFFSET(0xBE57740)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_USECOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xBE57720)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTAUDIO_OFFSET UNITYSDK_OFFSET(0xBE57650)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTTEXT_OFFSET UNITYSDK_OFFSET(0xBE57550)
#define RPG_CLIENT_LOCALIZATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xBE524C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDAUDIOKEY_OFFSET UNITYSDK_OFFSET(0xBE53420)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGECONDENSEDFONT_OFFSET UNITYSDK_OFFSET(0xBE532C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEFONT_OFFSET UNITYSDK_OFFSET(0xBE52960)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0xBE533A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEPSFONT_OFFSET UNITYSDK_OFFSET(0xBE53330)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISCJK_OFFSET UNITYSDK_OFFSET(0xBE545E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_LOADDEFAULTTEXTCONFIG_OFFSET UNITYSDK_OFFSET(0xBE56C60)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0xBE562A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REFRESHTOCOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xBE534A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET UNITYSDK_OFFSET(0xBE54870)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTLANGUAGECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xBE54770)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTSWITCHNOTIFY_OFFSET UNITYSDK_OFFSET(0xBE54970)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUIWORLDFONTCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xBE54A70)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SAVEPREFS_OFFSET UNITYSDK_OFFSET(0xBE528F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SETTEXTCONFIG_OFFSET UNITYSDK_OFFSET(0xBE56CB0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SETUPHTTPLANGPARAM_OFFSET UNITYSDK_OFFSET(0xBE544C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE56720)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE551E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYHOLDALIGNSPACE_OFFSET UNITYSDK_OFFSET(0xBE57770)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYSTRRATIO_OFFSET UNITYSDK_OFFSET(0xBE57750)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_USECOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xBE57730)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xBE53690)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xBE54AE0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xBE54C50)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xBE54DE0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__AUDIOLANGKEYTOAUDIOLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0xBE57270)
#define RPG_CLIENT_LOCALIZATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE57D40)
#define RPG_CLIENT_LOCALIZATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE57780)
#define RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE57160)
#define RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE57050)
#define RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xBE57D90)
#define RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xBE57DF0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__LOADALLOWEDLANGUAGES_OFFSET UNITYSDK_OFFSET(0xBE52A90)
#define RPG_CLIENT_LOCALIZATIONMANAGER__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xBE576B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE56530)
#define RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE54FF0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE568D0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xBE563F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SETCULTURL_OFFSET UNITYSDK_OFFSET(0xBE55400)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SYSTEMLANGUAGETOTEXTLANGKEY_OFFSET UNITYSDK_OFFSET(0xBE57350)
#define RPG_CLIENT_LOCALIZATIONMANAGER__TEXTLANGKEYTOTEXTLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0xBE52810)
#define RPG_CLIENT_LOCALIZATIONMANAGER__UNLOADTEXTMAPBYASSETNAME_OFFSET UNITYSDK_OFFSET(0xBE575B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_TypeDefinitionIndex = 57353;

	class LocalizationManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH_DEFAULT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x43AA0);
		}
		static ::System::String** StaticGet_AREA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x43AA8);
		}
		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH_SIMPLE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x43AB0);
		}
		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0x43AB8);
		}
		static ::System::Boolean* StaticGet_ApplyTextExtraFunction()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0xC010);
		}
		static ::System::Byte* StaticGet_TYPE_AUDIO()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0xC011);
		}
		static ::System::Byte* StaticGet_TYPE_TEXT()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LocalizationManager_TypeDefinitionIndex)->GetStaticField(0xC012);
		}
		::System::String* _defaultAudio; // 0x10
		::UnityEngine::Font* _tempFont; // 0x18
		::Il2CppArray<::System::Int32>* _noLeadingChars; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageKeys; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageCondensedFontNames; // 0x30
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_638*>* _UITextSwitch; // 0x38
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedAudioKeys; // 0x40
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_638*>* _UITextChangeFontFromCondenseToComplete; // 0x48
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_638*>* _UITextLanguageChange; // 0x50
		::System::String* _currentAudioLanguage; // 0x58
		::System::String* _defaultText; // 0x60
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_638*>* _UIWorldFontChange; // 0x68
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageFontNames; // 0x70
		::System::String* _currentTextLanguage; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguagePSFontNames; // 0x80
		::System::Single _RubyStrRatio_k__BackingField; // 0x88
		::System::Boolean _RubyHoldAlignSpace_k__BackingField; // 0x8C
		::System::Boolean _UseCompleteFont_k__BackingField; // 0x8D
		::System::Int32 _ellipsis; // 0x90

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

		::System::Boolean IsAllowedLanguageFont(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEFONT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedLanguageCondensedFont(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGECONDENSEDFONT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedLanguagePSFont(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEPSFONT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedLanguageKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEKEY_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedAudioKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDAUDIOKEY_OFFSET))(this, a1);
		}

		::System::Void RefreshToCompleteFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REFRESHTOCOMPLETEFONT_OFFSET))(this);
		}

		::System::String* GetPlatformRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETPLATFORMREGION_OFFSET))(this);
		}

		static ::RPG::Client::TextID GetAudioLanguageTextIDByAudioLanguage(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETAUDIOLANGUAGETEXTIDBYAUDIOLANGUAGE_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetTextLanguageTextIDByTextLanguage(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETTEXTLANGUAGETEXTIDBYTEXTLANGUAGE_OFFSET))(a1);
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

		::Class_1_92B1BD6FC8375724* SetupHttpLangParam(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::Class_1_92B1BD6FC8375724*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SETUPHTTPLANGPARAM_OFFSET))(this, a1);
		}

		static ::System::Boolean IsCJK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISCJK_OFFSET))(a1);
		}

		::System::Void AddUITextLanguageChangeNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTLANGUAGECHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUITextLanguageChangeNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTLANGUAGECHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddUITextChangeFontFromCondenseToCompleteNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUITextChangeFontFromCondenseToCompleteNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddUITextSwitchNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTSWITCHNOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUITextSwitchNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTSWITCHNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddUIWorldFontChangeNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUIWORLDFONTCHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUIWorldFontChangeNotify(::Class_0_16E4307DCC419505_638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUIWORLDFONTCHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void UITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void UITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void UITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void UIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::Enum_3_63CAB6C405C6C7B1 get_CurLanguageType()
		{
			return ((::Enum_3_63CAB6C405C6C7B1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURLANGUAGETYPE_OFFSET))(this);
		}

		::System::String* get_CurrentTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void set_CurrentTextLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTTEXTLANGUAGE_OFFSET))(this, a1);
		}

		::System::String* get_CurrentAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void set_CurrentAudioLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTAUDIOLANGUAGE_OFFSET))(this, a1);
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

		::RPG::GameCore::AllowedTextLanguageRow* _TextLangKeyToTextLanguageRow(::System::String* a1)
		{
			return ((::RPG::GameCore::AllowedTextLanguageRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__TEXTLANGKEYTOTEXTLANGUAGEROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::AllowedAudioLanguageRow* _AudioLangKeyToAudioLanguageRow(::System::String* a1)
		{
			return ((::RPG::GameCore::AllowedAudioLanguageRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__AUDIOLANGKEYTOAUDIOLANGUAGEROW_OFFSET))(this, a1);
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

		::System::Void _LoadAllowedLanguages(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__LOADALLOWEDLANGUAGES_OFFSET))(this, a1);
		}

		::System::String* _GetDefaultTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void _UnloadTextmapByAssetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__UNLOADTEXTMAPBYASSETNAME_OFFSET))(this, a1);
		}

		::System::String* _GetDefaultAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void _OnShowLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__ONSHOWLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _SetCulturl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SETCULTURL_OFFSET))(this, a1);
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

		::System::Void set_UseCompleteFont(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_USECOMPLETEFONT_OFFSET))(this, a1);
		}

		::System::Single get_RubyStrRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYSTRRATIO_OFFSET))(this);
		}

		::System::Void set_RubyStrRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYSTRRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_RubyHoldAlignSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYHOLDALIGNSPACE_OFFSET))(this);
		}

		::System::Void set_RubyHoldAlignSpace(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYHOLDALIGNSPACE_OFFSET))(this, a1);
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
