#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
class Class_0_16E4307DCC419505_879;
class Class_1_4D052AB586FDB247_2;
class Class_1_D17272E82AE804C2_13;
namespace RPG::Client { class GridFightEquipCraftCombination; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace RPG::GameCore { class GridFightTraitElationTemplateConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CANCRAFTTO_OFFSET UNITYSDK_OFFSET(0x1C96E7C0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CRAFTTO_OFFSET UNITYSDK_OFFSET(0x1C96F580)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTEDEQUIP_OFFSET UNITYSDK_OFFSET(0x1C96F4F0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTTOCOMBINATION_OFFSET UNITYSDK_OFFSET(0x1C96F8B0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCURENABLERECIPE_OFFSET UNITYSDK_OFFSET(0x1C96FFB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETEQUIPCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C9710F0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETRECOMMENDS_OFFSET UNITYSDK_OFFSET(0x1C96DC90)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETUNLOCKNEEDLAYER_OFFSET UNITYSDK_OFFSET(0x1C96E580)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_BASICEQUIPCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C96FE70)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C96DF60)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_HASOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1C96DFB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1C96E0C0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C970920)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_PRIMARYRECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0x1C96DEC0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_SECONDARYRECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0x1C96DF10)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET__DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1C9715E0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_HASCRAFTABLE_OFFSET UNITYSDK_OFFSET(0x1C96E260)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x1C970B70)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISCRAFTED_OFFSET UNITYSDK_OFFSET(0x1C96E4F0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1C96E020)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C96E320)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_SETUPTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1C970B20)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C970D20)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C971660)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x1C971300)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETNEEDEQUIPID_OFFSET UNITYSDK_OFFSET(0x1C96EBB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETOCCUPYNEEDEQUIPID_OFFSET UNITYSDK_OFFSET(0x1C96F080)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1C96D9B0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__UPDATE_B__24_3_OFFSET UNITYSDK_OFFSET(0x1C971700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipComponent_TypeDefinitionIndex = 65428;

	class GridFightElationTraitEquipComponent : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitElationTemplateConfigRow* _ConfigRow; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _CurCraftedEquips; // 0x18
		::RPG::Client::GridFightTraitElationEffect* _Effect; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _BasicEquipConfigs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _CraftedEquips; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_879* _GetRecommend(::Il2CppArray<::System::UInt32>* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Class_0_16E4307DCC419505_879*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETRECOMMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_879*>* GetRecommends()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_879*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETRECOMMENDS_OFFSET))(this);
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

		::System::Boolean IsUnlock(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsOccupied(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISOCCUPIED_OFFSET))(this, a1);
		}

		::System::Boolean IsCrafted(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_ISCRAFTED_OFFSET))(this, a1);
		}

		::System::UInt32 GetUnlockNeedLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETUNLOCKNEEDLAYER_OFFSET))(this, a1);
		}

		::System::Boolean CanCraftTo(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CANCRAFTTO_OFFSET))(this, a1, a2);
		}

		::System::Void CraftTo(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_CRAFTTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetCraftToCombination(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTTOCOMBINATION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetNeedEquipID(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightEquipCraftRecipe*& a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETNEEDEQUIPID_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _GetOccupyNeedEquipID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETOCCUPYNEEDEQUIPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetCurEnableRecipe(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCURENABLERECIPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* GetCraftedEquip(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETCRAFTEDEQUIP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void SetupTraitEffect(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_SETUPTRAITEFFECT_OFFSET))(this, a1);
		}

		::System::Void InitConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_INITCONFIG_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_4D052AB586FDB247_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D052AB586FDB247_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetEquipConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GETEQUIPCONFIGS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__GETEQUIPBYUID_OFFSET))(this, a1);
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

		::Class_0_16E4307DCC419505_855* get__DataContext()
		{
			return ((::Class_0_16E4307DCC419505_855*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT_GET__DATACONTEXT_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _Update_b__24_3(::Class_1_D17272E82AE804C2_13* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT__UPDATE_B__24_3_OFFSET))(this, a1);
		}
	};
}
