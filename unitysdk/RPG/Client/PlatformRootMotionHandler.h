#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RootMotionHandler.h"

#define RPG_CLIENT_PLATFORMROOTMOTIONHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C2D56D0)
#define RPG_CLIENT_PLATFORMROOTMOTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D57B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlatformRootMotionHandler_TypeDefinitionIndex = 68603;

	class PlatformRootMotionHandler : public ::RPG::Client::RootMotionHandler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLATFORMROOTMOTIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLATFORMROOTMOTIONHANDLER_AWAKE_OFFSET))(this);
		}
	};
}
