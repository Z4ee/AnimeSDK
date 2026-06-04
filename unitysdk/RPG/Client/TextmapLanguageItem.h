#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_CLEARLISTEDSIZE_OFFSET UNITYSDK_OFFSET(0xCA2ABB0)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_LANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0xCA2AAE0)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA2AAF0)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_RAWSIZE_OFFSET UNITYSDK_OFFSET(0xCA2AC00)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xCA2ABA0)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_TEXTLANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0xCA2AAC0)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_SETSIZE_OFFSET UNITYSDK_OFFSET(0xCA27320)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM_SET_TEXTLANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0xCA2AAD0)
#define RPG_CLIENT_TEXTMAPLANGUAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCA27310)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapLanguageItem_TypeDefinitionIndex = 57259;

	class TextmapLanguageItem : public ::System::Object
	{
	public:
		::System::String* _TextLanguageKey_k__BackingField; // 0x10
		::System::String* SizeStr; // 0x18
		::System::Int64 DownloadSize; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_TextLanguageKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_TEXTLANGUAGEKEY_OFFSET))(this);
		}

		::System::Void set_TextLanguageKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_SET_TEXTLANGUAGEKEY_OFFSET))(this, a1);
		}

		::System::String* get_LanguageKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_LANGUAGEKEY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Size()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_SIZE_OFFSET))(this);
		}

		::System::Void SetSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_SETSIZE_OFFSET))(this, a1);
		}

		::System::Void ClearListedSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_CLEARLISTEDSIZE_OFFSET))(this);
		}

		::System::Int64 get_RawSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPLANGUAGEITEM_GET_RAWSIZE_OFFSET))(this);
		}
	};
}
