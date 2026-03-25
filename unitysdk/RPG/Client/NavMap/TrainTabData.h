#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/ComposedTabData.h"

namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::GameCore { class NavMapTabRow; }

#define RPG_CLIENT_NAVMAP_TRAINTABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0x9E2BE10)
#define RPG_CLIENT_NAVMAP_TRAINTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E2BDC0)
#define RPG_CLIENT_NAVMAP_TRAINTABDATA___IFIXBASEPROXY_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0x9E2C230)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int TrainTabData_TypeDefinitionIndex = 61265;

	class TrainTabData : public ::RPG::Client::NavMap::ComposedTabData
	{
	public:
		::System::Void _ctor(::RPG::Client::NavMap::WorldData* worldData, ::RPG::GameCore::NavMapTabRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_TRAINTABDATA__CTOR_OFFSET))(this, worldData, row);
		}

		::RPG::Client::NavMap::SubTabData* GetDefaultSubTabAndLayer(::System::Int32& layer)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_TRAINTABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, layer);
		}

		::RPG::Client::NavMap::SubTabData* __iFixBaseProxy_GetDefaultSubTabAndLayer(::System::Int32& P0)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_TRAINTABDATA___IFIXBASEPROXY_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, P0);
		}
	};
}
