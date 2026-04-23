#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMonsterStageData.h"

namespace RPG::Client { class GridFightMonsterCampConfig; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA4FDDC0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA50F3A0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA50F310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampStageData_TypeDefinitionIndex = 59898;

	class GridFightMonsterCampStageData : public ::RPG::Client::GridFightMonsterStageData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightMonsterCampStageData* Create(::RPG::Client::GridFightMonsterCampConfig* campConfig)
		{
			return ((::RPG::Client::GridFightMonsterCampStageData*(*)(::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_CREATE_OFFSET))(campConfig);
		}

		::System::Void Sync(::RPG::Client::GridFightMonsterCampConfig* campConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_SYNC_OFFSET))(this, campConfig);
		}
	};
}
