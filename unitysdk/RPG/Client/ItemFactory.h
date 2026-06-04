#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60584408B993C332;
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

#define RPG_CLIENT_ITEMFACTORY_CREATEAETHERSKILLCOREITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD4C7F0)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARDS_OFFSET UNITYSDK_OFFSET(0xBD4AA60)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATAFROMREWARD_OFFSET UNITYSDK_OFFSET(0xBD66640)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0xBD51490)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_1_OFFSET UNITYSDK_OFFSET(0xBD4BA00)
#define RPG_CLIENT_ITEMFACTORY_CREATEDISPLAYITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD53810)
#define RPG_CLIENT_ITEMFACTORY_CREATEEQUIPMENTITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD66590)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMCONFIGLISTBYREWARDS_OFFSET UNITYSDK_OFFSET(0xBD66C90)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_1_OFFSET UNITYSDK_OFFSET(0xBD66370)
#define RPG_CLIENT_ITEMFACTORY_CREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD428E0)
#define RPG_CLIENT_ITEMFACTORY_CREATERELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD50330)
#define RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTID_OFFSET UNITYSDK_OFFSET(0xBD67A70)
#define RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTRSP_OFFSET UNITYSDK_OFFSET(0xBD67B40)
#define RPG_CLIENT_ITEMFACTORY_MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xBD674B0)
#define RPG_CLIENT_ITEMFACTORY_MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xBD65D00)
#define RPG_CLIENT_ITEMFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD67E70)
#define RPG_CLIENT_ITEMFACTORY__CREATEDEFAULTITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD66310)
#define RPG_CLIENT_ITEMFACTORY__CREATEPHONECASEITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD662D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemFactory_TypeDefinitionIndex = 61447;

	class ItemFactory : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__GoldItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ItemFactory_TypeDefinitionIndex)->GetStaticField(0xC9D0);
		}
		static ::System::UInt32* StaticGet__ExpItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ItemFactory_TypeDefinitionIndex)->GetStaticField(0xC9D4);
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

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItemDisplayListByQuestRsp(::Class_1_60584408B993C332* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::Class_1_60584408B993C332*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY_GETREWARDITEMDISPLAYLISTBYQUESTRSP_OFFSET))(a1);
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
