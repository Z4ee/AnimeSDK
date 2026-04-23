#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ERelicRecommendDataType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_741;
class Class_1_D1E0AD3915BCCF29_100;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class BigDataAvatarRelicRecommend; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendPropertyData; }
namespace RPG::Client { class RelicRecommendSubPropertyData; }
namespace RPG::Client { class RelicRecommendSuitData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICRECOMMENDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xAFA61F0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_1_OFFSET UNITYSDK_OFFSET(0xAFA5FB0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_OFFSET UNITYSDK_OFFSET(0xAFA5620)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_1_OFFSET UNITYSDK_OFFSET(0xAFA5E00)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_OFFSET UNITYSDK_OFFSET(0xAFA5490)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xAFA6170)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAF9DC60)
#define RPG_CLIENT_RELICRECOMMENDDATA_FILTERFORRELICSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xAFA6A50)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYPERCENT_OFFSET UNITYSDK_OFFSET(0xAFA79E0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETMATCHSUBPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xAF9E420)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETSETIDPERCENT_OFFSET UNITYSDK_OFFSET(0xAFA7790)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xAFA4E80)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISBIGDATA_OFFSET UNITYSDK_OFFSET(0xAFA4E60)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xAFA4E70)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xAFA4EA0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xAFA75C0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTSETID_OFFSET UNITYSDK_OFFSET(0xAFA7490)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xAFA7110)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xAF9E8F0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSETID_OFFSET UNITYSDK_OFFSET(0xAFA7280)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSUBPROPERTY_OFFSET UNITYSDK_OFFSET(0xAFA7050)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHTOPNMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xAFA7620)
#define RPG_CLIENT_RELICRECOMMENDDATA_SETUPFORRELICSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xAFA63C0)
#define RPG_CLIENT_RELICRECOMMENDDATA_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xAFA4E90)
#define RPG_CLIENT_RELICRECOMMENDDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xAFA5900)
#define RPG_CLIENT_RELICRECOMMENDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAFA4FD0)
#define RPG_CLIENT_RELICRECOMMENDDATA__CREATERECOMMENDPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xAFA6870)
#define RPG_CLIENT_RELICRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA4FC0)
#define RPG_CLIENT_RELICRECOMMENDDATA__INITSUBPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xAFA57D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendData_TypeDefinitionIndex = 61523;

	class RelicRecommendData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EXPIRED_TIME = 0x258; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendSubPropertyData*>* SubPropertyList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*>* PropertyDataDict; // 0x18
		::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* InnerSet; // 0x20
		::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* OuterSet; // 0x28
		::System::UInt32 _TimeStamp; // 0x30
		::RPG::Client::ERelicRecommendDataType _DataType_k__BackingField; // 0x34
		::System::UInt32 AvatarID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_ISBIGDATA_OFFSET))(this);
		}

		::System::Boolean get_IsConfigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_ISCONFIGDATA_OFFSET))(this);
		}

		::RPG::Client::ERelicRecommendDataType get_DataType()
		{
			return ((::RPG::Client::ERelicRecommendDataType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_DataType(::RPG::Client::ERelicRecommendDataType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ERelicRecommendDataType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SET_DATATYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		static ::RPG::Client::RelicRecommendData* Create(::RPG::GameCore::AvatarRelicRecommendRow* row)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATE_OFFSET))(row);
		}

		::System::Void Sync(::RPG::GameCore::AvatarRelicRecommendRow* avatarRelicRecommendRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SYNC_OFFSET))(this, avatarRelicRecommendRow);
		}

		::System::Void Sync_1(::Proto::BigDataAvatarRelicRecommend* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SYNC_1_OFFSET))(this, rsp);
		}

		::System::Void _InitSubPropertyList(::RPG::GameCore::AvatarRelicRecommendRow* avatarRelicRecommendRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__INITSUBPROPERTYLIST_OFFSET))(this, avatarRelicRecommendRow);
		}

		static ::RPG::Client::RelicRecommendData* Create_1(::Proto::BigDataAvatarRelicRecommend* rsp)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATE_1_OFFSET))(rsp);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* CreateSuitDataArray(::Il2CppArray<::System::UInt32>* setList)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_OFFSET))(setList);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* CreateSuitDataArray_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>* setInfos)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_1_OFFSET))(setInfos);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* CreatePropertyDataArray(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* propertyTypeList)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_OFFSET))(propertyTypeList);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* CreatePropertyDataArray_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* propertyInfos)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_1_OFFSET))(propertyInfos);
		}

		::RPG::Client::RelicRecommendData* Clone()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CLONE_OFFSET))(this);
		}

		::System::Void SetupForRelicSmartSuit(::System::UInt32 avatarRealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SETUPFORRELICSMARTSUIT_OFFSET))(this, avatarRealID);
		}

		::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* _CreateRecommendPropertyData(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* propertyTypes)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__CREATERECOMMENDPROPERTYDATA_OFFSET))(this, propertyTypes);
		}

		::System::Void FilterForRelicSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_FILTERFORRELICSMARTSUIT_OFFSET))(this);
		}

		::System::Boolean IsMatchSubProperty(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSUBPROPERTY_OFFSET))(this, propertyType);
		}

		::System::Boolean IsMatchMainProperty(::RPG::Client::RelicItemData* itemData, ::System::Single ignorePercentValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_OFFSET))(this, itemData, ignorePercentValue);
		}

		::System::Boolean IsMatchMainProperty_1(::RPG::GameCore::RelicType type, ::RPG::GameCore::AvatarPropertyType propertyType, ::System::Single ignorePercentValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_1_OFFSET))(this, type, propertyType, ignorePercentValue);
		}

		::System::UInt32 GetMatchSubPropertyCount(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETMATCHSUBPROPERTYCOUNT_OFFSET))(this, itemData);
		}

		::System::Boolean IsMatchSetID(::System::UInt32 setID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSETID_OFFSET))(this, setID);
		}

		::System::Boolean IsMatchFirstSetID(::System::UInt32 setID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTSETID_OFFSET))(this, setID);
		}

		::System::Boolean IsMatchFirstMainProperty(::RPG::GameCore::RelicType relicType, ::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTMAINPROPERTY_OFFSET))(this, relicType, propertyType);
		}

		::System::Boolean IsMatchTopNMainProperty(::RPG::GameCore::RelicType relicType, ::RPG::GameCore::AvatarPropertyType propertyType, ::System::Int32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHTOPNMAINPROPERTY_OFFSET))(this, relicType, propertyType, n);
		}

		::System::UInt32 GetSetIDPercent(::System::UInt32 setID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETSETIDPERCENT_OFFSET))(this, setID);
		}

		::System::UInt32 GetMainPropertyPercent(::RPG::GameCore::RelicType type, ::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYPERCENT_OFFSET))(this, type, propertyType);
		}
	};
}
