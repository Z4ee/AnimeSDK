#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0__ACCOUNTPLATBIND_B__0_OFFSET UNITYSDK_OFFSET(0x1C941FC0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C941FB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass16_0_TypeDefinitionIndex = 21474;

	class BindManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _AccountPlatBind_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0__ACCOUNTPLATBIND_B__0_OFFSET))(this, response);
		}
	};
}
