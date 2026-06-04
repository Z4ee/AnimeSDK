#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfProgressAttributeData; }
namespace RPG::Client { class ElfProgressAttributesCluster; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB8C8300)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASECUSTOMERNUMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C8CB0)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASEDRINKCHANCEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C9E20)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASEEATINGSPEEDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C8F80)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASEOPERATIONTIMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C9740)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASETIPCHANCEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C95F0)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECURRENTDRINKCHANCEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C9F30)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECURRENTEATINGSPEEDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C9080)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECURRENTOPERATIONTIMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C9830)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECUSTOMEREATINGSPEEDCLUSTER_OFFSET UNITYSDK_OFFSET(0xB8C86A0)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECUSTOMERNUMBERCLUSTER_OFFSET UNITYSDK_OFFSET(0xB8C8440)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEDRINKCLUSTER_OFFSET UNITYSDK_OFFSET(0xB8C9920)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEFACILITYCUSTOMERNUMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB8C8EC0)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATERESTAURANTOPERATIONTIMECLUSTER_OFFSET UNITYSDK_OFFSET(0xB8C87F0)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATETIPCHANCECLUSTER_OFFSET UNITYSDK_OFFSET(0xB8C93B0)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C83D0)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__GETATTRIBUTESSUM_OFFSET UNITYSDK_OFFSET(0xB8C8B70)
#define RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB8C8AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressAttributesInfo_TypeDefinitionIndex = 59640;

	class ElfProgressAttributesInfo : public ::System::Object
	{
	public:
		// static const ::System::String* _TotalCustomerNumber; // 0x0
		// static const ::System::String* _BaseCustomerNumber; // 0x0
		// static const ::System::String* _CustomerNumberAddByFacility; // 0x0
		// static const ::System::String* _CurrentEatingSpeed; // 0x0
		// static const ::System::String* _BaseEatingSpeed; // 0x0
		// static const ::System::String* _CurrentTipChance; // 0x0
		// static const ::System::String* _BaseTipChance; // 0x0
		// static const ::System::String* _CurrentTipPercentage; // 0x0
		// static const ::System::String* _BaseTipPercentage; // 0x0
		// static const ::System::String* _CurrentOperationTime; // 0x0
		// static const ::System::String* _BaseOperationTime; // 0x0
		// static const ::System::String* _DrinkRelatedAttributes; // 0x0
		// static const ::System::String* _CurrentDrinkChance; // 0x0
		// static const ::System::String* _CurrentDrinkPrice; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::ElfProgressAttributesCluster*>* Clusters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfProgressAttributesInfo* Create()
		{
			return ((::RPG::Client::ElfProgressAttributesInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO_CREATE_OFFSET))();
		}

		::RPG::GameCore::ElfRestaurantGameConfig* _GetConfig()
		{
			return ((::RPG::GameCore::ElfRestaurantGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__GETCONFIG_OFFSET))(this);
		}

		::System::Single _GetAttributesSum(::System::Collections::Generic::List_1<::RPG::Client::ElfProgressAttributeData*>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfProgressAttributeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__GETATTRIBUTESSUM_OFFSET))(this, a1);
		}

		::System::Void _CreateCustomerNumberCluster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECUSTOMERNUMBERCLUSTER_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateBaseCustomerNumberAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASECUSTOMERNUMBERATTRIBUTE_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateFacilityCustomerNumberAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEFACILITYCUSTOMERNUMBERATTRIBUTE_OFFSET))(this);
		}

		::System::Void _CreateCustomerEatingSpeedCluster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECUSTOMEREATINGSPEEDCLUSTER_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateBaseEatingSpeedAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASEEATINGSPEEDATTRIBUTE_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateCurrentEatingSpeedAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECURRENTEATINGSPEEDATTRIBUTE_OFFSET))(this);
		}

		::System::Void _CreateTipChanceCluster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATETIPCHANCECLUSTER_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateBaseTipChanceAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASETIPCHANCEATTRIBUTE_OFFSET))(this);
		}

		::System::Void _CreateRestaurantOperationTimeCluster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATERESTAURANTOPERATIONTIMECLUSTER_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateBaseOperationTimeAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASEOPERATIONTIMEATTRIBUTE_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateCurrentOperationTimeAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECURRENTOPERATIONTIMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void _CreateDrinkCluster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEDRINKCLUSTER_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateBaseDrinkChanceAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATEBASEDRINKCHANCEATTRIBUTE_OFFSET))(this);
		}

		::RPG::Client::ElfProgressAttributeData* _CreateCurrentDrinkChanceAttribute()
		{
			return ((::RPG::Client::ElfProgressAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESINFO__CREATECURRENTDRINKCHANCEATTRIBUTE_OFFSET))(this);
		}
	};
}
