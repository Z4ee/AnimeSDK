#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PhotoGraphRoamingConfig; }

#define RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6DCA0)
#define RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS9_0__GETROAMINGCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xAC6EC10)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphModule___c__DisplayClass9_0_TypeDefinitionIndex = 61217;

	class PhotoGraphModule___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::CameraDataAndFlags_RoamingStyle roamingStyle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoamingConfig_b__0(::RPG::GameCore::PhotoGraphRoamingConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphRoamingConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS9_0__GETROAMINGCONFIG_B__0_OFFSET))(this, x);
		}
	};
}
