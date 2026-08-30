#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/Cartography3DBase.h"

namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::GameCore { class RotatableRegion; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DROTATABLE_GET_MAP3DPREFABPATH_OFFSET UNITYSDK_OFFSET(0xD9361E0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DROTATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD935D50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DROTATABLE__INITROW_OFFSET UNITYSDK_OFFSET(0xD935D70)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography3DRotatable_TypeDefinitionIndex = 74381;

	class Cartography3DRotatable : public ::RPG::Client::NavMap::Cartography3DBase
	{
	public:
		::RPG::GameCore::RotatableRegion* _Row; // 0x78
		::System::UInt32 _RegionIndex; // 0x80

		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DROTATABLE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _InitRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DROTATABLE__INITROW_OFFSET))(this);
		}

		::System::String* get_Map3DPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DROTATABLE_GET_MAP3DPREFABPATH_OFFSET))(this);
		}
	};
}
