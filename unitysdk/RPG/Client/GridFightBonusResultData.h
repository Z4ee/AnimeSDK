#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19E8636AE6D65360;
class Class_1_4BC858D7C27E10ED_31;
class Class_1_B1FF62FAE312BC49_4;
class Class_1_D17272E82AE804C2_389;
class Class_1_D1E0AD3915BCCF29_38;
class Class_1_EB91F58AEEF3F578_1;
class Class_1_F95E70757E85280D;
class Class_1_FE6CD7C4A65B646F_4;
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA45D680)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_GET_HASBONUS_OFFSET UNITYSDK_OFFSET(0xA45DF00)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET UNITYSDK_OFFSET(0xA45CCA0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET UNITYSDK_OFFSET(0xA45CD80)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET UNITYSDK_OFFSET(0xA45CE80)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET UNITYSDK_OFFSET(0xA45D5F0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA45BF60)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET UNITYSDK_OFFSET(0xA45D2A0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET UNITYSDK_OFFSET(0xA45D420)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET UNITYSDK_OFFSET(0xA45CED0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET UNITYSDK_OFFSET(0xA45BF00)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET UNITYSDK_OFFSET(0xA45D180)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_POPUPEXPERTROLE_OFFSET UNITYSDK_OFFSET(0xA45DD70)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA45DA30)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA45BA00)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET UNITYSDK_OFFSET(0xA45DC70)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA447340)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0xA45BCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusResultData_TypeDefinitionIndex = 59278;

	class GridFightBonusResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* UnlockExpertRoleList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusConsumableItemData*>* ConsumableItemList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* NonExpertRoleList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* OrbList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* AddEquipItemList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeItemData*>* ForgeItemList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>* PresentList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* EquipItemList; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockedExpertRoleIDList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* RoleItemList; // 0x58
		::System::Int32 FreeRefresh; // 0x60
		::System::UInt32 Exp; // 0x64
		::System::Int32 ExpAdd; // 0x68
		::System::Int32 LevelAdd; // 0x6C
		::System::Int32 Coin; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_EB91F58AEEF3F578_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET))(this, notify);
		}

		::System::Void HandleUnlockExpert(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET))(this, id);
		}

		::System::Void HandleItemUpdate(::Class_1_FE6CD7C4A65B646F_4* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET))(this, update);
		}

		::System::Void HandleCoinUpdate(::System::UInt32 coin)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET))(this, coin);
		}

		::System::Void HandleExpAndLevelUpdate(::System::UInt32 level, ::System::UInt32 exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET))(this, level, exp);
		}

		::System::Void HandleExpUpdate(::System::UInt32 exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET))(this, exp);
		}

		::System::Void HandleRoleUpdate(::Class_1_B1FF62FAE312BC49_4* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET))(this, role);
		}

		::System::Void HandleUpdateShop(::Class_1_19E8636AE6D65360* shopUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_19E8636AE6D65360*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET))(this, shopUpdate);
		}

		::System::Void HandleOrbUpdate(::Class_1_D17272E82AE804C2_389* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_389*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET))(this, update);
		}

		::System::Void HandlePresentUpdate(::Class_1_D1E0AD3915BCCF29_38* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET))(this, update);
		}

		::System::Void HandleForgeAdd(::Class_1_4BC858D7C27E10ED_31* forgeAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET))(this, forgeAdd);
		}

		::System::Void CopyFrom(::RPG::Client::GridFightBonusResultData* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET))(this, other);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET))(this);
		}

		::System::Boolean _CheckHasBounus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET))(this);
		}

		::System::Void _HandleUpdate(::Class_1_F95E70757E85280D* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F95E70757E85280D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET))(this, update);
		}

		::RPG::Client::GridFightRole* PopupExpertRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_POPUPEXPERTROLE_OFFSET))(this);
		}

		::System::Boolean get_HasBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_GET_HASBONUS_OFFSET))(this);
		}
	};
}
