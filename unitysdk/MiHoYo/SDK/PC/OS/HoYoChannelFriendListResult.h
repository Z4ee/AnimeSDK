#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class FriendData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1ABC87F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ABC87E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC8830)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelFriendListResult_TypeDefinitionIndex = 8560;

	class HoYoChannelFriendListResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::FriendData*>* friends; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELFRIENDLISTRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
