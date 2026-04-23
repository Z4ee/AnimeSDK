#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_21;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceTitleData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F030F0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_CATDATA_OFFSET UNITYSDK_OFFSET(0x9F03390)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_TITLEDATA_OFFSET UNITYSDK_OFFSET(0x9F031D0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_TITLEVALUELIST_OFFSET UNITYSDK_OFFSET(0x9F03470)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F03480)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9F034E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameSettlementTitleData_TypeDefinitionIndex = 58097;

	class CakeRaceGameSettlementTitleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TitleValueList; // 0x10
		::Class_1_4BC858D7C27E10ED_21* _FightCakeRaceTitle; // 0x18

		::System::Void _ctor(::Class_1_4BC858D7C27E10ED_21* fightCakeRaceTitle)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__CTOR_OFFSET))(this, fightCakeRaceTitle);
		}

		::RPG::Client::CakeRaceTitleData* get_TitleData()
		{
			return ((::RPG::Client::CakeRaceTitleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_TITLEDATA_OFFSET))(this);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatData()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_CATDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_TitleValueList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_TITLEVALUELIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameSettlementTitleData* Create(::Class_1_4BC858D7C27E10ED_21* fightCakeRaceTitle)
		{
			return ((::RPG::Client::CakeRaceGameSettlementTitleData*(*)(::Class_1_4BC858D7C27E10ED_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_CREATE_OFFSET))(fightCakeRaceTitle);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__INIT_OFFSET))(this);
		}
	};
}
