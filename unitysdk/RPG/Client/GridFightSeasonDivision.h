#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::Client { class GridFightDivisionLevelReward; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_GETDISPLAYDIVISIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x98A0920)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_GETPREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0x98A0490)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x98A0570)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_TAKEALLDIVISIONREWARD_OFFSET UNITYSDK_OFFSET(0x98A06F0)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x989F310)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION__INITSEASONDIVISIONREWARDS_OFFSET UNITYSDK_OFFSET(0x98A0290)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonDivision_TypeDefinitionIndex = 52434;

	class GridFightSeasonDivision : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDivisionConfig*>* SeasonDivisionConfigs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* LastDivisionIDLUT; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDivisionLevelReward*>* SeasonDivisionRewards; // 0x20

		::System::Void _ctor(::System::UInt32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION__CTOR_OFFSET))(this, seasonID);
		}

		::System::UInt32 GetPrevDivisionID(::System::UInt32 divisionID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION_GETPREVDIVISIONID_OFFSET))(this, divisionID);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void TakeAllDivisionReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION_TAKEALLDIVISIONREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDivisionConfig*>* GetDisplayDivisionConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDivisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION_GETDISPLAYDIVISIONCONFIGS_OFFSET))(this);
		}

		::System::Void _InitSeasonDivisionRewards(::System::UInt32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION__INITSEASONDIVISIONREWARDS_OFFSET))(this, seasonID);
		}
	};
}
