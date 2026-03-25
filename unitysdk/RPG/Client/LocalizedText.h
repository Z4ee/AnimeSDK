#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FontType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/UI/Text.h"

class Class_1_1A781135C1474CFC;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Font; }

#define RPG_CLIENT_LOCALIZEDTEXT_APPLYTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x9A4EC80)
#define RPG_CLIENT_LOCALIZEDTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A4CF80)
#define RPG_CLIENT_LOCALIZEDTEXT_CHECKFONT_OFFSET UNITYSDK_OFFSET(0x9A4DF60)
#define RPG_CLIENT_LOCALIZEDTEXT_FORCEDUSEFONT_OFFSET UNITYSDK_OFFSET(0x9A502C0)
#define RPG_CLIENT_LOCALIZEDTEXT_GETDISPLAYLENGTH_OFFSET UNITYSDK_OFFSET(0x9A50410)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0x9A4D8B0)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_FORBIDNOLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x9A4EFB0)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_TEXTMAPID_OFFSET UNITYSDK_OFFSET(0x9A51250)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9A4EB20)
#define RPG_CLIENT_LOCALIZEDTEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A4E1D0)
#define RPG_CLIENT_LOCALIZEDTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9A4E180)
#define RPG_CLIENT_LOCALIZEDTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9A4E130)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9A4EA30)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x9A4E670)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0x9A4EA80)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0x9A4EAD0)
#define RPG_CLIENT_LOCALIZEDTEXT_RELEASECUSTOMFONT_OFFSET UNITYSDK_OFFSET(0x9A50940)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMFONTBYAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9A506A0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXTWITHTEXTID_OFFSET UNITYSDK_OFFSET(0x9A4FE50)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x9A4F1B0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x9A50100)
#define RPG_CLIENT_LOCALIZEDTEXT_SETSIMPLETEXT_OFFSET UNITYSDK_OFFSET(0x9A4F110)
#define RPG_CLIENT_LOCALIZEDTEXT_SETSINGLELINEELLIPSIS_OFFSET UNITYSDK_OFFSET(0x9A4F070)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDBYTALKSENTENCE_OFFSET UNITYSDK_OFFSET(0x9A50A50)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDFORDEBUG_OFFSET UNITYSDK_OFFSET(0x9A50A00)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_1_OFFSET UNITYSDK_OFFSET(0x9A50060)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0x9A4FFD0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_1_OFFSET UNITYSDK_OFFSET(0x9A4FF40)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_OFFSET UNITYSDK_OFFSET(0x9A4FEC0)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0x9A4D780)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_FORBIDNOLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x9A4EFC0)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9A4EB30)
#define RPG_CLIENT_LOCALIZEDTEXT_START_OFFSET UNITYSDK_OFFSET(0x9A4E0F0)
#define RPG_CLIENT_LOCALIZEDTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A51360)
#define RPG_CLIENT_LOCALIZEDTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A51260)
#define RPG_CLIENT_LOCALIZEDTEXT__GETACTUALPATH_OFFSET UNITYSDK_OFFSET(0x9A50E60)
#define RPG_CLIENT_LOCALIZEDTEXT__GETTEXTMAP_OFFSET UNITYSDK_OFFSET(0x9A4D910)
#define RPG_CLIENT_LOCALIZEDTEXT__ONMCVCHANGE_OFFSET UNITYSDK_OFFSET(0x9A50AA0)
#define RPG_CLIENT_LOCALIZEDTEXT__ONRUBYLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x9A51060)
#define RPG_CLIENT_LOCALIZEDTEXT__ONTEXTJOINCHANGE_OFFSET UNITYSDK_OFFSET(0x9A50B40)
#define RPG_CLIENT_LOCALIZEDTEXT__ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x9A4E6C0)
#define RPG_CLIENT_LOCALIZEDTEXT__PROCESSWHITEBG_OFFSET UNITYSDK_OFFSET(0x9A4F7F0)
#define RPG_CLIENT_LOCALIZEDTEXT__RECOMPILETEXT_OFFSET UNITYSDK_OFFSET(0x9A4E070)
#define RPG_CLIENT_LOCALIZEDTEXT__REFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x9A511B0)
#define RPG_CLIENT_LOCALIZEDTEXT__REGISTERPATTERNCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x9A50BF0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A4FDB0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x9A510C0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A4E5C0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x9A50F70)
#define RPG_CLIENT_LOCALIZEDTEXT__UNREGISTERPATTERNCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x9A4E360)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A513D0)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_GET_FONT_OFFSET UNITYSDK_OFFSET(0x9A514D0)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A51410)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9A51400)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9A513F0)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_FONT_OFFSET UNITYSDK_OFFSET(0x9A514F0)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9A51420)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0x9A513E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedText_TypeDefinitionIndex = 59462;

	class LocalizedText : public ::UnityEngine::UI::Text
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_COLOR()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x26AD0);
		}
		static ::System::String** StaticGet_EditorPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x26AD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__ReColor()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x26AE0);
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
		::Class_1_1A781135C1474CFC* _TextCompileMetadata; // 0x1D8
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

		::System::Void OnUITextSwitch(::System::Boolean toTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTSWITCH_OFFSET))(this, toTextID);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean toWorldFont)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUIWORLDFONTCHANGE_OFFSET))(this, toWorldFont);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Boolean get_ForbidNoLeadingChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_FORBIDNOLEADINGCHAR_OFFSET))(this);
		}

		::System::Void set_ForbidNoLeadingChar(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_FORBIDNOLEADINGCHAR_OFFSET))(this, value);
		}

		::System::Void ApplyTextGenerator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_APPLYTEXTGENERATOR_OFFSET))(this);
		}

		::System::Void SetSingleLineEllipsis(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETSINGLELINEELLIPSIS_OFFSET))(this, open);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_FONT_OFFSET))(this, value);
		}

		::System::Void SetSimpleText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETSIMPLETEXT_OFFSET))(this, text);
		}

		::System::Void SetCustomizedText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXT_OFFSET))(this, text);
		}

		::System::Void SetCustomizedTextWithTextID(::System::String* text, ::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXTWITHTEXTID_OFFSET))(this, text, textID);
		}

		::System::Void SetTextID(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_OFFSET))(this, textID);
		}

		::System::Void SetTextID_1(::RPG::Client::TextID textID, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_1_OFFSET))(this, textID, replaceParams);
		}

		::System::Void SetTextIDWithCustomSelectPattern(::RPG::Client::TextID textID, ::System::Collections::Generic::List_1<::System::Boolean>* customSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET))(this, textID, customSelect);
		}

		::System::Void SetTextIDWithCustomSelectPattern_1(::RPG::Client::TextID textID, ::System::Collections::Generic::List_1<::System::Boolean>* customSelect, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_1_OFFSET))(this, textID, customSelect, replaceParams);
		}

		::System::Boolean CheckFont(::System::Boolean checkAll)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_CHECKFONT_OFFSET))(this, checkAll);
		}

		::System::Void SetHighLight(::System::Int32 start, ::System::Int32 end, ::System::String* colorStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETHIGHLIGHT_OFFSET))(this, start, end, colorStr);
		}

		::System::Void ForcedUseFont(::RPG::Client::FontType fontType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FontType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_FORCEDUSEFONT_OFFSET))(this, fontType);
		}

		::System::Int32 GetDisplayLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GETDISPLAYLENGTH_OFFSET))(this);
		}

		::System::Void SetCustomFontByAudioLanguage(::System::String* audioLanguage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMFONTBYAUDIOLANGUAGE_OFFSET))(this, audioLanguage);
		}

		::System::Void ReleaseCustomFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_RELEASECUSTOMFONT_OFFSET))(this);
		}

		::System::Void SetTextIDForDebug(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDFORDEBUG_OFFSET))(this, textID);
		}

		::System::Void SetTextIDByTalkSentence(::System::UInt32 talkSentenceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDBYTALKSENTENCE_OFFSET))(this, talkSentenceID);
		}

		::System::Void _OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::String* _ProcessWhiteBG(::System::String* text)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__PROCESSWHITEBG_OFFSET))(this, text);
		}

		::System::Void _OnMCVChange(::System::UInt32 mainMissionID, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONMCVCHANGE_OFFSET))(this, mainMissionID, name);
		}

		::System::Void _OnTextJoinChange(::System::UInt32 textJoinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONTEXTJOINCHANGE_OFFSET))(this, textJoinID);
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

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_text(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET))(this, P0);
		}

		::UnityEngine::Font* __iFixBaseProxy_get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_GET_FONT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_font(::UnityEngine::Font* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_FONT_OFFSET))(this, P0);
		}
	};
}
