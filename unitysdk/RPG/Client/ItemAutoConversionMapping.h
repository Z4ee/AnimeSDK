#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87B6445D24FE4E47;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class PileItem; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_CREATE_OFFSET UNITYSDK_OFFSET(0xA654B90)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_GET_SOURCEITEM_OFFSET UNITYSDK_OFFSET(0xA654B70)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_GET_TARGETITEMS_OFFSET UNITYSDK_OFFSET(0xA654B80)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_ISTARGETITEMSCONTAINCONVERSIONED_OFFSET UNITYSDK_OFFSET(0xA655030)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATESOURCEITEM_OFFSET UNITYSDK_OFFSET(0xA654C70)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATETARGETITEMS_OFFSET UNITYSDK_OFFSET(0xA654D00)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xA654C30)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemAutoConversionMapping_TypeDefinitionIndex = 60492;

	class ItemAutoConversionMapping : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _TargetItems; // 0x10
		::RPG::Client::ItemDisplayData* _SourceItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CTOR_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* get_SourceItem()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_GET_SOURCEITEM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemDisplayData*>* get_TargetItems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_GET_TARGETITEMS_OFFSET))(this);
		}

		static ::RPG::Client::ItemAutoConversionMapping* Create(::Class_1_87B6445D24FE4E47* transfer)
		{
			return ((::RPG::Client::ItemAutoConversionMapping*(*)(::Class_1_87B6445D24FE4E47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_CREATE_OFFSET))(transfer);
		}

		::System::Void _CreateSourceItem(::Proto::PileItem* sourceItem)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATESOURCEITEM_OFFSET))(this, sourceItem);
		}

		::System::Void _CreateTargetItems(::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* targetItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATETARGETITEMS_OFFSET))(this, targetItemList);
		}

		::System::Boolean IsTargetItemsContainConversioned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_ISTARGETITEMSCONTAINCONVERSIONED_OFFSET))(this);
		}
	};
}
