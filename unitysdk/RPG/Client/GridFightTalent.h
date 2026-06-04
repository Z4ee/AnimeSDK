#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20D0DA500DC3BEAC;
class Class_1_DB57B006CFFCF00A;
namespace RPG::Client { class GridFightPermanentTalentTree; }
namespace RPG::Client { class GridFightSeasonTalentTree; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTALENT_CLEARPERMANENTTALENT_OFFSET UNITYSDK_OFFSET(0xBC07FD0)
#define RPG_CLIENT_GRIDFIGHTTALENT_CLEARSEASONTALENT_OFFSET UNITYSDK_OFFSET(0xBC080D0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYCNT_OFFSET UNITYSDK_OFFSET(0xBC07BA0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0xBC07AE0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0xBC079D0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_PERMANENTTALENTTREE_OFFSET UNITYSDK_OFFSET(0xBC07990)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_SEASONTALENTTREE_OFFSET UNITYSDK_OFFSET(0xBC079B0)
#define RPG_CLIENT_GRIDFIGHTTALENT_SET_PERMANENTTALENTTREE_OFFSET UNITYSDK_OFFSET(0xBC079A0)
#define RPG_CLIENT_GRIDFIGHTTALENT_SET_SEASONTALENTTREE_OFFSET UNITYSDK_OFFSET(0xBC079C0)
#define RPG_CLIENT_GRIDFIGHTTALENT_SYNC_1_OFFSET UNITYSDK_OFFSET(0xBC07CC0)
#define RPG_CLIENT_GRIDFIGHTTALENT_SYNC_OFFSET UNITYSDK_OFFSET(0xBC07C50)
#define RPG_CLIENT_GRIDFIGHTTALENT_UPDATEPERMANENTTALENT_OFFSET UNITYSDK_OFFSET(0xBC07D30)
#define RPG_CLIENT_GRIDFIGHTTALENT_UPDATESEASONTALENT_OFFSET UNITYSDK_OFFSET(0xBC07F70)
#define RPG_CLIENT_GRIDFIGHTTALENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC08120)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalent_TypeDefinitionIndex = 61025;

	class GridFightTalent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPermanentTalentTree* _PermanentTalentTree_k__BackingField; // 0x10
		::RPG::Client::GridFightSeasonTalentTree* _SeasonTalentTree_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightPermanentTalentTree* get_PermanentTalentTree()
		{
			return ((::RPG::Client::GridFightPermanentTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_PERMANENTTALENTTREE_OFFSET))(this);
		}

		::System::Void set_PermanentTalentTree(::RPG::Client::GridFightPermanentTalentTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPermanentTalentTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SET_PERMANENTTALENTTREE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonTalentTree* get_SeasonTalentTree()
		{
			return ((::RPG::Client::GridFightSeasonTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_SEASONTALENTTREE_OFFSET))(this);
		}

		::System::Void set_SeasonTalentTree(::RPG::Client::GridFightSeasonTalentTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonTalentTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SET_SEASONTALENTTREE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrencyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYID_OFFSET))(this);
		}

		::System::String* get_CurrencyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYICONPATH_OFFSET))(this);
		}

		::System::Int64 get_CurrencyCnt()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYCNT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_20D0DA500DC3BEAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20D0DA500DC3BEAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_DB57B006CFFCF00A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void UpdatePermanentTalent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_UPDATEPERMANENTTALENT_OFFSET))(this, a1);
		}

		::System::Void UpdateSeasonTalent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_UPDATESEASONTALENT_OFFSET))(this, a1);
		}

		::System::Void ClearPermanentTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_CLEARPERMANENTTALENT_OFFSET))(this);
		}

		::System::Void ClearSeasonTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_CLEARSEASONTALENT_OFFSET))(this);
		}
	};
}
