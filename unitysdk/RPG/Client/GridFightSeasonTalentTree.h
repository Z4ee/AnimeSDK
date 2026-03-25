#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentTree.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"

class Class_1_6E708EAB438EC183_39;

#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x98A2990)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_TALENTTYPE_OFFSET UNITYSDK_OFFSET(0x98A2980)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_RESET_OFFSET UNITYSDK_OFFSET(0x98A3280)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_SYNC_OFFSET UNITYSDK_OFFSET(0x98A3150)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_UNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x98A31F0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x98A3360)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__INIT_OFFSET UNITYSDK_OFFSET(0x98A2AE0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE___IFIXBASEPROXY_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x98A3380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTalentTree_TypeDefinitionIndex = 52994;

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

		::System::Void Sync(::Class_1_6E708EAB438EC183_39* talentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_SYNC_OFFSET))(this, talentInfo);
		}

		::System::Void UnlockTalent(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_UNLOCKTALENT_OFFSET))(this, id);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_RESET_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE___IFIXBASEPROXY_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
