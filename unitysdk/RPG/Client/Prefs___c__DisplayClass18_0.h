#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define RPG_CLIENT_PREFS___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9390)
#define RPG_CLIENT_PREFS___C__DISPLAYCLASS18_0__RECOVERFROMCLOUD_B__0_OFFSET UNITYSDK_OFFSET(0x9FF93A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Prefs___c__DisplayClass18_0_TypeDefinitionIndex = 48002;

	class Prefs___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* recoverFromeCloudPromise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RecoverFromCloud_b__0(::System::String* serializeData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS___C__DISPLAYCLASS18_0__RECOVERFROMCLOUD_B__0_OFFSET))(this, serializeData);
		}
	};
}
