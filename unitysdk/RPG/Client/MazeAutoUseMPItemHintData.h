#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MazeAutoUseMPItemHintData_ItemEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B21DA40)
#define RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1B21DA30)
#define RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21DA90)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeAutoUseMPItemHintData_TypeDefinitionIndex = 62227;

	class MazeAutoUseMPItemHintData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry>* _Items_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::Int32 GetItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GETITEMCOUNT_OFFSET))(this);
		}
	};
}
