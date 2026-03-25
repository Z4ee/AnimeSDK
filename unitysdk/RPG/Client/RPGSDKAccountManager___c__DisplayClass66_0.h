#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA274440)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS66_0__SHOWEXITUI_B__0_OFFSET UNITYSDK_OFFSET(0xA274450)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager___c__DisplayClass66_0_TypeDefinitionIndex = 49517;

	class RPGSDKAccountManager___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowExitUI_b__0(::System::String* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS66_0__SHOWEXITUI_B__0_OFFSET))(this, rsp);
		}
	};
}
