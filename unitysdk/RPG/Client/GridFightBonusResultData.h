#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19E8636AE6D65360_1;
class Class_1_4BC858D7C27E10ED_32;
class Class_1_8844A4E6AE686D5C_4;
class Class_1_B1FF62FAE312BC49_5;
class Class_1_D17272E82AE804C2_402;
class Class_1_D1E0AD3915BCCF29_40;
class Class_1_D2C0A39018B2EAE4;
class Class_1_EB91F58AEEF3F578_2;
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xBAF9ED0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_GET_HASBONUS_OFFSET UNITYSDK_OFFSET(0xBAFA790)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF9170)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF9250)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF9350)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET UNITYSDK_OFFSET(0xBAF9DE0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF8610)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF9910)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF9B60)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF93A0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET UNITYSDK_OFFSET(0xBAF8580)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET UNITYSDK_OFFSET(0xBAF9800)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_POPUPEXPERTROLE_OFFSET UNITYSDK_OFFSET(0xBAFA5D0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xBAFA280)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xBAF8080)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET UNITYSDK_OFFSET(0xBAFA4D0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE3C40)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0xBAF8350)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusResultData_TypeDefinitionIndex = 60213;

	class GridFightBonusResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* EquipItemList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* OrbList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>* PresentList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* RoleItemList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* NonExpertRoleList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* AddEquipItemList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusConsumableItemData*>* ConsumableItemList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* UnlockExpertRoleList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeItemData*>* ForgeItemList; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockedExpertRoleIDList; // 0x58
		::System::Int32 LevelAdd; // 0x60
		::System::Int32 FreeRefresh; // 0x64
		::System::UInt32 Exp; // 0x68
		::System::Int32 ExpAdd; // 0x6C
		::System::Int32 Coin; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_EB91F58AEEF3F578_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void HandleUnlockExpert(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET))(this, a1);
		}

		::System::Void HandleItemUpdate(::Class_1_8844A4E6AE686D5C_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleCoinUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleExpAndLevelUpdate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void HandleExpUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleRoleUpdate(::Class_1_B1FF62FAE312BC49_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleUpdateShop(::Class_1_19E8636AE6D65360_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_19E8636AE6D65360_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void HandleOrbUpdate(::Class_1_D17272E82AE804C2_402* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_402*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandlePresentUpdate(::Class_1_D1E0AD3915BCCF29_40* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleForgeAdd(::Class_1_4BC858D7C27E10ED_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET))(this);
		}

		::System::Boolean _CheckHasBounus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET))(this);
		}

		::System::Void _HandleUpdate(::Class_1_D2C0A39018B2EAE4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET))(this, a1);
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
