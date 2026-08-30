#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_12;
class Class_1_04B49712BAFF7721;
class Class_1_905995C4C61F81F7_7;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfCellGetItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1AC72BF0)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1AC730D0)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC71C30)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_GET_MERGEDRESULT_OFFSET UNITYSDK_OFFSET(0x1AC735B0)
#define RPG_CLIENT_ELFFARMITEMHINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC72BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmItemHintData_TypeDefinitionIndex = 63744;

	class ElfFarmItemHintData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _MergedResult; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfCellGetItemData*>* CellRewards; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_04B49712BAFF7721*>* a1)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_04B49712BAFF7721*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_905995C4C61F81F7_7*>* a1)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_905995C4C61F81F7_7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create_2(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0319A031DCA9B495_12*>* a1)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0319A031DCA9B495_12*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_2_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_MergedResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_GET_MERGEDRESULT_OFFSET))(this);
		}
	};
}
