#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentTree.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"

class Class_1_075C34D03AFA1215_44;

#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_GET_TALENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE95450)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_RESET_OFFSET UNITYSDK_OFFSET(0x1AE95D10)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE95BE0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_UNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x1AE95C80)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE95DF0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__INIT_OFFSET UNITYSDK_OFFSET(0x1AE95490)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPermanentTalentTree_TypeDefinitionIndex = 62334;

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

		::System::Void Sync(::Class_1_075C34D03AFA1215_44* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET))(this, a1);
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
