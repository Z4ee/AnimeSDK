#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAddItemSourceType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_734;
class Class_1_1C706860DB902897_1;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHackEquipEffect; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0xA485A30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xA482520)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0xA47D300)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA4860C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANBEROLL_OFFSET UNITYSDK_OFFSET(0xA486020)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xA4860E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA4860D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HACKEFFECT_OFFSET UNITYSDK_OFFSET(0xA486160)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HASOWNER_OFFSET UNITYSDK_OFFSET(0xA477F20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA485FE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA485FA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xA486000)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SPECIALDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0xA486100)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA485FC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_REMOVEEQUIPPED_OFFSET UNITYSDK_OFFSET(0xA47BD70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SETEQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA47B440)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA485E80)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xA4860F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA485F10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_HACKEFFECT_OFFSET UNITYSDK_OFFSET(0xA486170)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA485FF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA485FB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xA486010)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA485FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA482390)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA46C7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipItemData_TypeDefinitionIndex = 59821;

	class GridFightEquipItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		// static const ::System::UInt32 TraitEffectAddItemSourceType = 0x6; // 0x0
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _AdditionalProperties; // 0x18
		::RPG::Client::GridFightEquipItemConfig* _EquipItemConfig_k__BackingField; // 0x20
		::Class_0_16E4307DCC419505_734* _SpecialDisplayParamProvider; // 0x28
		::RPG::Client::GridFightHackEquipEffect* _HackEffect_k__BackingField; // 0x30
		::RPG::GameCore::GridFightAddItemSourceType _SourceType_k__BackingField; // 0x38
		::System::Boolean _IsTemporary_k__BackingField; // 0x3C
		::System::UInt32 _ItemID_k__BackingField; // 0x40
		::System::UInt32 _UniqueID_k__BackingField; // 0x44
		::System::UInt32 _EquippedUniqueID; // 0x48

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__CTOR_OFFSET))(this, itemID);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateFromServer(::Class_1_1C706860DB902897_1* equip)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMSERVER_OFFSET))(equip);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateFromBattle(::RPG::GameCore::BattleGridFightEquipData* battleEquipData)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMBATTLE_OFFSET))(battleEquipData);
		}

		::System::Void Sync(::Class_1_1C706860DB902897_1* equip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SYNC_OFFSET))(this, equip);
		}

		::System::Void SetEquippedUniqueID(::System::UInt32 equippedUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SETEQUIPPEDUNIQUEID_OFFSET))(this, equippedUniqueID);
		}

		::System::Void RemoveEquipped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_REMOVEEQUIPPED_OFFSET))(this);
		}

		::System::UInt32 GetEffectTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETEFFECTTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsTemporary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISTEMPORARY_OFFSET))(this);
		}

		::System::Void set_IsTemporary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISTEMPORARY_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightAddItemSourceType get_SourceType()
		{
			return ((::RPG::GameCore::GridFightAddItemSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::RPG::GameCore::GridFightAddItemSourceType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SOURCETYPE_OFFSET))(this, value);
		}

		::System::Boolean get_CanBeRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANBEROLL_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_AdditionalProperties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ADDITIONALPROPERTIES_OFFSET))(this);
		}

		::System::Void set_AdditionalProperties(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ADDITIONALPROPERTIES_OFFSET))(this, value);
		}

		::System::Boolean get_HasOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HASOWNER_OFFSET))(this);
		}

		::System::UInt32 get_EquippedUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPPEDUNIQUEID_OFFSET))(this);
		}

		::System::Void set_EquippedUniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPPEDUNIQUEID_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipItemConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPITEMCONFIG_OFFSET))(this);
		}

		::System::Void set_EquipItemConfig(::RPG::Client::GridFightEquipItemConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPITEMCONFIG_OFFSET))(this, value);
		}

		::System::UInt32 get_SpecialDisplayParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SPECIALDISPLAYPARAM_OFFSET))(this);
		}

		::RPG::Client::GridFightHackEquipEffect* get_HackEffect()
		{
			return ((::RPG::Client::GridFightHackEquipEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HACKEFFECT_OFFSET))(this);
		}

		::System::Void set_HackEffect(::RPG::Client::GridFightHackEquipEffect* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHackEquipEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_HACKEFFECT_OFFSET))(this, value);
		}
	};
}
