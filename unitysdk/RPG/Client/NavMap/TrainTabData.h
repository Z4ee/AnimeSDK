#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/ComposedTabData.h"

namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::GameCore { class NavMapTabRow; }

#define RPG_CLIENT_NAVMAP_TRAINTABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0xC281870)
#define RPG_CLIENT_NAVMAP_TRAINTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC281820)
#define RPG_CLIENT_NAVMAP_TRAINTABDATA___IFIXBASEPROXY_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0xC281C20)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int TrainTabData_TypeDefinitionIndex = 69585;

	class TrainTabData : public ::RPG::Client::NavMap::ComposedTabData
	{
	public:
		::System::Void _ctor(::RPG::Client::NavMap::WorldData* a1, ::RPG::GameCore::NavMapTabRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_TRAINTABDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NavMap::SubTabData* GetDefaultSubTabAndLayer(::System::Int32& a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_TRAINTABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* __iFixBaseProxy_GetDefaultSubTabAndLayer(::System::Int32& a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_TRAINTABDATA___IFIXBASEPROXY_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, a1);
		}
	};
}
