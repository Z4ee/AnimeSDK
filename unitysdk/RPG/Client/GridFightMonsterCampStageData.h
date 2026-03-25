#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMonsterStageData.h"

namespace RPG::Client { class GridFightMonsterCampConfig; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x985C4E0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x986CCC0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x986CC30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampStageData_TypeDefinitionIndex = 52823;

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
