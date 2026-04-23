#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarPathChangeVirtualCameraBlendConfig; }

#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB39F0)
#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER___C__DISPLAYCLASS5_0__STARTBLEND_B__0_OFFSET UNITYSDK_OFFSET(0x9DB3A10)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeCameraController___c__DisplayClass5_0_TypeDefinitionIndex = 65749;

	class AvatarPathChangeCameraController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 toAvatarID; // 0x10
		::System::UInt32 fromAvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartBlend_b__0(::RPG::Client::AvatarPathChangeVirtualCameraBlendConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarPathChangeVirtualCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER___C__DISPLAYCLASS5_0__STARTBLEND_B__0_OFFSET))(this, data);
		}
	};
}
