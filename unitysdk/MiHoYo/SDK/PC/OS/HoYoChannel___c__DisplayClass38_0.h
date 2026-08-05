#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF42A80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS38_0__SHOWSESSIONINVITE_B__0_OFFSET UNITYSDK_OFFSET(0x1CF42A90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass38_0_TypeDefinitionIndex = 20624;

	class HoYoChannel___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSessionInvite_b__0(::System::Int32 retCode, ::System::String* msg, ::System::Int32 thirdError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS38_0__SHOWSESSIONINVITE_B__0_OFFSET))(this, retCode, msg, thirdError);
		}
	};
}
