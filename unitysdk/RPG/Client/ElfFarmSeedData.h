#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A88C3AAF0DD46F4C_2;
namespace RPG::GameCore { class RestaurantSeedConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFFARMSEEDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95A7C80)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_BIGCROPSMODELPATH_OFFSET UNITYSDK_OFFSET(0x95AD9D0)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x95ADBF0)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_CROPSMODELPATH_OFFSET UNITYSDK_OFFSET(0x95AD960)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_GROWTIME_OFFSET UNITYSDK_OFFSET(0x95A7330)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x95AD6A0)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_ISCURRENTTARGETRELATED_OFFSET UNITYSDK_OFFSET(0x95ADD50)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x95AAC50)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_ITEMICON_OFFSET UNITYSDK_OFFSET(0x95ADAB0)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x95ADA40)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95AD720)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x95AD7A0)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_PRODUCTCOUNT_OFFSET UNITYSDK_OFFSET(0x95AD880)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x95A7050)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x95AD810)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x95AD6C0)
#define RPG_CLIENT_ELFFARMSEEDDATA_GET__SPECIALPRODUCTARRAY_OFFSET UNITYSDK_OFFSET(0x95AD8F0)
#define RPG_CLIENT_ELFFARMSEEDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x95AD6B0)
#define RPG_CLIENT_ELFFARMSEEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95AD690)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmSeedData_TypeDefinitionIndex = 51731;

	class ElfFarmSeedData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmSeedData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::ElfFarmSeedData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_CREATE_OFFSET))(ID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantSeedConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantSeedConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_PRICE_OFFSET))(this);
		}

		::System::UInt32 get_ProductID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_PRODUCTID_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_ProductCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_PRODUCTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_GrowTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_GROWTIME_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_2*>* get__SpecialProductArray()
		{
			return ((::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET__SPECIALPRODUCTARRAY_OFFSET))(this);
		}

		::System::String* get_CropsModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_CROPSMODELPATH_OFFSET))(this);
		}

		::System::String* get_BigCropsModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_BIGCROPSMODELPATH_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ItemIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_ITEMICON_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentTargetRelated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMSEEDDATA_GET_ISCURRENTTARGETRELATED_OFFSET))(this);
		}
	};
}
