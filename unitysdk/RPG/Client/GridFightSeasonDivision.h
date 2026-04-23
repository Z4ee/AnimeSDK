#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::Client { class GridFightDivisionLevelReward; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_GETDISPLAYDIVISIONCONFIGS_OFFSET UNITYSDK_OFFSET(0xA5826F0)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_GETPREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0xA582000)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA5820E0)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_TAKEALLDIVISIONREWARD_OFFSET UNITYSDK_OFFSET(0xA582260)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION_TAKEALLEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xA5824C0)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION__CTOR_OFFSET UNITYSDK_OFFSET(0xA580EC0)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION__INITSEASONDIVISIONREWARDS_OFFSET UNITYSDK_OFFSET(0xA581E00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonDivision_TypeDefinitionIndex = 59392;

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

		::System::Void TakeAllExtraReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION_TAKEALLEXTRAREWARD_OFFSET))(this);
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
