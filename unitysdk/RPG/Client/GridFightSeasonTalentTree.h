#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentTree.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"

class Class_1_075C34D03AFA1215_45;

#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xD3164B0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_TALENTTYPE_OFFSET UNITYSDK_OFFSET(0xD316460)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_RESET_OFFSET UNITYSDK_OFFSET(0xD316F60)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_SYNC_OFFSET UNITYSDK_OFFSET(0xD316DF0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_UNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0xD316E90)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0xD317020)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__INIT_OFFSET UNITYSDK_OFFSET(0xD3166A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTalentTree_TypeDefinitionIndex = 65322;

	class GridFightSeasonTalentTree : public ::RPG::Client::GridFightTalentTree
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightTalentType get_TalentType()
		{
			return ((::RPG::Client::GridFightTalentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_TALENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_075C34D03AFA1215_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_SYNC_OFFSET))(this, a1);
		}

		::System::Void UnlockTalent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_UNLOCKTALENT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_RESET_OFFSET))(this);
		}
	};
}
