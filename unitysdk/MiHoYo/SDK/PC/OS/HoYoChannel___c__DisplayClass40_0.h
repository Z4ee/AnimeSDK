#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A26C650)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__SENDSESSIONINVITE_B__0_OFFSET UNITYSDK_OFFSET(0x1A272CB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass40_0_TypeDefinitionIndex = 8473;

	class HoYoChannel___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* jsonString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendSessionInvite_b__0(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS40_0__SENDSESSIONINVITE_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
