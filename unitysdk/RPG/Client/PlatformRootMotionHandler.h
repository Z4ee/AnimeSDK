#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RootMotionHandler.h"

#define RPG_CLIENT_PLATFORMROOTMOTIONHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC48DAC0)
#define RPG_CLIENT_PLATFORMROOTMOTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC48DBA0)
#define RPG_CLIENT_PLATFORMROOTMOTIONHANDLER___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xC48DBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlatformRootMotionHandler_TypeDefinitionIndex = 64217;

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

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLATFORMROOTMOTIONHANDLER___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}
	};
}
