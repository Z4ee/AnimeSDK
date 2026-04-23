#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELBASERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x175A4440)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelBaseResult_TypeDefinitionIndex = 7543;

	class HoYoChannelBaseResult : public ::System::Object
	{
	public:
		::System::Int32 result; // 0x10
		::System::String* message; // 0x18
		::System::String* channel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELBASERESULT__CTOR_OFFSET))(this);
		}
	};
}
