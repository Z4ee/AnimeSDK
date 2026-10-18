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

#define RPG_CLIENT_TEXTEXTENSIONS_SAFEREFRESHTEXTIDPARAMS_OFFSET UNITYSDK_OFFSET(0xE20BA60)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLORWITHORIGINALPHA_OFFSET UNITYSDK_OFFSET(0xE20B400)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_1_OFFSET UNITYSDK_OFFSET(0xE20BD30)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xE20B290)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xE20B070)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_1_OFFSET UNITYSDK_OFFSET(0xE20B990)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_OFFSET UNITYSDK_OFFSET(0xE20AF30)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_10_OFFSET UNITYSDK_OFFSET(0xE20BC30)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_1_OFFSET UNITYSDK_OFFSET(0xE20ABA0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_2_OFFSET UNITYSDK_OFFSET(0xE20AD20)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_3_OFFSET UNITYSDK_OFFSET(0xE20ADD0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_4_OFFSET UNITYSDK_OFFSET(0xE20AE80)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_5_OFFSET UNITYSDK_OFFSET(0xE20B650)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_6_OFFSET UNITYSDK_OFFSET(0xE20B730)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_7_OFFSET UNITYSDK_OFFSET(0xE20B860)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_8_OFFSET UNITYSDK_OFFSET(0xE20BAC0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_9_OFFSET UNITYSDK_OFFSET(0xE20BB30)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_OFFSET UNITYSDK_OFFSET(0xE20AAC0)
#define RPG_CLIENT_TEXTEXTENSIONS_SETCUSTOMIZEDTEXT_OFFSET UNITYSDK_OFFSET(0xE20AC10)

namespace RPG::Client
{
	inline static constexpr unsigned int TextExtensions_TypeDefinitionIndex = 72784;

	class TextExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetText(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_1(::UnityEngine::UI::Text* a1, ::UnityEngine::NativeStringRef a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::UnityEngine::NativeStringRef, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetCustomizedText(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SETCUSTOMIZEDTEXT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_2(::UnityEngine::UI::Text* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_3(::UnityEngine::UI::Text* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_4(::UnityEngine::UI::Text* a1, ::System::Int64 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetTextID(::UnityEngine::UI::Text* a1, ::RPG::Client::TextID a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetTextIDWithCustomSelectPattern(::UnityEngine::UI::Text* a1, ::RPG::Client::TextID a2, ::System::Collections::Generic::List_1<::System::Boolean>* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SafeSetTextColor(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetTextColorWithOriginAlpha(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLORWITHORIGINALPHA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_5(::RPG::Client::LocalizedText* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_6(::RPG::Client::LocalizedText* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_7(::RPG::Client::LocalizedText* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetTextID_1(::RPG::Client::LocalizedText* a1, ::RPG::Client::TextID a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeRefreshTextIDParams(::RPG::Client::LocalizedText* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedText*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFEREFRESHTEXTIDPARAMS_OFFSET))(a1, a2);
		}

		static ::System::Void SafeSetText_8(::RPG::Client::LocalizedTextSDF* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_9(::RPG::Client::LocalizedTextSDF* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetText_10(::RPG::Client::LocalizedTextSDF* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_10_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetTextColor_1(::RPG::Client::LocalizedTextSDF* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_1_OFFSET))(a1, a2, a3);
		}
	};
}
