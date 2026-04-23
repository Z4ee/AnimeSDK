#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17411590)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS___C__DISPLAYCLASS1_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x174115A0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManagerPS___c__DisplayClass1_0_TypeDefinitionIndex = 7867;

	class BindManagerPS___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* clientID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::Int32 retcode, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS___C__DISPLAYCLASS1_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, retcode, authCode, issuerId);
		}
	};
}
