#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class GridFightTeam_RoleGrowupSummarizer_GrowupParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x98C1920)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x98C13E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x98C1030)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x98C2330)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x98C22C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_RoleGrowupSummarizer_TypeDefinitionIndex = 52908;

	class GridFightTeam_RoleGrowupSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _BeforeLevelByName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _AfterLevelByName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::GridFightTeam_RoleGrowupSummarizer_GrowupParam*>* _Params; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 srcType, ::System::Collections::Generic::IList_1<::System::UInt32>* srcParamList)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEBEFORE_OFFSET))(this, srcType, srcParamList);
		}

		::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 srcType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEAFTER_OFFSET))(this, srcType);
		}

		::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
		}
	};
}
