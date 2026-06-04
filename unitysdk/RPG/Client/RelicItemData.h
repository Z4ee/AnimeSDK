#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_333B902B2174BECA;
class Class_1_73C1DBA2BBC7D4F7;
class Class_1_A6B0B39A319DDDE2_2;
class Class_1_D1E0AD3915BCCF29_1;
class Class_1_FF220487FAB45279_3;
class Class_1_FF220487FAB45279_4;
namespace RPG::Client { class RelicLevelUpBeforeData; }
namespace RPG::Client { class RelicShowPropertyData; }
namespace RPG::GameCore { class RelicConfigRow; }
namespace RPG::GameCore { class RelicDataInfoRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICITEMDATA_CALCULATEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xC6DC7E0)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELICFORREFORGE_OFFSET UNITYSDK_OFFSET(0xC6DD2B0)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_1_OFFSET UNITYSDK_OFFSET(0xC6D4E70)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_2_OFFSET UNITYSDK_OFFSET(0xC6DBD40)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_3_OFFSET UNITYSDK_OFFSET(0xC6DBE30)
#define RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_OFFSET UNITYSDK_OFFSET(0xC6DB9C0)
#define RPG_CLIENT_RELICITEMDATA_GETALLPROPERTYDATALIST_OFFSET UNITYSDK_OFFSET(0xC6DA270)
#define RPG_CLIENT_RELICITEMDATA_GETMAINAFFIXPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xC6DC4E0)
#define RPG_CLIENT_RELICITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xC6DC530)
#define RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXIDBYPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6DCD80)
#define RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xC6DC600)
#define RPG_CLIENT_RELICITEMDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xC6DCFD0)
#define RPG_CLIENT_RELICITEMDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xC6DCF50)
#define RPG_CLIENT_RELICITEMDATA_GET_ISDISCARD_OFFSET UNITYSDK_OFFSET(0xC6DCFB0)
#define RPG_CLIENT_RELICITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xC6DCF90)
#define RPG_CLIENT_RELICITEMDATA_GET_LEVELUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC6DD1C0)
#define RPG_CLIENT_RELICITEMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC6DCF70)
#define RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0xC6DCFF0)
#define RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6DD010)
#define RPG_CLIENT_RELICITEMDATA_GET_PREVIEWSUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xC6DD050)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0xC6DD200)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXINDEX_OFFSET UNITYSDK_OFFSET(0xC6DD220)
#define RPG_CLIENT_RELICITEMDATA_GET_REFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0xC6DD1E0)
#define RPG_CLIENT_RELICITEMDATA_GET_RELICINFOROW_OFFSET UNITYSDK_OFFSET(0xC6DCEA0)
#define RPG_CLIENT_RELICITEMDATA_GET_RELICROW_OFFSET UNITYSDK_OFFSET(0xC6DCE80)
#define RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xC6DD030)
#define RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXPROPERTYTYPEARRAY_OFFSET UNITYSDK_OFFSET(0xC6DD070)
#define RPG_CLIENT_RELICITEMDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC6DCF30)
#define RPG_CLIENT_RELICITEMDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xC6DCFE0)
#define RPG_CLIENT_RELICITEMDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xC6DCF60)
#define RPG_CLIENT_RELICITEMDATA_SET_ISDISCARD_OFFSET UNITYSDK_OFFSET(0xC6DCFC0)
#define RPG_CLIENT_RELICITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xC6DCFA0)
#define RPG_CLIENT_RELICITEMDATA_SET_LEVELUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC6DD1D0)
#define RPG_CLIENT_RELICITEMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC6DCF80)
#define RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0xC6DD000)
#define RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6DD020)
#define RPG_CLIENT_RELICITEMDATA_SET_PREVIEWSUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xC6DD060)
#define RPG_CLIENT_RELICITEMDATA_SET_REFORGEBLOCKSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0xC6DD210)
#define RPG_CLIENT_RELICITEMDATA_SET_REFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0xC6DD1F0)
#define RPG_CLIENT_RELICITEMDATA_SET_RELICROW_OFFSET UNITYSDK_OFFSET(0xC6DCE90)
#define RPG_CLIENT_RELICITEMDATA_SET_SUBAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xC6DD040)
#define RPG_CLIENT_RELICITEMDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xC6DCF40)
#define RPG_CLIENT_RELICITEMDATA_SHALLOWCOPY_OFFSET UNITYSDK_OFFSET(0xC6DC2B0)
#define RPG_CLIENT_RELICITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC6D5870)
#define RPG_CLIENT_RELICITEMDATA__CALCULATERELICVALUE_OFFSET UNITYSDK_OFFSET(0xC6DC6B0)
#define RPG_CLIENT_RELICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D5820)
#define RPG_CLIENT_RELICITEMDATA__GETAVATARPROPERTYTYPEBYRELICAFFIX_OFFSET UNITYSDK_OFFSET(0xC6DD6E0)
#define RPG_CLIENT_RELICITEMDATA__GETMAINAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6DC0F0)
#define RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYMAINAFFIXID_OFFSET UNITYSDK_OFFSET(0xC6DBAB0)
#define RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0xC6DCCF0)
#define RPG_CLIENT_RELICITEMDATA__GETSUBAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6DC150)
#define RPG_CLIENT_RELICITEMDATA__INCREMENTVERSION_OFFSET UNITYSDK_OFFSET(0xC6DC3C0)
#define RPG_CLIENT_RELICITEMDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0xC6DCBB0)
#define RPG_CLIENT_RELICITEMDATA__REFRESHALLPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6DBB40)
#define RPG_CLIENT_RELICITEMDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC6DC420)
#define RPG_CLIENT_RELICITEMDATA__REFRESHSUBAFFIXPROPERTIES_OFFSET UNITYSDK_OFFSET(0xC6DC850)
#define RPG_CLIENT_RELICITEMDATA__SORTREFORGESUBAFFIXES_OFFSET UNITYSDK_OFFSET(0xC6DD470)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicItemData_TypeDefinitionIndex = 62523;

	class RelicItemData : public ::RPG::Client::ItemData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* _SubAffixProperty; // 0x40
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* _CacheSubPropertyTypeArray; // 0x48
		::RPG::GameCore::RelicConfigRow* _RelicRow_k__BackingField; // 0x50
		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* _PreviewSubAffixList_k__BackingField; // 0x58
		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* _SubAffixList_k__BackingField; // 0x60
		::RPG::GameCore::RelicDataInfoRow* _RelicDataInfoRow; // 0x68
		::RPG::Client::RelicLevelUpBeforeData* _LevelUpBeforeData_k__BackingField; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::UInt32>* SubAffixBonusRecord; // 0x78
		::RPG::Client::RelicLevelUpBeforeData* _CacheBeforeData; // 0x80
		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* _ReforgeSubAffixes_k__BackingField; // 0x88
		::System::UInt32 _CurrentExp_k__BackingField; // 0x90
		::System::UInt32 _Version_k__BackingField; // 0x94
		::System::UInt32 _MainAffixID_k__BackingField; // 0x98
		::RPG::GameCore::AvatarPropertyType _MainAffixPropertyType_k__BackingField; // 0x9C
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0xA0
		::System::UInt32 _ReforgeBlockSubAffixId_k__BackingField; // 0xA4
		::System::UInt32 _Level_k__BackingField; // 0xA8
		::System::Boolean _IsProtected_k__BackingField; // 0xAC
		::System::Boolean _IsDiscard_k__BackingField; // 0xAD

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic(::Class_1_FF220487FAB45279_3* a1)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_FF220487FAB45279_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_OFFSET))(a1);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_1(::Class_1_FF220487FAB45279_4* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_FF220487FAB45279_4*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_2(::Class_1_333B902B2174BECA* a1)
		{
			return ((::RPG::Client::RelicItemData*(*)(::Class_1_333B902B2174BECA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_2_OFFSET))(a1);
		}

		static ::RPG::Client::RelicItemData* CreateDisplayRelic_3(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::AvatarPropertyType a3, ::Class_1_73C1DBA2BBC7D4F7* a4)
		{
			return ((::RPG::Client::RelicItemData*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::AvatarPropertyType, ::Class_1_73C1DBA2BBC7D4F7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELIC_3_OFFSET))(a1, a2, a3, a4);
		}

		::RPG::Client::RelicItemData* ShallowCopy()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SHALLOWCOPY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_A6B0B39A319DDDE2_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetMainAffixPropertyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETMAINAFFIXPROPERTYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetSubAffixPropertyValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXPROPERTYVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETPROPERTYVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CalculatePropertyValue(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CALCULATEPROPERTYVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshAllProperty(::RPG::GameCore::AvatarPropertyType a1, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHALLPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshSubAffixProperties(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHSUBAFFIXPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType _GetPropertyTypeByMainAffixID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYMAINAFFIXID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType _GetPropertyTypeBySubAffixID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETPROPERTYTYPEBYSUBAFFIXID_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMainAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETMAINAFFIXIDPROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 GetSubAffixIdByPropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETSUBAFFIXIDBYPROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicShowPropertyData*>* GetAllPropertyDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicShowPropertyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GETALLPROPERTYDATALIST_OFFSET))(this);
		}

		::System::UInt32 _GetSubAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETSUBAFFIXIDPROPERTYTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _CalculateRelicValue(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__CALCULATERELICVALUE_OFFSET))(this, a1);
		}

		::System::Void _RecordData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__RECORDDATA_OFFSET))(this);
		}

		::System::Void _IncrementVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__INCREMENTVERSION_OFFSET))(this);
		}

		::RPG::GameCore::RelicConfigRow* get_RelicRow()
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_RELICROW_OFFSET))(this);
		}

		::System::Void set_RelicRow(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_RELICROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::RelicDataInfoRow* get_RelicInfoRow()
		{
			return ((::RPG::GameCore::RelicDataInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_RELICINFOROW_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_VERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_CURRENTEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_ISPROTECTED_OFFSET))(this);
		}

		::System::Void set_IsProtected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_ISPROTECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDiscard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_ISDISCARD_OFFSET))(this);
		}

		::System::Void set_IsDiscard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_ISDISCARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_BELONGAVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainAffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXID_OFFSET))(this);
		}

		::System::Void set_MainAffixID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType get_MainAffixPropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_MainAffixPropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* get_SubAffixList()
		{
			return ((::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXLIST_OFFSET))(this);
		}

		::System::Void set_SubAffixList(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_SUBAFFIXLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* get_PreviewSubAffixList()
		{
			return ((::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_PREVIEWSUBAFFIXLIST_OFFSET))(this);
		}

		::System::Void set_PreviewSubAffixList(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_PREVIEWSUBAFFIXLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* get_SubAffixPropertyTypeArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_SUBAFFIXPROPERTYTYPEARRAY_OFFSET))(this);
		}

		::RPG::Client::RelicLevelUpBeforeData* get_LevelUpBeforeData()
		{
			return ((::RPG::Client::RelicLevelUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_LEVELUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_LevelUpBeforeData(::RPG::Client::RelicLevelUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicLevelUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_LEVELUPBEFOREDATA_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* get_ReforgeSubAffixes()
		{
			return ((::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGESUBAFFIXES_OFFSET))(this);
		}

		::System::Void set_ReforgeSubAffixes(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_REFORGESUBAFFIXES_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReforgeBlockSubAffixId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXID_OFFSET))(this);
		}

		::System::Void set_ReforgeBlockSubAffixId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_SET_REFORGEBLOCKSUBAFFIXID_OFFSET))(this, a1);
		}

		::System::Int32 get_ReforgeBlockSubAffixIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_GET_REFORGEBLOCKSUBAFFIXINDEX_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* CreateDisplayRelicForReforge()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA_CREATEDISPLAYRELICFORREFORGE_OFFSET))(this);
		}

		::System::Void _SortReforgeSubAffixes(::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D1E0AD3915BCCF29_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__SORTREFORGESUBAFFIXES_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType _GetAvatarPropertyTypeByRelicAffix(::Class_1_D1E0AD3915BCCF29_1* a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA__GETAVATARPROPERTYTYPEBYRELICAFFIX_OFFSET))(this, a1);
		}
	};
}
