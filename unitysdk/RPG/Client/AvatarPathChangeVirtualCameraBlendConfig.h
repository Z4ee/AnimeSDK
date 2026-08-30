#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATARPATHCHANGEVIRTUALCAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC83A130)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeVirtualCameraBlendConfig_TypeDefinitionIndex = 71299;

	class AvatarPathChangeVirtualCameraBlendConfig : public ::System::Object
	{
	public:
		::System::UInt32 FromAvatarID; // 0x10
		::System::UInt32 ToAvatarID; // 0x14
		::System::Int32 BlendID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEVIRTUALCAMERABLENDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
