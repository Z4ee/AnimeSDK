#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureDungeonBaseGrid.h"

namespace RPG::GameCore { class TreasureDungeonItemConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONITEMGRID_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA62F840)
#define RPG_CLIENT_TREASUREDUNGEONITEMGRID_GET_ISBUFF_OFFSET UNITYSDK_OFFSET(0xA62F960)
#define RPG_CLIENT_TREASUREDUNGEONITEMGRID_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0xA62F7E0)
#define RPG_CLIENT_TREASUREDUNGEONITEMGRID__CTOR_OFFSET UNITYSDK_OFFSET(0xA62CF10)
#define RPG_CLIENT_TREASUREDUNGEONITEMGRID___IFIXBASEPROXY_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA62FA70)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonItemGrid_TypeDefinitionIndex = 55672;

	class TreasureDungeonItemGrid : public ::RPG::Client::TreasureDungeonBaseGrid
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEMGRID__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonItemConfigRow* get_ItemRow()
		{
			return ((::RPG::GameCore::TreasureDungeonItemConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEMGRID_GET_ITEMROW_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEMGRID_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEMGRID_GET_ISBUFF_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEMGRID___IFIXBASEPROXY_GET_ICONPATH_OFFSET))(this);
		}
	};
}
