#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_BILIBILIGAMEINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x176B0D30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliGameInfoModel_TypeDefinitionIndex = 8085;

	class BiliBiliGameInfoModel : public ::System::Object
	{
	public:
		::System::String* gameId; // 0x10
		::System::String* appKey; // 0x18
		::System::String* merchantId; // 0x20
		::System::String* serverId; // 0x28
		::System::String* gameVersion; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIGAMEINFOMODEL__CTOR_OFFSET))(this);
		}
	};
}
