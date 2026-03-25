#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemVendor.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTDATA_OFFSET UNITYSDK_OFFSET(0x93A8DE0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x93A8D90)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTATTACK_OFFSET UNITYSDK_OFFSET(0x93A9380)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTHEALTH_OFFSET UNITYSDK_OFFSET(0x93A9450)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTICON_OFFSET UNITYSDK_OFFSET(0x93A9360)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x93A8C40)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_ISMULTITARGET_OFFSET UNITYSDK_OFFSET(0x93A8ED0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x93A8C90)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x93A8CE0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x93A8D00)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x93A9340)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0x93A8FA0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x93A8D40)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x93A8CC0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_VENDOR_OFFSET UNITYSDK_OFFSET(0x93A8D20)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x93A8C30)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x93A9520)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETBATTLESKILLDATA_OFFSET UNITYSDK_OFFSET(0x93A9890)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSHOPSKILLDATA_OFFSET UNITYSDK_OFFSET(0x93A9770)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSKILLDATAFORDISPLAY_OFFSET UNITYSDK_OFFSET(0x93A99B0)
#define RPG_CLIENT_CHIMERADUELITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93A95A0)
#define RPG_CLIENT_CHIMERADUELITEMDATA__TRYGETFIRSTSKILLDATA_OFFSET UNITYSDK_OFFSET(0x93A95E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemData_TypeDefinitionIndex = 51434;

	class ChimeraDuelItemData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelItemRow* __Row_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::IChimeraDuelSkillData*>* _SkillData; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA__CTOR_OFFSET))(this, id);
		}

		::RPG::GameCore::ChimeraDuelItemRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelItemType get_Type()
		{
			return ((::RPG::GameCore::ChimeraDuelItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_PRICE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelItemVendor get_Vendor()
		{
			return ((::RPG::GameCore::ChimeraDuelItemVendor(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_VENDOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLIDS_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTID_OFFSET))(this);
		}

		::Class_1_11B5C6B3FA66CD5A* get_EffectData()
		{
			return ((::Class_1_11B5C6B3FA66CD5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTDATA_OFFSET))(this);
		}

		::System::Boolean get_IsMultiTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_ISMULTITARGET_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::IChimeraDuelSkillData*>* get_SkillData()
		{
			return ((::Il2CppArray<::RPG::Client::IChimeraDuelSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLDATA_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_SHOPICON_OFFSET))(this);
		}

		::System::String* get_EquipmentIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTICON_OFFSET))(this);
		}

		::System::Int32 get_EquipmentAttack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTATTACK_OFFSET))(this);
		}

		::System::Int32 get_EquipmentHealth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTHEALTH_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelItemData* TryCreate(::System::UInt32 id)
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYCREATE_OFFSET))(id);
		}

		::RPG::Client::IChimeraDuelSkillData* _TryGetFirstSkillData(::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>* predicate)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA__TRYGETFIRSTSKILLDATA_OFFSET))(this, predicate);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetShopSkillData()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSHOPSKILLDATA_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetBattleSkillData()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETBATTLESKILLDATA_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetSkillDataForDisplay()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSKILLDATAFORDISPLAY_OFFSET))(this);
		}
	};
}
