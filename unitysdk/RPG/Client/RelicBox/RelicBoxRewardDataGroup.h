#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicBox { class RelicBoxRewardData; }
namespace RPG::GameCore { class ActivityRelicBoxQuestTabRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_ADDREWARDDATA_OFFSET UNITYSDK_OFFSET(0x198723A0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x198722E0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GETALLREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x19872720)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GETCANTAKEREWARADQUESTS_OFFSET UNITYSDK_OFFSET(0x19872450)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x198727D0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GET_TABID_OFFSET UNITYSDK_OFFSET(0x19872220)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x19872270)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x19872880)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19872360)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxRewardDataGroup_TypeDefinitionIndex = 71053;

	class RelicBoxRewardDataGroup : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRelicBoxQuestTabRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RelicBox::RelicBoxRewardData*>* RelicBoxRewardList; // 0x18

		::System::Void _ctor(::RPG::GameCore::ActivityRelicBoxQuestTabRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_TabID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GET_TABID_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GET_TABNAME_OFFSET))(this);
		}

		static ::RPG::Client::RelicBox::RelicBoxRewardDataGroup* Create(::RPG::GameCore::ActivityRelicBoxQuestTabRow* a1)
		{
			return ((::RPG::Client::RelicBox::RelicBoxRewardDataGroup*(*)(::RPG::GameCore::ActivityRelicBoxQuestTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_CREATE_OFFSET))(a1);
		}

		::System::Void AddRewardData(::RPG::Client::RelicBox::RelicBoxRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicBox::RelicBoxRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_ADDREWARDDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCanTakeRewaradQuests()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GETCANTAKEREWARADQUESTS_OFFSET))(this);
		}

		::System::Int32 GetAllRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GETALLREWARDCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTakenRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_GETTAKENREWARDCOUNT_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAGROUP_HASANYREWARDCANTAKE_OFFSET))(this);
		}
	};
}
