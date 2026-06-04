#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AUDIOLANGUAGEITEM_GET_AUDIOID_OFFSET UNITYSDK_OFFSET(0xB342A20)
#define RPG_CLIENT_AUDIOLANGUAGEITEM_GET_LANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0xB342A40)
#define RPG_CLIENT_AUDIOLANGUAGEITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB342A50)
#define RPG_CLIENT_AUDIOLANGUAGEITEM_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xB342B00)
#define RPG_CLIENT_AUDIOLANGUAGEITEM_SETSIZE_OFFSET UNITYSDK_OFFSET(0xB342B10)
#define RPG_CLIENT_AUDIOLANGUAGEITEM_SET_AUDIOID_OFFSET UNITYSDK_OFFSET(0xB342A30)
#define RPG_CLIENT_AUDIOLANGUAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB342A10)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioLanguageItem_TypeDefinitionIndex = 55853;

	class AudioLanguageItem : public ::System::Object
	{
	public:
		::System::String* _AudioID_k__BackingField; // 0x10
		::System::String* SizeStr; // 0x18
		::System::Int64 DownloadSize; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOLANGUAGEITEM__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_AudioID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOLANGUAGEITEM_GET_AUDIOID_OFFSET))(this);
		}

		::System::Void set_AudioID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOLANGUAGEITEM_SET_AUDIOID_OFFSET))(this, a1);
		}

		::System::String* get_languageKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOLANGUAGEITEM_GET_LANGUAGEKEY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOLANGUAGEITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Size()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOLANGUAGEITEM_GET_SIZE_OFFSET))(this);
		}

		::System::Void SetSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOLANGUAGEITEM_SETSIZE_OFFSET))(this, a1);
		}
	};
}
