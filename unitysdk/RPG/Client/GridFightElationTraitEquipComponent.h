#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
class Class_0_16E4307DCC419505_740;
class Class_1_D17272E82AE804C2_10;
class Class_1_D6F5DD2AE63C8990;
namespace RPG::Client { class GridFightEquipCraftCombination; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace RPG::GameCore { class GridFightTraitElationTemplateConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CANCRAFTTO_OFFSET UNITYSDK_OFFSET(0xA4755C0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CRAFTTO_OFFSET UNITYSDK_OFFSET(0xA4761B0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTEDEQUIP_OFFSET UNITYSDK_OFFSET(0xA476110)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTTOCOMBINATION_OFFSET UNITYSDK_OFFSET(0xA476490)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCURENABLERECIPE_OFFSET UNITYSDK_OFFSET(0xA476B00)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETEQUIPCONFIGS_OFFSET UNITYSDK_OFFSET(0xA477960)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETRECOMMENDS_OFFSET UNITYSDK_OFFSET(0xA474D90)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETUNLOCKNEEDLAYER_OFFSET UNITYSDK_OFFSET(0xA475460)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_BASICEQUIPCONFIGS_OFFSET UNITYSDK_OFFSET(0xA4769E0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA474EE0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_HASOCCUPIED_OFFSET UNITYSDK_OFFSET(0xA474F30)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xA475050)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA4772A0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_PRIMARYRECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xA474EA0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_SECONDARYRECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xA474EC0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET__DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xA477D40)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_HASCRAFTABLE_OFFSET UNITYSDK_OFFSET(0xA4751C0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_INITCONFIG_OFFSET UNITYSDK_OFFSET(0xA477480)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISCRAFTED_OFFSET UNITYSDK_OFFSET(0xA4753C0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0xA474FA0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA475280)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_SETUPTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xA477430)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA477600)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA477DA0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xA477B40)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETNEEDEQUIPID_OFFSET UNITYSDK_OFFSET(0xA475910)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETOCCUPYNEEDEQUIPID_OFFSET UNITYSDK_OFFSET(0xA475D80)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETRECOMMEND_OFFSET UNITYSDK_OFFSET(0xA474AC0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__UPDATE_B__24_3_OFFSET UNITYSDK_OFFSET(0xA477E40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipComponent_TypeDefinitionIndex = 60182;

	class GridFightElationTraitEquipComponent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _CurCraftedEquips; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _CraftedEquips; // 0x18
		::RPG::GameCore::GridFightTraitElationTemplateConfigRow* _ConfigRow; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _BasicEquipConfigs; // 0x28
		::RPG::Client::GridFightTraitElationEffect* _Effect; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_740* _GetRecommend(::Il2CppArray<::System::UInt32>* recommendEquipIDs, ::System::String* recommendTitle, ::System::Boolean canTrack)
		{
			return ((::Class_0_16E4307DCC419505_740*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETRECOMMEND_OFFSET))(this, recommendEquipIDs, recommendTitle, canTrack);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_740*>* GetRecommends()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_740*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETRECOMMENDS_OFFSET))(this);
		}

		::System::Int32 get_EquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasOccupied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_HASOCCUPIED_OFFSET))(this);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_ISFULL_OFFSET))(this);
		}

		::System::Boolean HasCraftable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_HASCRAFTABLE_OFFSET))(this);
		}

		::System::Boolean IsUnlock(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISUNLOCK_OFFSET))(this, index);
		}

		::System::Boolean IsOccupied(::System::Int32 slotIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISOCCUPIED_OFFSET))(this, slotIndex);
		}

		::System::Boolean IsCrafted(::System::Int32 slotIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISCRAFTED_OFFSET))(this, slotIndex);
		}

		::System::UInt32 GetUnlockNeedLayer(::System::UInt32 slotIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETUNLOCKNEEDLAYER_OFFSET))(this, slotIndex);
		}

		::System::Boolean CanCraftTo(::System::Int32 slotIndex, ::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CANCRAFTTO_OFFSET))(this, slotIndex, equipID);
		}

		::System::Void CraftTo(::System::Int32 slotIndex, ::System::UInt32 targetEquipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CRAFTTO_OFFSET))(this, slotIndex, targetEquipID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetCraftToCombination(::System::Int32 slotIndex, ::System::UInt32 equipID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTTOCOMBINATION_OFFSET))(this, slotIndex, equipID);
		}

		::System::UInt32 _GetNeedEquipID(::System::Int32 index, ::System::UInt32 targetEquipID, ::RPG::Client::GridFightEquipCraftRecipe*& targetRecipe)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETNEEDEQUIPID_OFFSET))(this, index, targetEquipID, targetRecipe);
		}

		::System::UInt32 _GetOccupyNeedEquipID(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETOCCUPYNEEDEQUIPID_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetCurEnableRecipe(::System::Int32 slotIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCURENABLERECIPE_OFFSET))(this, slotIndex);
		}

		::RPG::Client::GridFightEquipItemConfig* GetCraftedEquip(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTEDEQUIP_OFFSET))(this, index);
		}

		::RPG::Client::GridFightEquipItemData* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void SetupTraitEffect(::RPG::Client::GridFightTraitElationEffect* effect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_SETUPTRAITEFFECT_OFFSET))(this, effect);
		}

		::System::Void InitConfig(::System::UInt32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_INITCONFIG_OFFSET))(this, templateID);
		}

		::System::Void Update(::Class_1_D6F5DD2AE63C8990* elationEffect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6F5DD2AE63C8990*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_UPDATE_OFFSET))(this, elationEffect);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetEquipConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETEQUIPCONFIGS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _GetEquipByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETEQUIPBYUID_OFFSET))(this, uid);
		}

		::Il2CppArray<::System::UInt32>* get_PrimaryRecommendEquips()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_PRIMARYRECOMMENDEQUIPS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SecondaryRecommendEquips()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_SECONDARYRECOMMENDEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* get_BasicEquipConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_BASICEQUIPCONFIGS_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_722* get__DataContext()
		{
			return ((::Class_0_16E4307DCC419505_722*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET__DATACONTEXT_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _Update_b__24_3(::Class_1_D17272E82AE804C2_10* x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__UPDATE_B__24_3_OFFSET))(this, x);
		}
	};
}
