#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/TMPro/TextMeshProUGUI.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_LOCALIZEDTEXTSDF_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A51500)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_CALCULATETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0x9A51D80)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_CHECKMISSINGTEXT_OFFSET UNITYSDK_OFFSET(0x9A51D40)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_GET_REPLACEPARAMS_OFFSET UNITYSDK_OFFSET(0x9A51B80)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x9A51B70)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_LOADASSET_OFFSET UNITYSDK_OFFSET(0x9A51B10)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A51860)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9A51A30)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x9A51940)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0x9A51A70)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0x9A51AC0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXTID_OFFSET UNITYSDK_OFFSET(0x9A51CC0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXT_OFFSET UNITYSDK_OFFSET(0x9A51B90)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_SETTEXTID_OFFSET UNITYSDK_OFFSET(0x9A51C50)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__CTOR_OFFSET UNITYSDK_OFFSET(0x9A51E00)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__GETTEXTMAP_OFFSET UNITYSDK_OFFSET(0x9A51710)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__LOADFONTASSET_OFFSET UNITYSDK_OFFSET(0x9A516D0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x9A519C0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A51ED0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A51EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedTextSDF_TypeDefinitionIndex = 59464;

	class LocalizedTextSDF : public ::TMPro::TextMeshProUGUI
	{
	public:
		::System::String* TextmapID; // 0x7B0
		::System::Boolean AutoChangeFontAssetByLanguage; // 0x7B8
		::RPG::Client::TextID textID; // 0x7C0
		::Il2CppArray<::System::Object*>* replaceParams; // 0x7D0
		::System::Boolean _InUse; // 0x7D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean toTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTSWITCH_OFFSET))(this, toTextID);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean toWorldFont)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUIWORLDFONTCHANGE_OFFSET))(this, toWorldFont);
		}

		::System::Void LoadAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_LOADASSET_OFFSET))(this);
		}

		::System::Void _LoadFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__LOADFONTASSET_OFFSET))(this);
		}

		::System::Void _OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void _GetTextmap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__GETTEXTMAP_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_GET_TEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ReplaceParams()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_GET_REPLACEPARAMS_OFFSET))(this);
		}

		::System::Void SafeSetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTextID(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_SETTEXTID_OFFSET))(this, textID);
		}

		::System::Void SafeSetTextID(::RPG::Client::TextID textID, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXTID_OFFSET))(this, textID, replaceParams);
		}

		::System::Void CheckMissingText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_CHECKMISSINGTEXT_OFFSET))(this);
		}

		::System::Single CalculateTextWidth(::System::String* sourceText)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_CALCULATETEXTWIDTH_OFFSET))(this, sourceText);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
