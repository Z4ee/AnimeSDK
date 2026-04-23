#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1745CE10)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS2_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1745DA30)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerPS___c__DisplayClass2_0_TypeDefinitionIndex = 7827;

	class BindManagerPS___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::String* clientID; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::Int32 retcode, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS2_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, retcode, authCode, issuerId);
		}
	};
}
