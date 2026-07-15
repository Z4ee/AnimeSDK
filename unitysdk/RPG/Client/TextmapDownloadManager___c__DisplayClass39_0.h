#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapDownloadManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class SynchronizationContext; }

#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_0__ASYNCAPPLYTEXTLANGUAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1948D0F0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_0__ASYNCAPPLYTEXTLANGUAGE_B__1_OFFSET UNITYSDK_OFFSET(0x1948D2B0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1948BE10)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager___c__DisplayClass39_0_TypeDefinitionIndex = 58512;

	class TextmapDownloadManager___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::TextmapDownloadManager* __4__this; // 0x18
		::System::String* previousLanguage; // 0x20
		::System::String* textLangKey; // 0x28
		::System::Threading::SynchronizationContext* mainThreadContext; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncApplyTextLanguage_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_0__ASYNCAPPLYTEXTLANGUAGE_B__0_OFFSET))(this, a1);
		}

		::System::Void _AsyncApplyTextLanguage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_0__ASYNCAPPLYTEXTLANGUAGE_B__1_OFFSET))(this);
		}
	};
}
