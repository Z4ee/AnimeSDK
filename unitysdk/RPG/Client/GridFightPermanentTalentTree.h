#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentTree.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"

class Class_1_6E708EAB438EC183_39;

#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_GET_TALENTTYPE_OFFSET UNITYSDK_OFFSET(0x987B900)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_RESET_OFFSET UNITYSDK_OFFSET(0x987C0B0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET UNITYSDK_OFFSET(0x987BF80)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_UNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x987C020)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x987C190)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__INIT_OFFSET UNITYSDK_OFFSET(0x987B910)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPermanentTalentTree_TypeDefinitionIndex = 52991;

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

		::System::Void Sync(::Class_1_6E708EAB438EC183_39* talentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET))(this, talentInfo);
		}

		::System::Void UnlockTalent(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_UNLOCKTALENT_OFFSET))(this, id);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_RESET_OFFSET))(this);
		}
	};
}
