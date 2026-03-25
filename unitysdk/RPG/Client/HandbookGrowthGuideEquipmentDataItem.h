#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x98FC900)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_ISONLINEDATA_OFFSET UNITYSDK_OFFSET(0x98FC960)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_PERCENTAGE_OFFSET UNITYSDK_OFFSET(0x98FC940)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_GET_SETIDS_OFFSET UNITYSDK_OFFSET(0x98FC920)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x98FC910)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_ISONLINEDATA_OFFSET UNITYSDK_OFFSET(0x98FC970)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_PERCENTAGE_OFFSET UNITYSDK_OFFSET(0x98FC950)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM_SET_SETIDS_OFFSET UNITYSDK_OFFSET(0x98FC930)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x98FC780)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideEquipmentDataItem_TypeDefinitionIndex = 53287;

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
