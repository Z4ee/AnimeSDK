#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_23;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceTitleData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB49EAD0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_CATDATA_OFFSET UNITYSDK_OFFSET(0xB49EC90)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_TITLEDATA_OFFSET UNITYSDK_OFFSET(0xB49EBB0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_GET_TITLEVALUELIST_OFFSET UNITYSDK_OFFSET(0xB49ED80)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB49ED90)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__INIT_OFFSET UNITYSDK_OFFSET(0xB49EDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameSettlementTitleData_TypeDefinitionIndex = 59013;

	class CakeRaceGameSettlementTitleData : public ::System::Object
	{
	public:
		::Class_1_4BC858D7C27E10ED_23* _FightCakeRaceTitle; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TitleValueList; // 0x18

		::System::Void _ctor(::Class_1_4BC858D7C27E10ED_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__CTOR_OFFSET))(this, a1);
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

		static ::RPG::Client::CakeRaceGameSettlementTitleData* Create(::Class_1_4BC858D7C27E10ED_23* a1)
		{
			return ((::RPG::Client::CakeRaceGameSettlementTitleData*(*)(::Class_1_4BC858D7C27E10ED_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTTITLEDATA__INIT_OFFSET))(this);
		}
	};
}
