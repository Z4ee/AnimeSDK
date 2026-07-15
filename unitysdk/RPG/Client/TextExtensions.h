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

#define RPG_CLIENT_TEXTEXTENSIONS_SAFEREFRESHTEXTIDPARAMS_OFFSET UNITYSDK_OFFSET(0x194790F0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLORWITHORIGINALPHA_OFFSET UNITYSDK_OFFSET(0x19478A90)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x194793C0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x19478920)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0x19478700)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_1_OFFSET UNITYSDK_OFFSET(0x19479020)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXTID_OFFSET UNITYSDK_OFFSET(0x194784E0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_10_OFFSET UNITYSDK_OFFSET(0x194792C0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_1_OFFSET UNITYSDK_OFFSET(0x19478150)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_2_OFFSET UNITYSDK_OFFSET(0x194782D0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_3_OFFSET UNITYSDK_OFFSET(0x19478380)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_4_OFFSET UNITYSDK_OFFSET(0x19478430)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_5_OFFSET UNITYSDK_OFFSET(0x19478CE0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_6_OFFSET UNITYSDK_OFFSET(0x19478DC0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_7_OFFSET UNITYSDK_OFFSET(0x19478EF0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_8_OFFSET UNITYSDK_OFFSET(0x19479150)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_9_OFFSET UNITYSDK_OFFSET(0x194791C0)
#define RPG_CLIENT_TEXTEXTENSIONS_SAFESETTEXT_OFFSET UNITYSDK_OFFSET(0x19478070)
#define RPG_CLIENT_TEXTEXTENSIONS_SETCUSTOMIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x194781C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextExtensions_TypeDefinitionIndex = 69475;

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
