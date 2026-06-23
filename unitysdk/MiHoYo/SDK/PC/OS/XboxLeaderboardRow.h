#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXLEADERBOARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB48DA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxLeaderboardRow_TypeDefinitionIndex = 20428;

	class XboxLeaderboardRow : public ::System::Object
	{
	public:
		::System::Int32 rank; // 0x10
		::System::String* xuid; // 0x18
		::System::String* gamertag; // 0x20
		::System::Double percentile; // 0x28
		::System::String* value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXLEADERBOARDROW__CTOR_OFFSET))(this);
		}
	};
}
