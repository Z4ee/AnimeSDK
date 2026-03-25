#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/IconCollector3DBase.h"

namespace RPG::Client::NavMap { class ICartography3D; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP_INIT_OFFSET UNITYSDK_OFFSET(0x9DF5A30)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__COLLECTMAPPINGINFO3DICON_OFFSET UNITYSDK_OFFSET(0x9E0A280)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__COLLECTTELEPORT3DICON_OFFSET UNITYSDK_OFFSET(0x9E0A8B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF59D0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9E0AD10)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP___IFIXBASEPROXY__COLLECTMAPPINGINFO3DICON_OFFSET UNITYSDK_OFFSET(0x9E0AD20)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollector3DEraFlip_TypeDefinitionIndex = 61255;

	class IconCollector3DEraFlip : public ::RPG::Client::NavMap::IconCollector3DBase
	{
	public:
		::System::Void _ctor(::RPG::Client::NavMap::ICartography3D* cartography)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CTOR_OFFSET))(this, cartography);
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

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CollectMappingInfo3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP___IFIXBASEPROXY__COLLECTMAPPINGINFO3DICON_OFFSET))(this);
		}
	};
}
