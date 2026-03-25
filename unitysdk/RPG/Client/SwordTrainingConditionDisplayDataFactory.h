#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingConditionDisplayData; }
namespace RPG::Client { class SwordTrainingStatusDisplayData; }
namespace RPG::GameCore { class SwordTrainingConditionRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY_CREATECONDITIONDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xA510280)
#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY__CREATEMULTICONDITIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA5103D0)
#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY__CREATESINGLECONDITIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA5105D0)
#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY__CREATESTATUSDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA510630)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingConditionDisplayDataFactory_TypeDefinitionIndex = 50269;

	class SwordTrainingConditionDisplayDataFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingConditionDisplayData*>* CreateConditionDisplayDataList(::System::UInt32 conditionID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingConditionDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY_CREATECONDITIONDISPLAYDATALIST_OFFSET))(conditionID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingConditionDisplayData*>* _CreateMultiConditionDisplayData(::RPG::GameCore::SwordTrainingConditionRow* row)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingConditionDisplayData*>*(*)(::RPG::GameCore::SwordTrainingConditionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY__CREATEMULTICONDITIONDISPLAYDATA_OFFSET))(row);
		}

		static ::RPG::Client::SwordTrainingConditionDisplayData* _CreateSingleConditionDisplayData(::RPG::GameCore::SwordTrainingConditionRow* conditionRow)
		{
			return ((::RPG::Client::SwordTrainingConditionDisplayData*(*)(::RPG::GameCore::SwordTrainingConditionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY__CREATESINGLECONDITIONDISPLAYDATA_OFFSET))(conditionRow);
		}

		static ::RPG::Client::SwordTrainingStatusDisplayData* _CreateStatusDisplayData(::RPG::GameCore::SwordTrainingConditionRow* conditionRow)
		{
			return ((::RPG::Client::SwordTrainingStatusDisplayData*(*)(::RPG::GameCore::SwordTrainingConditionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATAFACTORY__CREATESTATUSDISPLAYDATA_OFFSET))(conditionRow);
		}
	};
}
