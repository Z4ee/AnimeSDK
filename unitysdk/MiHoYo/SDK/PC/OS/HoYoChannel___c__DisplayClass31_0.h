#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC6770)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS31_0__SETACTIVITY_B__0_OFFSET UNITYSDK_OFFSET(0x1BBC6780)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass31_0_TypeDefinitionIndex = 20272;

	class HoYoChannel___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::String* jsonString; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActivity_b__0(::System::Int32 retCode, ::System::String* msg, ::System::Int32 thirdError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS31_0__SETACTIVITY_B__0_OFFSET))(this, retCode, msg, thirdError);
		}
	};
}
