#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleUITeamBlockItemViewData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETALLBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xD9DCF60)
#define RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0xD9DCED0)
#define RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xD9DCF20)
#define RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETNEEDSHOW_OFFSET UNITYSDK_OFFSET(0xD9DCE90)
#define RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9DCFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int NullTeamBlockBattleBuffGroupViewData_TypeDefinitionIndex = 71525;

	class NullTeamBlockBattleBuffGroupViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BattleUITeamBlockItemViewData*>* _ItemDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean GetNeedShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETNEEDSHOW_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BattleUITeamBlockItemViewData*>* GetItemDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BattleUITeamBlockItemViewData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETITEMDATALIST_OFFSET))(this);
		}

		::System::Int32 GetAllBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NULLTEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETALLBUFFCOUNT_OFFSET))(this);
		}
	};
}
