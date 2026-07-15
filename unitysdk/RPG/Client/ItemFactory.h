#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace Proto { class TakeQuestRewardScRsp; }
namespace RPG::Client { class AetherSkillCoreItemData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMFACTORY_CREATEAETHERSKILLCOREITEMDATA_OFFSET UNITYSDK_OFFSET(0x16C43C50)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARDS_OFFSET UNITYSDK_OFFSET(0x16C41AF0)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARD_OFFSET UNITYSDK_OFFSET(0x16C60E20)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0x16C49650)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_1_OFFSET UNITYSDK_OFFSET(0x16C42C20)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_OFFSET UNITYSDK_OFFSET(0x16C4BDB0)
#define RPG_CLIENT_ITEMFACTORY_CREATEEQUIPMENTITEMDATA_OFFSET UNITYSDK_OFFSET(0x16C60D70)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMCONFIGLISTBYREWARDS_OFFSET UNITYSDK_OFFSET(0x16C61470)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_1_OFFSET UNITYSDK_OFFSET(0x16C60B30)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0x16C38C60)
#define RPG_CLIENT_ITEMFACTORY_CREATERELICITEMDATA_OFFSET UNITYSDK_OFFSET(0x16C48280)
#define RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTID_OFFSET UNITYSDK_OFFSET(0x16C623F0)
#define RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTRSP_OFFSET UNITYSDK_OFFSET(0x16C62520)
#define RPG_CLIENT_ITEMFACTORY_MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x16C61E30)
#define RPG_CLIENT_ITEMFACTORY_MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x16C604D0)
#define RPG_CLIENT_ITEMFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C629A0)
#define RPG_CLIENT_ITEMFACTORY__CREATEDEFAULTITEMDATA_OFFSET UNITYSDK_OFFSET(0x16C60AD0)
#define RPG_CLIENT_ITEMFACTORY__CREATEPHONECASEITEMDATA_OFFSET UNITYSDK_OFFSET(0x16C60A90)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemFactory_TypeDefinitionIndex = 62794;

	class ItemFactory : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__ExpItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ItemFactory_TypeDefinitionIndex)->GetStaticField(0x8A90);
		}
		static ::System::UInt32* StaticGet__GoldItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ItemFactory_TypeDefinitionIndex)->GetStaticField(0x8A94);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateDisplayItemDatasByRewards(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATASBYREWARDS_OFFSET))(a1);
		}

		static ::RPG::Client::ItemDisplayData* CreateDisplayItemData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Boolean a6)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::ItemDisplayData* CreateDisplayItemData_1(::Proto::Item* a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::Proto::Item*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_1_OFFSET))(a1);
		}

		static ::RPG::Client::ItemData* CreateItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_OFFSET))(a1);
		}

		static ::RPG::Client::ItemData* CreateItemData_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::EquipmentItemData* CreateEquipmentItemData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEEQUIPMENTITEMDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RelicItemData* CreateRelicItemData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RelicItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATERELICITEMDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::AetherSkillCoreItemData* CreateAetherSkillCoreItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherSkillCoreItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEAETHERSKILLCOREITEMDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateDisplayItemDataFromReward(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARD_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateDisplayItemDataFromRewards(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* MergeItemDisplayDatasIfPlayerMaxLevel(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* CreateItemConfigListByRewards(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_CREATEITEMCONFIGLISTBYREWARDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* MergeItemConfigListIfPlayerMaxLevel(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItemDisplayListByQuestID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItemDisplayListByQuestRsp(::Proto::TakeQuestRewardScRsp* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::Proto::TakeQuestRewardScRsp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTRSP_OFFSET))(a1);
		}

		static ::RPG::Client::ItemData* _CreateDefaultItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY__CREATEDEFAULTITEMDATA_OFFSET))(a1);
		}

		static ::RPG::Client::ItemData* _CreatePhoneCaseItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY__CREATEPHONECASEITEMDATA_OFFSET))(a1);
		}
	};
}
