#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0xA5E7A80)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_ISONLINEDATA_OFFSET UNITYSDK_OFFSET(0xA5E7AE0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_PERCENTAGE_OFFSET UNITYSDK_OFFSET(0xA5E7AC0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_SETIDS_OFFSET UNITYSDK_OFFSET(0xA5E7AA0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_GUIDEID_OFFSET UNITYSDK_OFFSET(0xA5E7A90)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_ISONLINEDATA_OFFSET UNITYSDK_OFFSET(0xA5E7AF0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_PERCENTAGE_OFFSET UNITYSDK_OFFSET(0xA5E7AD0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_SETIDS_OFFSET UNITYSDK_OFFSET(0xA5E7AB0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E7900)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideEquipmentDataItem_TypeDefinitionIndex = 60420;

	class HandbookGrowthGuideEquipmentDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SetIDs_k__BackingField; // 0x10
		::System::Boolean _IsOnlineData_k__BackingField; // 0x18
		::System::Single _Percentage_k__BackingField; // 0x1C
		::System::UInt32 _GuideID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 guideID, ::System::Collections::Generic::List_1<::System::UInt32>* setIDs, ::System::Single percentage, ::System::Boolean isOnlineData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM__CTOR_OFFSET))(this, guideID, setIDs, percentage, isOnlineData);
		}

		::System::UInt32 get_GuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_GUIDEID_OFFSET))(this);
		}

		::System::Void set_GuideID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_GUIDEID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SetIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_SETIDS_OFFSET))(this);
		}

		::System::Void set_SetIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_SETIDS_OFFSET))(this, value);
		}

		::System::Single get_Percentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_PERCENTAGE_OFFSET))(this);
		}

		::System::Void set_Percentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_PERCENTAGE_OFFSET))(this, value);
		}

		::System::Boolean get_IsOnlineData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_ISONLINEDATA_OFFSET))(this);
		}

		::System::Void set_IsOnlineData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_ISONLINEDATA_OFFSET))(this, value);
		}
	};
}
