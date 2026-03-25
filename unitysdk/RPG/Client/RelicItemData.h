#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_120319518E6F6581_1;
class Class_1_480B0694AFC52359;
class Class_1_56410FBEF89611C1;
class Class_1_8064EBA28E797250;
class Class_1_8064EBA28E797250_1;
class Class_1_E14A0A1A8B1F847C_3;
namespace RPG::Client { class RelicLevelUpBeforeData; }
namespace RPG::Client { class RelicShowPropertyData; }
namespace RPG::GameCore { class RelicConfigRow; }
namespace RPG::GameCore { class RelicDataInfoRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICITEMDATA_CALCULATEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xA2A4660)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELICFORREFORGE_OFFSET UNITYSDK_OFFSET(0xA2A5D50)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_1_OFFSET UNITYSDK_OFFSET(0xA29D670)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_2_OFFSET UNITYSDK_OFFSET(0xA2A3D80)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_3_OFFSET UNITYSDK_OFFSET(0xA2A3E70)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_OFFSET UNITYSDK_OFFSET(0xA2A3C40)
#define RPG_CLIENT_RELICITEMDATA_GETALLPROPERTYDATALIST_OFFSET UNITYSDK_OFFSET(0xA2A5430)
#define RPG_CLIENT_RELICITEMDATA_GETMAINAFFIXPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xA2A43D0)
#define RPG_CLIENT_RELICITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xA2A44D0)
#define RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXIDBYPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2A5200)
#define RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xA2A4420)
#define RPG_CLIENT_RELICITEMDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xA2A5BC0)
#define RPG_CLIENT_RELICITEMDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xA2A5B40)
#define RPG_CLIENT_RELICITEMDATA_GET_ISDISCARD_OFFSET UNITYSDK_OFFSET(0xA2A5BA0)
#define RPG_CLIENT_RELICITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xA2A5B80)
#define RPG_CLIENT_RELICITEMDATA_GET_LEVELUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xA2A5C60)
#define RPG_CLIENT_RELICITEMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA2A5B60)
#define RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0xA2A5BE0)
#define RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2A5C00)
#define RPG_CLIENT_RELICITEMDATA_GET_PREVIEWSUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xA2A5C40)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0xA2A5CA0)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXINDEX_OFFSET UNITYSDK_OFFSET(0xA2A5CC0)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0xA2A5C80)
#define RPG_CLIENT_RELICITEMDATA_GET_RELICINFOROW_OFFSET UNITYSDK_OFFSET(0xA2A5A90)
#define RPG_CLIENT_RELICITEMDATA_GET_RELICROW_OFFSET UNITYSDK_OFFSET(0xA2A5A70)
#define RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xA2A5C20)
#define RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXPROPERTYTYPEARRAY_OFFSET UNITYSDK_OFFSET(0xA2A55E0)
#define RPG_CLIENT_RELICITEMDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA2A5B20)
#define RPG_CLIENT_RELICITEMDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xA2A5BD0)
#define RPG_CLIENT_RELICITEMDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xA2A5B50)
#define RPG_CLIENT_RELICITEMDATA_SET_ISDISCARD_OFFSET UNITYSDK_OFFSET(0xA2A5BB0)
#define RPG_CLIENT_RELICITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xA2A5B90)
#define RPG_CLIENT_RELICITEMDATA_SET_LEVELUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xA2A5C70)
#define RPG_CLIENT_RELICITEMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA2A5B70)
#define RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0xA2A5BF0)
#define RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2A5C10)
#define RPG_CLIENT_RELICITEMDATA_SET_PREVIEWSUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xA2A5C50)
#define RPG_CLIENT_RELICITEMDATA_SET_REFORGEBLOCKSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0xA2A5CB0)
#define RPG_CLIENT_RELICITEMDATA_SET_REFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0xA2A5C90)
#define RPG_CLIENT_RELICITEMDATA_SET_RELICROW_OFFSET UNITYSDK_OFFSET(0xA2A5A80)
#define RPG_CLIENT_RELICITEMDATA_SET_SUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xA2A5C30)
#define RPG_CLIENT_RELICITEMDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA2A5B30)
#define RPG_CLIENT_RELICITEMDATA_SHALLOWCOPY_OFFSET UNITYSDK_OFFSET(0xA2A4160)
#define RPG_CLIENT_RELICITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA2A4270)
#define RPG_CLIENT_RELICITEMDATA__CALCULATERELICVALUE_OFFSET UNITYSDK_OFFSET(0xA2A45A0)
#define RPG_CLIENT_RELICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A3D30)
#define RPG_CLIENT_RELICITEMDATA__GETAVATARPROPERTYTYPEBYRELICAFFIX_OFFSET UNITYSDK_OFFSET(0xA2A6130)
#define RPG_CLIENT_RELICITEMDATA__GETMAINAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2A5070)
#define RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYMAINAFFIXID_OFFSET UNITYSDK_OFFSET(0xA2A4F50)
#define RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0xA2A4FE0)
#define RPG_CLIENT_RELICITEMDATA__GETSUBAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2A5310)
#define RPG_CLIENT_RELICITEMDATA__INCREMENTVERSION_OFFSET UNITYSDK_OFFSET(0xA2A5A10)
#define RPG_CLIENT_RELICITEMDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0xA2A4D30)
#define RPG_CLIENT_RELICITEMDATA__REFRESHALLPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2A46D0)
#define RPG_CLIENT_RELICITEMDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xA2A4C70)
#define RPG_CLIENT_RELICITEMDATA__REFRESHBELONGAVATARPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA2A5960)
#define RPG_CLIENT_RELICITEMDATA__REFRESHSUBAFFIXPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA2A4900)
#define RPG_CLIENT_RELICITEMDATA__SORTREFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0xA2A5F10)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicItemData_TypeDefinitionIndex = 54402;

	class RelicItemData : public ::RPG::Client::ItemData
	{
	public:
		::Il2CppArray<::Class_1_120319518E6F6581_1*>* _ReforgeSubAffixes_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* _SubAffixProperty; // 0x48
		::RPG::GameCore::RelicConfigRow* _RelicRow_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>* SubAffixBonusRecord; // 0x58
		::Il2CppArray<::Class_1_120319518E6F6581_1*>* _PreviewSubAffixList_k__BackingField; // 0x60
		::Il2CppArray<::Class_1_120319518E6F6581_1*>* _SubAffixList_k__BackingField; // 0x68
		::RPG::GameCore::RelicDataInfoRow* _RelicDataInfoRow; // 0x70
		::RPG::Client::RelicLevelUpBeforeData* _CacheBeforeData; // 0x78
		::RPG::Client::RelicLevelUpBeforeData* _LevelUpBeforeData_k__BackingField; // 0x80
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* _CacheSubPropertyTypeArray; // 0x88
		::RPG::GameCore::AvatarPropertyType _MainAffixPropertyType_k__BackingField; // 0x90
		::System::UInt32 _CurrentExp_k__BackingField; // 0x94
		::System::UInt32 _ReforgeBlockSubAffixId_k__BackingField; // 0x98
		::System::UInt32 _Version_k__BackingField; // 0x9C
		::System::UInt32 _Level_k__BackingField; // 0xA0
		::System::UInt32 _MainAffixID_k__BackingField; // 0xA4
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0xA8
		::System::Boolean _IsProtected_k__BackingField; // 0xAC
		::System::Boolean _IsDiscard_k__BackingField; // 0xAD

		::System::Void _ctor(::System::UInt32 configID, ::System::UInt32 uID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__CTOR_OFFSET))(this, configID, uID);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic(::Class_1_8064EBA28E797250* info)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_8064EBA28E797250*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_OFFSET))(info);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_1(::Class_1_8064EBA28E797250_1* info, ::System::UInt32 uid)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_8064EBA28E797250_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_1_OFFSET))(info, uid);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_2(::Class_1_56410FBEF89611C1* info)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_56410FBEF89611C1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_2_OFFSET))(info);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_3(::System::UInt32 relicID, ::System::UInt32 relicLevel, ::RPG::GameCore::AvatarPropertyType mainProperty, ::Class_1_480B0694AFC52359* subRow)
		{
			return ((::RPG::Client::RelicItemData*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::AvatarPropertyType, ::Class_1_480B0694AFC52359*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_3_OFFSET))(relicID, relicLevel, mainProperty, subRow);
		}

		::RPG::Client::RelicItemData* ShallowCopy()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SHALLOWCOPY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_3* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SYNC_OFFSET))(this, item);
		}

		::RPG::GameCore::FixPoint GetMainAffixPropertyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETMAINAFFIXPROPERTYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetSubAffixPropertyValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXPROPERTYVALUE_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETPROPERTYVALUE_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint CalculatePropertyValue(::RPG::GameCore::AvatarPropertyType type, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CALCULATEPROPERTYVALUE_OFFSET))(this, type, level);
		}

		::System::Void _RefreshAllProperty(::RPG::GameCore::AvatarPropertyType mainAffixPropertyType, ::Il2CppArray<::Class_1_120319518E6F6581_1*>* subAffixProperties)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Il2CppArray<::Class_1_120319518E6F6581_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHALLPROPERTY_OFFSET))(this, mainAffixPropertyType, subAffixProperties);
		}

		::System::Void _RefreshSubAffixProperties(::Il2CppArray<::Class_1_120319518E6F6581_1*>* subAffixProperties)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_120319518E6F6581_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHSUBAFFIXPROPERTIES_OFFSET))(this, subAffixProperties);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType _GetPropertyTypeByMainAffixID(::System::UInt32 affixID)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYMAINAFFIXID_OFFSET))(this, affixID);
		}

		::RPG::GameCore::AvatarPropertyType _GetPropertyTypeBySubAffixID(::System::UInt32 affixID)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYSUBAFFIXID_OFFSET))(this, affixID);
		}

		::System::UInt32 _GetMainAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType mainProperty)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETMAINAFFIXIDPROPERTYTYPE_OFFSET))(this, mainProperty);
		}

		::System::UInt32 GetSubAffixIdByPropertyType(::RPG::GameCore::AvatarPropertyType property)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXIDBYPROPERTYTYPE_OFFSET))(this, property);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicShowPropertyData*>* GetAllPropertyDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicShowPropertyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETALLPROPERTYDATALIST_OFFSET))(this);
		}

		::System::UInt32 _GetSubAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType property)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETSUBAFFIXIDPROPERTYTYPE_OFFSET))(this, property);
		}

		::RPG::GameCore::FixPoint _CalculateRelicValue(::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__CALCULATERELICVALUE_OFFSET))(this, level);
		}

		::System::Void _RecordData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__RECORDDATA_OFFSET))(this);
		}

		::System::Void _RefreshBelongAvatarProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHBELONGAVATARPROPERTIES_OFFSET))(this);
		}

		::System::Void _IncrementVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__INCREMENTVERSION_OFFSET))(this);
		}

		::RPG::GameCore::RelicConfigRow* get_RelicRow()
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_RELICROW_OFFSET))(this);
		}

		::System::Void set_RelicRow(::RPG::GameCore::RelicConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_RELICROW_OFFSET))(this, value);
		}

		::RPG::GameCore::RelicDataInfoRow* get_RelicInfoRow()
		{
			return ((::RPG::GameCore::RelicDataInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_RELICINFOROW_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_VERSION_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_CURRENTEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_ISPROTECTED_OFFSET))(this);
		}

		::System::Void set_IsProtected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_ISPROTECTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsDiscard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_ISDISCARD_OFFSET))(this);
		}

		::System::Void set_IsDiscard(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_ISDISCARD_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_BELONGAVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_MainAffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXID_OFFSET))(this);
		}

		::System::Void set_MainAffixID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXID_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarPropertyType get_MainAffixPropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_MainAffixPropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::Class_1_120319518E6F6581_1*>* get_SubAffixList()
		{
			return ((::Il2CppArray<::Class_1_120319518E6F6581_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXLIST_OFFSET))(this);
		}

		::System::Void set_SubAffixList(::Il2CppArray<::Class_1_120319518E6F6581_1*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_120319518E6F6581_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_SUBAFFIXLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::Class_1_120319518E6F6581_1*>* get_PreviewSubAffixList()
		{
			return ((::Il2CppArray<::Class_1_120319518E6F6581_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_PREVIEWSUBAFFIXLIST_OFFSET))(this);
		}

		::System::Void set_PreviewSubAffixList(::Il2CppArray<::Class_1_120319518E6F6581_1*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_120319518E6F6581_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_PREVIEWSUBAFFIXLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* get_SubAffixPropertyTypeArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXPROPERTYTYPEARRAY_OFFSET))(this);
		}

		::RPG::Client::RelicLevelUpBeforeData* get_LevelUpBeforeData()
		{
			return ((::RPG::Client::RelicLevelUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_LEVELUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_LevelUpBeforeData(::RPG::Client::RelicLevelUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicLevelUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_LEVELUPBEFOREDATA_OFFSET))(this, value);
		}

		::Il2CppArray<::Class_1_120319518E6F6581_1*>* get_ReforgeSubAffixes()
		{
			return ((::Il2CppArray<::Class_1_120319518E6F6581_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGESUBAFFIXES_OFFSET))(this);
		}

		::System::Void set_ReforgeSubAffixes(::Il2CppArray<::Class_1_120319518E6F6581_1*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_120319518E6F6581_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_REFORGESUBAFFIXES_OFFSET))(this, value);
		}

		::System::UInt32 get_ReforgeBlockSubAffixId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXID_OFFSET))(this);
		}

		::System::Void set_ReforgeBlockSubAffixId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_REFORGEBLOCKSUBAFFIXID_OFFSET))(this, value);
		}

		::System::Int32 get_ReforgeBlockSubAffixIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXINDEX_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* CreateDisplayRelicForReforge()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELICFORREFORGE_OFFSET))(this);
		}

		::System::Void _SortReforgeSubAffixes(::Il2CppArray<::Class_1_120319518E6F6581_1*>* reforgeSubAffixes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_120319518E6F6581_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__SORTREFORGESUBAFFIXES_OFFSET))(this, reforgeSubAffixes);
		}

		::RPG::GameCore::AvatarPropertyType _GetAvatarPropertyTypeByRelicAffix(::Class_1_120319518E6F6581_1* affix)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::Class_1_120319518E6F6581_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETAVATARPROPERTYTYPEBYRELICAFFIX_OFFSET))(this, affix);
		}
	};
}
