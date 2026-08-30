#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FontType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/UI/Text.h"

class Class_1_B38D05F57D395ACE;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Font; }

#define RPG_CLIENT_LOCALIZEDTEXT_APPLYTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x18620240)
#define RPG_CLIENT_LOCALIZEDTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1861E250)
#define RPG_CLIENT_LOCALIZEDTEXT_CHECKFONT_OFFSET UNITYSDK_OFFSET(0x1861F310)
#define RPG_CLIENT_LOCALIZEDTEXT_FORCEDUSEFONT_OFFSET UNITYSDK_OFFSET(0x18621AD0)
#define RPG_CLIENT_LOCALIZEDTEXT_GETDISPLAYLENGTH_OFFSET UNITYSDK_OFFSET(0x18621C20)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1861EC90)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_FORBIDNOLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x18620570)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_TEXTMAPID_OFFSET UNITYSDK_OFFSET(0x18622BE0)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1861FFE0)
#define RPG_CLIENT_LOCALIZEDTEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1861F580)
#define RPG_CLIENT_LOCALIZEDTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1861F530)
#define RPG_CLIENT_LOCALIZEDTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1861F4E0)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1861FEF0)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x1861FA80)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0x1861FF40)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0x1861FF90)
#define RPG_CLIENT_LOCALIZEDTEXT_REFRESHTEXTIDPARAMS_OFFSET UNITYSDK_OFFSET(0x18621710)
#define RPG_CLIENT_LOCALIZEDTEXT_RELEASECUSTOMFONT_OFFSET UNITYSDK_OFFSET(0x186221E0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMFONTBYAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x18621F40)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXTWITHTEXTID_OFFSET UNITYSDK_OFFSET(0x18621590)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x186207D0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x18621900)
#define RPG_CLIENT_LOCALIZEDTEXT_SETSIMPLETEXT_OFFSET UNITYSDK_OFFSET(0x186206D0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETSINGLELINEELLIPSIS_OFFSET UNITYSDK_OFFSET(0x18620670)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDBYTALKSENTENCE_OFFSET UNITYSDK_OFFSET(0x186222F0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDFORDEBUG_OFFSET UNITYSDK_OFFSET(0x186222A0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_1_OFFSET UNITYSDK_OFFSET(0x18621860)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0x186217D0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_1_OFFSET UNITYSDK_OFFSET(0x18621680)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_OFFSET UNITYSDK_OFFSET(0x18621600)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1861EBA0)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_FORBIDNOLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x186205C0)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18620030)
#define RPG_CLIENT_LOCALIZEDTEXT_START_OFFSET UNITYSDK_OFFSET(0x1861F4A0)
#define RPG_CLIENT_LOCALIZEDTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18622D30)
#define RPG_CLIENT_LOCALIZEDTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18622C30)
#define RPG_CLIENT_LOCALIZEDTEXT__GETACTUALPATH_OFFSET UNITYSDK_OFFSET(0x186227B0)
#define RPG_CLIENT_LOCALIZEDTEXT__GETTEXTMAP_OFFSET UNITYSDK_OFFSET(0x1861ECF0)
#define RPG_CLIENT_LOCALIZEDTEXT__ONMCVCHANGE_OFFSET UNITYSDK_OFFSET(0x18622340)
#define RPG_CLIENT_LOCALIZEDTEXT__ONRUBYLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x186229D0)
#define RPG_CLIENT_LOCALIZEDTEXT__ONTEXTJOINCHANGE_OFFSET UNITYSDK_OFFSET(0x186223E0)
#define RPG_CLIENT_LOCALIZEDTEXT__ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x1861FAD0)
#define RPG_CLIENT_LOCALIZEDTEXT__PROCESSWHITEBG_OFFSET UNITYSDK_OFFSET(0x18620DD0)
#define RPG_CLIENT_LOCALIZEDTEXT__RECOMPILETEXT_OFFSET UNITYSDK_OFFSET(0x1861F420)
#define RPG_CLIENT_LOCALIZEDTEXT__REFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x18622B40)
#define RPG_CLIENT_LOCALIZEDTEXT__REGISTERPATTERNCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x18622510)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x186214D0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x18622A30)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1861F9C0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x186228C0)
#define RPG_CLIENT_LOCALIZEDTEXT__UNREGISTERPATTERNCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1861F710)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedText_TypeDefinitionIndex = 72489;

	class LocalizedText : public ::UnityEngine::UI::Text
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_COLOR()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x63AE0);
		}
		static ::System::String** StaticGet_EditorPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x63AE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__ReColor()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x63AF0);
		}
		::System::Boolean mForbidNoLeadingChar; // 0x190
		::UnityEngine::Font* _CustomFont; // 0x198
		::System::String* TextmapID; // 0x1A0
		::RPG::Client::TextID textID; // 0x1A8
		::Il2CppArray<::System::Object*>* replaceParams; // 0x1B8
		::System::Collections::Generic::List_1<::System::Boolean>* customSelect; // 0x1C0
		::System::Boolean _InUse; // 0x1C8
		::System::Boolean _InMCVPattern; // 0x1C9
		::System::Boolean _RegisteredDirtyLayoutCallback; // 0x1CA
		::System::Boolean _RegisteredDuringRenderUpdateCallback; // 0x1CB
		::System::String* _CustomizedTextBeforeCompileRuby; // 0x1D0
		::Class_1_B38D05F57D395ACE* _TextCompileMetadata; // 0x1D8
		::System::Single _DefaultDisplayHeight; // 0x1E0
		::System::Boolean _IsResized; // 0x1E4
		::System::Boolean RefreshByLanguageChange; // 0x1E5
		::System::Boolean IsWhiteBG; // 0x1E6
		::System::Boolean EnableRuby; // 0x1E7
		::System::Boolean EnableTextIcons; // 0x1E8
		::System::Boolean IsSingleLineEllipsis; // 0x1E9
		::RPG::Client::FontType ForcedFont; // 0x1EC
		::System::Boolean IsDynamicTextID; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_ForbidNoLeadingChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_FORBIDNOLEADINGCHAR_OFFSET))(this);
		}

		::System::Void set_ForbidNoLeadingChar(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_FORBIDNOLEADINGCHAR_OFFSET))(this, a1);
		}

		::System::Void ApplyTextGenerator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_APPLYTEXTGENERATOR_OFFSET))(this);
		}

		::System::Void SetSingleLineEllipsis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETSINGLELINEELLIPSIS_OFFSET))(this, a1);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_FONT_OFFSET))(this, a1);
		}

		::System::Void SetSimpleText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETSIMPLETEXT_OFFSET))(this, a1);
		}

		::System::Void SetCustomizedText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXT_OFFSET))(this, a1);
		}

		::System::Void SetCustomizedTextWithTextID(::System::String* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXTWITHTEXTID_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_OFFSET))(this, a1);
		}

		::System::Void SetTextID_1(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_1_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshTextIDParams(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_REFRESHTEXTIDPARAMS_OFFSET))(this, a1);
		}

		::System::Void SetTextIDWithCustomSelectPattern(::RPG::Client::TextID a1, ::System::Collections::Generic::List_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextIDWithCustomSelectPattern_1(::RPG::Client::TextID a1, ::System::Collections::Generic::List_1<::System::Boolean>* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckFont(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_CHECKFONT_OFFSET))(this, a1);
		}

		::System::Void SetHighLight(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETHIGHLIGHT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ForcedUseFont(::RPG::Client::FontType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FontType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_FORCEDUSEFONT_OFFSET))(this, a1);
		}

		::System::Int32 GetDisplayLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GETDISPLAYLENGTH_OFFSET))(this);
		}

		::System::Void SetCustomFontByAudioLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMFONTBYAUDIOLANGUAGE_OFFSET))(this, a1);
		}

		::System::Void ReleaseCustomFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_RELEASECUSTOMFONT_OFFSET))(this);
		}

		::System::Void SetTextIDForDebug(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDFORDEBUG_OFFSET))(this, a1);
		}

		::System::Void SetTextIDByTalkSentence(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDBYTALKSENTENCE_OFFSET))(this, a1);
		}

		::System::Void _OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::String* _ProcessWhiteBG(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__PROCESSWHITEBG_OFFSET))(this, a1);
		}

		::System::Void _OnMCVChange(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONMCVCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTextJoinChange(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONTEXTJOINCHANGE_OFFSET))(this, a1);
		}

		::System::Void _RecompileText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__RECOMPILETEXT_OFFSET))(this);
		}

		::System::Void _RegisterPatternChangeCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__REGISTERPATTERNCHANGECALLBACK_OFFSET))(this);
		}

		::System::Void _UnRegisterPatternChangeCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__UNREGISTERPATTERNCHANGECALLBACK_OFFSET))(this);
		}

		::System::String* _GetActualPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__GETACTUALPATH_OFFSET))(this);
		}

		::System::Void _GetTextmap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__GETTEXTMAP_OFFSET))(this);
		}

		::System::Void _TryRegisterDirtyLayoutCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERDIRTYLAYOUTCALLBACK_OFFSET))(this);
		}

		::System::Void _TryUnRegisterDirtyLayoutCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERDIRTYLAYOUTCALLBACK_OFFSET))(this);
		}

		::System::Void _OnRubyLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONRUBYLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void _TryRegisterRefreshRubyDuringRenderUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET))(this);
		}

		::System::Void _TryUnregisterRefreshRubyDuringRenderUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET))(this);
		}

		::System::Void _RefreshRubyDuringRenderUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__REFRESHRUBYDURINGRENDERUPDATE_OFFSET))(this);
		}

		::System::String* get_TextMapId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_TEXTMAPID_OFFSET))(this);
		}
	};
}
