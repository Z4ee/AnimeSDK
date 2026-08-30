#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentTree.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"

class Class_1_075C34D03AFA1215_45;

#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_GET_TALENTTYPE_OFFSET UNITYSDK_OFFSET(0x1CA4C5A0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_RESET_OFFSET UNITYSDK_OFFSET(0x1CA4CEA0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET UNITYSDK_OFFSET(0x1CA4CD30)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_UNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x1CA4CDD0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA4CF60)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__INIT_OFFSET UNITYSDK_OFFSET(0x1CA4C5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPermanentTalentTree_TypeDefinitionIndex = 65319;

	class GridFightPermanentTalentTree : public ::RPG::Client::GridFightTalentTree
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightTalentType get_TalentType()
		{
			return ((::RPG::Client::GridFightTalentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_GET_TALENTTYPE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_075C34D03AFA1215_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET))(this, a1);
		}

		::System::Void UnlockTalent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_UNLOCKTALENT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_RESET_OFFSET))(this);
		}
	};
}
