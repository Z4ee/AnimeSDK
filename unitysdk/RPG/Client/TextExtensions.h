#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeStringRef.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLORWITHORIGINALPHA_OFFSET UNITYSDK_OFFSET(0xA587C40)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_1_OFFSET UNITYSDK_OFFSET(0xA5884A0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xA587B30)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xA5878C0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_1_OFFSET UNITYSDK_OFFSET(0xA588040)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_OFFSET UNITYSDK_OFFSET(0xA587560)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_1_OFFSET UNITYSDK_OFFSET(0xA587220)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_2_OFFSET UNITYSDK_OFFSET(0xA587340)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_3_OFFSET UNITYSDK_OFFSET(0xA587450)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_4_OFFSET UNITYSDK_OFFSET(0xA587E20)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_5_OFFSET UNITYSDK_OFFSET(0xA587EA0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_6_OFFSET UNITYSDK_OFFSET(0xA587F70)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_7_OFFSET UNITYSDK_OFFSET(0xA588110)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_8_OFFSET UNITYSDK_OFFSET(0xA5881E0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_9_OFFSET UNITYSDK_OFFSET(0xA588340)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_OFFSET UNITYSDK_OFFSET(0xA5871A0)
#define RPG_CLIENT_TEXTEXTENSIONS_SETCUSTOMIZEDTEXT_OFFSET UNITYSDK_OFFSET(0xA587290)

namespace RPG::Client
{
	inline static constexpr unsigned int TextExtensions_TypeDefinitionIndex = 59651;

	class TextExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetText(::UnityEngine::UI::Text* text, ::System::String* str, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_OFFSET))(text, str, outputError);
		}

		static ::System::Void SafeSetText_1(::UnityEngine::UI::Text* text, ::UnityEngine::NativeStringRef str, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::UnityEngine::NativeStringRef, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_1_OFFSET))(text, str, outputError);
		}

		static ::System::Void SetCustomizedText(::UnityEngine::UI::Text* text, ::System::String* str, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SETCUSTOMIZEDTEXT_OFFSET))(text, str, outputError);
		}

		static ::System::Void SafeSetText_2(::UnityEngine::UI::Text* text, ::System::Int32 num, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_2_OFFSET))(text, num, outputError);
		}

		static ::System::Void SafeSetText_3(::UnityEngine::UI::Text* text, ::System::UInt32 num, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_3_OFFSET))(text, num, outputError);
		}

		static ::System::Void SafeSetTextID(::UnityEngine::UI::Text* text, ::RPG::Client::TextID id, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_OFFSET))(text, id, replaceParams);
		}

		static ::System::Void SafeSetTextIDWithCustomSelectPattern(::UnityEngine::UI::Text* text, ::RPG::Client::TextID id, ::System::Collections::Generic::List_1<::System::Boolean>* customSelect, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET))(text, id, customSelect, replaceParams);
		}

		static ::System::Void SafeSetTextColor(::UnityEngine::UI::Text* text, ::System::String* colorString, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_OFFSET))(text, colorString, outputError);
		}

		static ::System::Void SafeSetTextColorWithOriginAlpha(::UnityEngine::UI::Text* text, ::System::String* colorString, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLORWITHORIGINALPHA_OFFSET))(text, colorString, outputError);
		}

		static ::System::Void SafeSetText_4(::RPG::Client::LocalizedText* text, ::System::String* str, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_4_OFFSET))(text, str, outputError);
		}

		static ::System::Void SafeSetText_5(::RPG::Client::LocalizedText* text, ::System::Int32 num, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_5_OFFSET))(text, num, outputError);
		}

		static ::System::Void SafeSetText_6(::RPG::Client::LocalizedText* text, ::System::UInt32 num, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_6_OFFSET))(text, num, outputError);
		}

		static ::System::Void SafeSetTextID_1(::RPG::Client::LocalizedText* text, ::RPG::Client::TextID id, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_1_OFFSET))(text, id, replaceParams);
		}

		static ::System::Void SafeSetText_7(::RPG::Client::LocalizedTextSDF* text, ::System::String* str, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_7_OFFSET))(text, str, outputError);
		}

		static ::System::Void SafeSetText_8(::RPG::Client::LocalizedTextSDF* text, ::System::Int32 num, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_8_OFFSET))(text, num, outputError);
		}

		static ::System::Void SafeSetText_9(::RPG::Client::LocalizedTextSDF* text, ::System::UInt32 num, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_9_OFFSET))(text, num, outputError);
		}

		static ::System::Void SafeSetTextColor_1(::RPG::Client::LocalizedTextSDF* text, ::System::String* colorString, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_1_OFFSET))(text, colorString, outputError);
		}
	};
}
