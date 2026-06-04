#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

class Class_1_2BF31F3092BDFD9E;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_REPLACE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC41AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Replace_TypeDefinitionIndex = 64289;

	class WolfBroGunPlayTarget_Replace : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_REPLACE__CTOR_OFFSET))(this);
		}
	};
}
