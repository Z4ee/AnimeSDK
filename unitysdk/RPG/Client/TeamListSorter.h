#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamDataSortRule.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMLISTSORTER_ADDRULE_OFFSET UNITYSDK_OFFSET(0xE1D00E0)
#define RPG_CLIENT_TEAMLISTSORTER_COMPARE_OFFSET UNITYSDK_OFFSET(0xE1D0410)
#define RPG_CLIENT_TEAMLISTSORTER_CREATE_OFFSET UNITYSDK_OFFSET(0xE1CFFE0)
#define RPG_CLIENT_TEAMLISTSORTER_DEFAULTSORTER_OFFSET UNITYSDK_OFFSET(0xE1D0270)
#define RPG_CLIENT_TEAMLISTSORTER_SORT_OFFSET UNITYSDK_OFFSET(0xE1D02D0)
#define RPG_CLIENT_TEAMLISTSORTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE1D0090)
#define RPG_CLIENT_TEAMLISTSORTER__ISRETURNTRIALTEAM_OFFSET UNITYSDK_OFFSET(0xE1D0510)
#define RPG_CLIENT_TEAMLISTSORTER__SORTBYISFAVOURITE_OFFSET UNITYSDK_OFFSET(0xE1D0670)
#define RPG_CLIENT_TEAMLISTSORTER__SORTBYISRETURNTRIAL_OFFSET UNITYSDK_OFFSET(0xE1D0570)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamListSorter_TypeDefinitionIndex = 68124;

	class TeamListSorter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Comparison_1<::RPG::Client::TeamData*>*>* _comparers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TeamListSorter* Create()
		{
			return ((::RPG::Client::TeamListSorter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER_CREATE_OFFSET))();
		}

		::RPG::Client::TeamListSorter* AddRule(::RPG::Client::TeamDataSortRule a1)
		{
			return ((::RPG::Client::TeamListSorter*(*)(::PVOID, ::RPG::Client::TeamDataSortRule))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER_ADDRULE_OFFSET))(this, a1);
		}

		::RPG::Client::TeamListSorter* DefaultSorter()
		{
			return ((::RPG::Client::TeamListSorter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER_DEFAULTSORTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* Sort(::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER_SORT_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::Client::TeamData* a1, ::RPG::Client::TeamData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsReturnTrialTeam(::RPG::Client::TeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER__ISRETURNTRIALTEAM_OFFSET))(this, a1);
		}

		::System::Int32 _SortByIsReturnTrial(::RPG::Client::TeamData* a1, ::RPG::Client::TeamData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER__SORTBYISRETURNTRIAL_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortByIsFavourite(::RPG::Client::TeamData* a1, ::RPG::Client::TeamData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMLISTSORTER__SORTBYISFAVOURITE_OFFSET))(this, a1, a2);
		}
	};
}
