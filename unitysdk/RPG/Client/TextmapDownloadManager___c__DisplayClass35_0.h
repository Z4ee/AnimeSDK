#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapDownloadManager; }
namespace System { class String; }

#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB3E80)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS35_0__STARTDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1ACB5970)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS35_0__STARTDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1ACB59A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager___c__DisplayClass35_0_TypeDefinitionIndex = 61341;

	class TextmapDownloadManager___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::TextmapDownloadManager* __4__this; // 0x10
		::System::String* textLanguageKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartDownload_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS35_0__STARTDOWNLOAD_B__0_OFFSET))(this);
		}

		::System::Void _StartDownload_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS35_0__STARTDOWNLOAD_B__1_OFFSET))(this);
		}
	};
}
