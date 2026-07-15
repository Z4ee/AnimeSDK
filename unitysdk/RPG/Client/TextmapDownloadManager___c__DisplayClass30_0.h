#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapSizeErrorCode.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS30_0__ASYNCUPDATELANGSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1948D060)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1948A9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager___c__DisplayClass30_0_TypeDefinitionIndex = 58510;

	class TextmapDownloadManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action* failCb; // 0x10
		::System::Action* successCb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncUpdateLangSize_b__0(::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS30_0__ASYNCUPDATELANGSIZE_B__0_OFFSET))(this, a1);
		}
	};
}
