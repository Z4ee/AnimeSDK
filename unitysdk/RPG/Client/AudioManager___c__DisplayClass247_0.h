#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudioManager; }
namespace System { class String; }

#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB352C30)
#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__STARTDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xB354B00)
#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS247_0__STARTDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0xB354B30)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager___c__DisplayClass247_0_TypeDefinitionIndex = 55844;

	class AudioManager___c__DisplayClass247_0 : public ::System::Object
	{
	public:
		::System::String* languageKey; // 0x10
		::RPG::Client::AudioManager* __4__this; // 0x18

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
