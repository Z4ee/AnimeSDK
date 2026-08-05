#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_STEAMPAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AF720)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int SteamPayInfo_TypeDefinitionIndex = 20798;

	class SteamPayInfo : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* paramsInfo; // 0x10
		::System::String* steamId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPAYINFO__CTOR_OFFSET))(this);
		}
	};
}
