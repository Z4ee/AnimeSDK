#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0__CONSOLE_GET_FRIEND_LIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BC73D60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC73D50)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass126_0_TypeDefinitionIndex = 20698;

	class MiHoYoSDKDll___c__DisplayClass126_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0__CTOR_OFFSET))(this);
		}

		::System::Void _console_get_friend_list_b__0(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0__CONSOLE_GET_FRIEND_LIST_B__0_OFFSET))(this, jsonString);
		}
	};
}
