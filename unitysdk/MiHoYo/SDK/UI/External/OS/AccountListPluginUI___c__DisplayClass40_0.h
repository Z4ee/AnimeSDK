#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::External::OS { class AccountListPluginUI; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD51010)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI___C__DISPLAYCLASS40_0__ONDELETEACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1DD51020)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int AccountListPluginUI___c__DisplayClass40_0_TypeDefinitionIndex = 20521;

	class AccountListPluginUI___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::String* strArgs; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::MiHoYo::SDK::UI::External::OS::AccountListPluginUI* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnDeleteAccount_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI___C__DISPLAYCLASS40_0__ONDELETEACCOUNT_B__0_OFFSET))(this);
		}
	};
}
