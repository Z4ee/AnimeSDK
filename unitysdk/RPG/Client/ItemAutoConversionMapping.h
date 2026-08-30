#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FC8BF52F067E8047;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class PileItem; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_CREATE_OFFSET UNITYSDK_OFFSET(0x194E32D0)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_GET_SOURCEITEM_OFFSET UNITYSDK_OFFSET(0x194E3250)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_GET_TARGETITEMS_OFFSET UNITYSDK_OFFSET(0x194E3290)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_ISTARGETITEMSCONTAINCONVERSIONED_OFFSET UNITYSDK_OFFSET(0x194E3910)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATESOURCEITEM_OFFSET UNITYSDK_OFFSET(0x194E33D0)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATETARGETITEMS_OFFSET UNITYSDK_OFFSET(0x194E3460)
#define RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x194E3390)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemAutoConversionMapping_TypeDefinitionIndex = 65756;

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

		static ::RPG::Client::ItemAutoConversionMapping* Create(::Class_1_FC8BF52F067E8047* a1)
		{
			return ((::RPG::Client::ItemAutoConversionMapping*(*)(::Class_1_FC8BF52F067E8047*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_CREATE_OFFSET))(a1);
		}

		::System::Void _CreateSourceItem(::Proto::PileItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATESOURCEITEM_OFFSET))(this, a1);
		}

		::System::Void _CreateTargetItems(::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING__CREATETARGETITEMS_OFFSET))(this, a1);
		}

		::System::Boolean IsTargetItemsContainConversioned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONMAPPING_ISTARGETITEMSCONTAINCONVERSIONED_OFFSET))(this);
		}
	};
}
