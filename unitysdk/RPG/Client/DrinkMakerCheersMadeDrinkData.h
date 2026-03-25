#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D91A65E12C64271_1;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKDATA_OFFSET UNITYSDK_OFFSET(0x9512640)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKID_OFFSET UNITYSDK_OFFSET(0x9512620)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKPROTO_OFFSET UNITYSDK_OFFSET(0x9512660)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRUNKGROUPLIST_OFFSET UNITYSDK_OFFSET(0x9512680)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_ISMADEINMAINSTORY_OFFSET UNITYSDK_OFFSET(0x95126A0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKDATA_OFFSET UNITYSDK_OFFSET(0x9512650)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKID_OFFSET UNITYSDK_OFFSET(0x9512630)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKPROTO_OFFSET UNITYSDK_OFFSET(0x9512670)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRUNKGROUPLIST_OFFSET UNITYSDK_OFFSET(0x9512690)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_ISMADEINMAINSTORY_OFFSET UNITYSDK_OFFSET(0x95126B0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x950C5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersMadeDrinkData_TypeDefinitionIndex = 51670;

	class DrinkMakerCheersMadeDrinkData : public ::System::Object
	{
	public:
		::Class_1_0D91A65E12C64271_1* _DrinkProto_k__BackingField; // 0x10
		::RPG::Client::DrinkMakerBarDrink* _DrinkData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _DrunkGroupList_k__BackingField; // 0x20
		::System::UInt32 _DrinkId_k__BackingField; // 0x28
		::System::Boolean _IsMadeInMainStory_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 drinkId, ::Class_1_0D91A65E12C64271_1* drinkMakerDrink, ::System::Collections::Generic::List_1<::System::UInt32>* drunkGroupList, ::System::Boolean isMadeInMainStory)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_0D91A65E12C64271_1*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA__CTOR_OFFSET))(this, drinkId, drinkMakerDrink, drunkGroupList, isMadeInMainStory);
		}

		::System::UInt32 get_DrinkId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKID_OFFSET))(this);
		}

		::System::Void set_DrinkId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKID_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerBarDrink* get_DrinkData()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKDATA_OFFSET))(this);
		}

		::System::Void set_DrinkData(::RPG::Client::DrinkMakerBarDrink* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKDATA_OFFSET))(this, value);
		}

		::Class_1_0D91A65E12C64271_1* get_DrinkProto()
		{
			return ((::Class_1_0D91A65E12C64271_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKPROTO_OFFSET))(this);
		}

		::System::Void set_DrinkProto(::Class_1_0D91A65E12C64271_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D91A65E12C64271_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKPROTO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DrunkGroupList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRUNKGROUPLIST_OFFSET))(this);
		}

		::System::Void set_DrunkGroupList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRUNKGROUPLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsMadeInMainStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_ISMADEINMAINSTORY_OFFSET))(this);
		}

		::System::Void set_IsMadeInMainStory(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_ISMADEINMAINSTORY_OFFSET))(this, value);
		}
	};
}
