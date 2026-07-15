#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLAYERPLATFORMINFO_GET_ISPSPLAYER_OFFSET UNITYSDK_OFFSET(0x1938FD80)
#define RPG_CLIENT_PLAYERPLATFORMINFO_GET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x1938FD60)
#define RPG_CLIENT_PLAYERPLATFORMINFO_SET_PLATFORMUUID_OFFSET UNITYSDK_OFFSET(0x1938FD70)
#define RPG_CLIENT_PLAYERPLATFORMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19383180)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerPlatformInfo_TypeDefinitionIndex = 63720;

	class PlayerPlatformInfo : public ::System::Object
	{
	public:
		::System::String* _PlatformUUID_k__BackingField; // 0x10
		::Enum_3_7D0231C413D78CFA PlatformType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERPLATFORMINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_PlatformUUID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERPLATFORMINFO_GET_PLATFORMUUID_OFFSET))(this);
		}

		::System::Void set_PlatformUUID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERPLATFORMINFO_SET_PLATFORMUUID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPSPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERPLATFORMINFO_GET_ISPSPLAYER_OFFSET))(this);
		}
	};
}
