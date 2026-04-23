#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_092355F7336672B8_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace RPG::Client { class AetherSkillCoreItemData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMFACTORY_CREATEAETHERSKILLCOREITEMDATA_OFFSET UNITYSDK_OFFSET(0xA646810)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARDS_OFFSET UNITYSDK_OFFSET(0xA644BE0)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARD_OFFSET UNITYSDK_OFFSET(0xA65F430)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0xA64B5F0)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_1_OFFSET UNITYSDK_OFFSET(0xA645AC0)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_OFFSET UNITYSDK_OFFSET(0xA64CF90)
#define RPG_CLIENT_ITEMFACTORY_CREATEEQUIPMENTITEMDATA_OFFSET UNITYSDK_OFFSET(0xA65F380)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMCONFIGLISTBYREWARDS_OFFSET UNITYSDK_OFFSET(0xA65F7F0)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_1_OFFSET UNITYSDK_OFFSET(0xA65F160)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0xA63D0C0)
#define RPG_CLIENT_ITEMFACTORY_CREATERELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xA64A3E0)
#define RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTID_OFFSET UNITYSDK_OFFSET(0xA6602B0)
#define RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTRSP_OFFSET UNITYSDK_OFFSET(0xA660380)
#define RPG_CLIENT_ITEMFACTORY_MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA65FD90)
#define RPG_CLIENT_ITEMFACTORY_MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA65EBB0)
#define RPG_CLIENT_ITEMFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6606B0)
#define RPG_CLIENT_ITEMFACTORY__CREATEDEFAULTITEMDATA_OFFSET UNITYSDK_OFFSET(0xA65F100)
#define RPG_CLIENT_ITEMFACTORY__CREATEPHONECASEITEMDATA_OFFSET UNITYSDK_OFFSET(0xA65F0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemFactory_TypeDefinitionIndex = 60513;

	class ItemFactory : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__GoldItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ItemFactory_TypeDefinitionIndex)->GetStaticField(0x9F60);
		}
		static ::System::UInt32* StaticGet__ExpItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ItemFactory_TypeDefinitionIndex)->GetStaticField(0x9F64);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateDisplayItemDatasByRewards(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* rewardList)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATASBYREWARDS_OFFSET))(rewardList);
		}

		static ::RPG::Client::ItemDisplayData* CreateDisplayItemData(::System::UInt32 configID, ::System::UInt32 count, ::System::UInt32 level, ::System::UInt32 uniqueID, ::System::UInt32 rank, ::System::Boolean isFromMultipleDrop)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_OFFSET))(configID, count, level, uniqueID, rank, isFromMultipleDrop);
		}

		static ::RPG::Client::ItemDisplayData* CreateDisplayItemData_1(::Proto::Item* item)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::Proto::Item*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_1_OFFSET))(item);
		}

		static ::RPG::Client::ItemData* CreateItemData(::System::UInt32 configID)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_OFFSET))(configID);
		}

		static ::RPG::Client::ItemData* CreateItemData_1(::System::UInt32 configID, ::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_1_OFFSET))(configID, uniqueID);
		}

		static ::RPG::Client::EquipmentItemData* CreateEquipmentItemData(::System::UInt32 configID, ::System::UInt32 uID)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEEQUIPMENTITEMDATA_OFFSET))(configID, uID);
		}

		static ::RPG::Client::RelicItemData* CreateRelicItemData(::System::UInt32 configID, ::System::UInt32 uID)
		{
			return ((::RPG::Client::RelicItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATERELICITEMDATA_OFFSET))(configID, uID);
		}

		static ::RPG::Client::AetherSkillCoreItemData* CreateAetherSkillCoreItemData(::System::UInt32 configID)
		{
			return ((::RPG::Client::AetherSkillCoreItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEAETHERSKILLCOREITEMDATA_OFFSET))(configID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateDisplayItemDataFromReward(::System::UInt32 rewardID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARD_OFFSET))(rewardID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateDisplayItemDataFromRewards(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* rewardIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARDS_OFFSET))(rewardIDs);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* MergeItemDisplayDatasIfPlayerMaxLevel(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* data)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_OFFSET))(data);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* CreateItemConfigListByRewards(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* rewards)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEITEMCONFIGLISTBYREWARDS_OFFSET))(rewards);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* MergeItemConfigListIfPlayerMaxLevel(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* configs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_OFFSET))(configs);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItemDisplayListByQuestID(::System::UInt32 questID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTID_OFFSET))(questID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItemDisplayListByQuestRsp(::Class_1_092355F7336672B8_1* rsp)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::Class_1_092355F7336672B8_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTRSP_OFFSET))(rsp);
		}

		static ::RPG::Client::ItemData* _CreateDefaultItemData(::System::UInt32 configID)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY__CREATEDEFAULTITEMDATA_OFFSET))(configID);
		}

		static ::RPG::Client::ItemData* _CreatePhoneCaseItemData(::System::UInt32 configID)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY__CREATEPHONECASEITEMDATA_OFFSET))(configID);
		}
	};
}
