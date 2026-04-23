#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_APPPREFS___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D30450)
#define RPG_CLIENT_APPPREFS___C__DISPLAYCLASS21_0__UPDATERECENTSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x9D30A60)

namespace RPG::Client
{
	inline static constexpr unsigned int AppPrefs___c__DisplayClass21_0_TypeDefinitionIndex = 54745;

	class AppPrefs___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* server_name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateRecentServer_b__0(::System::String* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS___C__DISPLAYCLASS21_0__UPDATERECENTSERVER_B__0_OFFSET))(this, s);
		}
	};
}
