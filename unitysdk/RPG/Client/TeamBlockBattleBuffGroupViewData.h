#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1202;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class BattleUITeamBlockItemViewData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE1C26F0)
#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETALLBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xE1C33D0)
#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0xE1C2E70)
#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xE1C3390)
#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETNEEDSHOW_OFFSET UNITYSDK_OFFSET(0xE1C2E10)
#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GET__OVERVIEWDATA_OFFSET UNITYSDK_OFFSET(0xE1C3320)
#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE1C27C0)
#define RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA__REFRESHITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xE1C2810)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBlockBattleBuffGroupViewData_TypeDefinitionIndex = 71524;

	class TeamBlockBattleBuffGroupViewData : public ::System::Object
	{
	public:
		// static const ::System::String* _TEXT_ID_DESC; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::BattleUITeamBlockItemViewData*>* _ItemDataList; // 0x10
		::RPG::Client::BattleUITeamBlockData* _Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TeamBlockBattleBuffGroupViewData* Create(::RPG::Client::BattleUITeamBlockData* a1)
		{
			return ((::RPG::Client::TeamBlockBattleBuffGroupViewData*(*)(::RPG::Client::BattleUITeamBlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean GetNeedShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETNEEDSHOW_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BattleUITeamBlockItemViewData*>* GetItemDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BattleUITeamBlockItemViewData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETITEMDATALIST_OFFSET))(this);
		}

		::System::Int32 GetAllBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GETALLBUFFCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshItemDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA__REFRESHITEMDATALIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1202* get__OverviewData()
		{
			return ((::Class_0_16E4307DCC419505_1202*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBLOCKBATTLEBUFFGROUPVIEWDATA_GET__OVERVIEWDATA_OFFSET))(this);
		}
	};
}
