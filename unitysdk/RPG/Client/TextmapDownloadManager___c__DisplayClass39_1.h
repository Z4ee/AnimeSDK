#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapDownloadManager___c__DisplayClass39_0; }

#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1__ASYNCAPPLYTEXTLANGUAGE_B__2_OFFSET UNITYSDK_OFFSET(0x1948D350)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1948D2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager___c__DisplayClass39_1_TypeDefinitionIndex = 58513;

	class TextmapDownloadManager___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::RPG::Client::TextmapDownloadManager___c__DisplayClass39_0* CS___8__locals1; // 0x10
		::System::Boolean valid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncApplyTextLanguage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1__ASYNCAPPLYTEXTLANGUAGE_B__2_OFFSET))(this);
		}
	};
}
