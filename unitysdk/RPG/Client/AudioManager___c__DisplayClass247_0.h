#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudioManager; }
namespace System { class String; }

#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181133D0)
#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__STARTDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x18115540)
#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__STARTDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x18115570)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager___c__DisplayClass247_0_TypeDefinitionIndex = 57083;

	class AudioManager___c__DisplayClass247_0 : public ::System::Object
	{
	public:
		::RPG::Client::AudioManager* __4__this; // 0x10
		::System::String* languageKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartDownload_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__STARTDOWNLOAD_B__0_OFFSET))(this);
		}

		::System::Void _StartDownload_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__STARTDOWNLOAD_B__1_OFFSET))(this);
		}
	};
}
