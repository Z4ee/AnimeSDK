#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/IconCollector3DBase.h"

namespace RPG::Client::NavMap { class ICartography3D; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP_INIT_OFFSET UNITYSDK_OFFSET(0x166AE7D0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__COLLECTMAPPINGINFO3DICON_OFFSET UNITYSDK_OFFSET(0x166AE890)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__COLLECTTELEPORT3DICON_OFFSET UNITYSDK_OFFSET(0x166AF2A0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x166AE770)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollector3DEraFlip_TypeDefinitionIndex = 71098;

	class IconCollector3DEraFlip : public ::RPG::Client::NavMap::IconCollector3DBase
	{
	public:
		::System::Void _ctor(::RPG::Client::NavMap::ICartography3D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP_INIT_OFFSET))(this);
		}

		::System::Void _CollectMappingInfo3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__COLLECTMAPPINGINFO3DICON_OFFSET))(this);
		}

		::System::Void _CollectTeleport3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__COLLECTTELEPORT3DICON_OFFSET))(this);
		}
	};
}
