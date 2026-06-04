#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ERelicRecommendDataType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_777;
class Class_1_D1E0AD3915BCCF29_104;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class BigDataAvatarRelicRecommend; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendPropertyData; }
namespace RPG::Client { class RelicRecommendSubPropertyData; }
namespace RPG::Client { class RelicRecommendSuitData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICRECOMMENDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC6EDFC0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_1_OFFSET UNITYSDK_OFFSET(0xC6EDD40)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_OFFSET UNITYSDK_OFFSET(0xC6ED390)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_1_OFFSET UNITYSDK_OFFSET(0xC6EDB60)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_OFFSET UNITYSDK_OFFSET(0xC6ED220)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC6EDF40)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6E5870)
#define RPG_CLIENT_RELICRECOMMENDDATA_FILTERFORRELICSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xC6EE840)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYPERCENT_OFFSET UNITYSDK_OFFSET(0xC6EF620)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETMATCHSUBPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xC6E6060)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETSETIDPERCENT_OFFSET UNITYSDK_OFFSET(0xC6EF3F0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xC6ECC50)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISBIGDATA_OFFSET UNITYSDK_OFFSET(0xC6ECC30)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xC6ECC40)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC6ECC70)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6EF240)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTSETID_OFFSET UNITYSDK_OFFSET(0xC6EF110)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xC6EEDB0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6E65E0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSETID_OFFSET UNITYSDK_OFFSET(0xC6EEF20)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSUBPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6EECD0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHTOPNMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6EF2A0)
#define RPG_CLIENT_RELICRECOMMENDDATA_SETUPFORRELICSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xC6EE190)
#define RPG_CLIENT_RELICRECOMMENDDATA_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xC6ECC60)
#define RPG_CLIENT_RELICRECOMMENDDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xC6ED6A0)
#define RPG_CLIENT_RELICRECOMMENDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC6ECDA0)
#define RPG_CLIENT_RELICRECOMMENDDATA__CREATERECOMMENDPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xC6EE670)
#define RPG_CLIENT_RELICRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6ECD90)
#define RPG_CLIENT_RELICRECOMMENDDATA__INITSUBPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xC6ED510)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendData_TypeDefinitionIndex = 62456;

	class RelicRecommendData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EXPIRED_TIME = 0x258; // 0x0
		::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* OuterSet; // 0x10
		::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* InnerSet; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*>* PropertyDataDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendSubPropertyData*>* SubPropertyList; // 0x28
		::RPG::Client::ERelicRecommendDataType _DataType_k__BackingField; // 0x30
		::System::UInt32 _TimeStamp; // 0x34
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

		::System::Void set_DataType(::RPG::Client::ERelicRecommendDataType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ERelicRecommendDataType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SET_DATATYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		static ::RPG::Client::RelicRecommendData* Create(::RPG::GameCore::AvatarRelicRecommendRow* a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::RPG::GameCore::AvatarRelicRecommendRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Proto::BigDataAvatarRelicRecommend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void _InitSubPropertyList(::RPG::GameCore::AvatarRelicRecommendRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__INITSUBPROPERTYLIST_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicRecommendData* Create_1(::Proto::BigDataAvatarRelicRecommend* a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATE_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* CreateSuitDataArray(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* CreateSuitDataArray_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_104*>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_104*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* CreatePropertyDataArray(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* CreatePropertyDataArray_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_777*>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_777*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_1_OFFSET))(a1);
		}

		::RPG::Client::RelicRecommendData* Clone()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CLONE_OFFSET))(this);
		}

		::System::Void SetupForRelicSmartSuit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SETUPFORRELICSMARTSUIT_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* _CreateRecommendPropertyData(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__CREATERECOMMENDPROPERTYDATA_OFFSET))(this, a1);
		}

		::System::Void FilterForRelicSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_FILTERFORRELICSMARTSUIT_OFFSET))(this);
		}

		::System::Boolean IsMatchSubProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSUBPROPERTY_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchMainProperty(::RPG::Client::RelicItemData* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMatchMainProperty_1(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetMatchSubPropertyCount(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETMATCHSUBPROPERTYCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchSetID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSETID_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchFirstSetID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTSETID_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchFirstMainProperty(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTMAINPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMatchTopNMainProperty(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHTOPNMAINPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSetIDPercent(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETSETIDPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 GetMainPropertyPercent(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYPERCENT_OFFSET))(this, a1, a2);
		}
	};
}
