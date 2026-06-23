#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FB190)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1C0FB660)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManagerXbox___c__DisplayClass5_0_TypeDefinitionIndex = 20132;

	class BindManagerXbox___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, accessToken);
		}
	};
}
