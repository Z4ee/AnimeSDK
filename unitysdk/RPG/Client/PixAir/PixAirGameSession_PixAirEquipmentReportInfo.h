#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ENCHANT_OFFSET UNITYSDK_OFFSET(0x7A7FA0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x167710)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ENCHANT_OFFSET UNITYSDK_OFFSET(0x7C2360)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x167520)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x7BE220)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSession_PixAirEquipmentReportInfo_TypeDefinitionIndex = 75322;

	struct alignas(8) PixAirGameSession_PixAirEquipmentReportInfo
	{
		::System::Int32 _ID_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _TagList_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x20
		::System::Int32 _Enchant_k__BackingField; // 0x24

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_TagList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_TAGLIST_OFFSET))(this);
		}

		::System::Void set_TagList(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_TAGLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Int32 get_Enchant()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ENCHANT_OFFSET))(this);
		}

		::System::Void set_Enchant(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ENCHANT_OFFSET))(this, a1);
		}
	};
}
