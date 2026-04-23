#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_11;
class Class_1_1A51EE17E877E477;
class Class_1_905995C4C61F81F7_7;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfCellGetItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA232740)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xA232A80)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA231A20)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_GET_MERGEDRESULT_OFFSET UNITYSDK_OFFSET(0xA232DD0)
#define RPG_CLIENT_ELFFARMITEMHINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2326F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmItemHintData_TypeDefinitionIndex = 58676;

	class ElfFarmItemHintData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfCellGetItemData*>* CellRewards; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _MergedResult; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1A51EE17E877E477*>* harvestResults)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1A51EE17E877E477*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_OFFSET))(harvestResults);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_905995C4C61F81F7_7*>* recycleResults)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_905995C4C61F81F7_7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_1_OFFSET))(recycleResults);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create_2(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0319A031DCA9B495_11*>* itemCostData)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0319A031DCA9B495_11*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_2_OFFSET))(itemCostData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_MergedResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_GET_MERGEDRESULT_OFFSET))(this);
		}
	};
}
